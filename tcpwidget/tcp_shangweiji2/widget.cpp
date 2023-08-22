#include "widget.h"
#include "ui_widget.h"
#include "pythonthread.h"
#include "QtDebug"
#include <QMessageBox>
#include <QMovie>   //动图
#include <QDateTime>
#include <QBuffer>
#include <QFile>
#include <QTextStream>
#include <QImageReader>
#include <QtNetwork>
#include <QApplication>
#include <QLabel>
#include <QByteArray>
#include <QImage>
#include <QIODevice>
#include <QDataStream>
#include <QByteArray>
#include <QImageReader>
#include <QSize>
#include <QPixmap>
#include <QProcess>
#include <QDate>
#include <QFont>
#include <QTextCharFormat>
#include <QTextCursor>

QProcess process;
QString pythonPath = "D:\\python\\Python1\\python.exe";  // 指定 Python 解释器路径
QString scriptPath = "D:\\tcp\\tcpwidget\\tcp_shangweiji2\\1.py";  // 指定要执行的 Python 脚本路径
QString folderPath = "D:\\tcp\\tcpwidget\\tcp_shangweiji2\\picture\\";  // 文件夹路径
int interval = 1000;  // 1秒
int receivedCount = 0;

//显示时间
QDateTime currentDateTime = QDateTime::currentDateTime();
QString dateTimeString = currentDateTime.toString("yyyy-MM-dd hh:mm:ss");


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 初始化窗口内容
    ui->lineEdit_IP->setText("192.168.97.137");
    ui->lineEdit_Port->setText("8000");

    // 创建（socket）监听的服务器对象,分配空间，指定父对象
    tcpsocket = new QTcpSocket(this);
    setWindowTitle("客户端");

    pythonThread = nullptr; // 初始化 pythonThread 为 nullptr

    // 连接服务器成功，socket对象发出信号
    connect(tcpsocket, &QTcpSocket::connected, [this]() {
        QMessageBox::information(this, "连接提示", "连接服务器成功", QMessageBox::Ok);
    });

    // 连接断开，socket发出信号
    connect(tcpsocket, &QTcpSocket::disconnected, [this]() {
        QMessageBox::warning(this, "连接提示", "网络断开", QMessageBox::Ok);

    });


    // 获取现有的字体
    QFont font = ui->textEdit_Read->font();
    // 设置字体大小为16
    font.setPointSize(20);
    // 将字体应用于文本框
    // 保存默认文本格式
    QTextCharFormat defaultFormat = ui->textEdit_Read->currentCharFormat();
    ui->textEdit_Read->setFont(font);
    ui->textEdit_Read->setText("安全");


    // 构造函数中初始化
    QTimer* timer1 = new QTimer(this);
    timer1->setInterval(10000);  // 设置定时器间隔为 10 秒
    connect(timer1, &QTimer::timeout, this, &Widget::checkSafety);


    // 接收到数据时执行的槽函数


    connect(tcpsocket, &QTcpSocket::readyRead, [this, timer1, &receivedCount]() {

        // 重置定时器和标记
        timer1->start();
        isSafeDisplayed = false;

        QByteArray data = tcpsocket->readAll();
        QString receivedData = QString(data).trimmed();

        // 更新界面上的文本框
        //ui->textEdit_Read->setText(receivedData);

        // 如果接收到的数据为"1"
        if (receivedData == "1") {
            // 增加接收到的次数
            receivedCount++;

            // 设置文本为红色
            ui->textEdit_Read->setTextColor(Qt::red);
            ui->textEdit_Read->setText("火灾警告");

            // 获取当前时间
            QDateTime currentTime = QDateTime::currentDateTime();
            QString dateTimeString = currentTime.toString("yyyy-MM-dd hh:mm:ss");

            // 构建显示的文本
            QString displayText = QString("%1 (Received %2 times)").arg(dateTimeString).arg(receivedCount);

            // 显示文本
            ui->textBrowser->append(displayText);
            ui->textBrowser->append("火灾，请立即处理");
        }
    });




    // 创建定时器
    QTimer* timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [=]() {
        displayNextImage();
    });
    timer->start(interval);

    // 创建文件监视器
    QFileSystemWatcher* fileWatcher = new QFileSystemWatcher(this);
    fileWatcher->addPath(folderPath);
    connect(fileWatcher, &QFileSystemWatcher::directoryChanged, this, &Widget::handleDirectoryChange);

    // 初始化当前图片列表
    QDir dir(folderPath);
    QStringList filters;
    filters << "*.jpg" << "*.jpeg" << "*.png";  // 可根据需要添加其他图片格式的过滤器
    dir.setNameFilters(filters);
    QStringList fileList = dir.entryList(QDir::Files);
    this->imageList = fileList;
}

Widget::~Widget()
{
    delete ui;
}

//连接按钮
void Widget::on_pushButtonConnect_clicked()
{
    // 创建 PythonThread 对象
    pythonThread = new PythonThread(this);
    connect(pythonThread, &PythonThread::pythonFinished, this, &Widget::pythonScriptFinished);

    pythonThread->start();

    QString IP = ui->lineEdit_IP->text();
    quint16 Port = ui->lineEdit_Port->text().toInt();
    // 与服务器连接
    tcpsocket->connectToHost(QHostAddress(IP), Port);
}

//断开按钮
void Widget::on_pushButtonClose_clicked()
{
    // 断开与服务器连接
    tcpsocket->disconnectFromHost();
    tcpsocket->close();

    // 关闭 PythonThread
    if (pythonThread) {
        pythonThread->stop(); // 自定义 PythonThread 的停止方法
        pythonThread->wait(); // 等待 PythonThread 完全停止
        delete pythonThread;
        pythonThread = nullptr;
    }
}

//显示图片
void Widget::displayNextImage()
{
    if (imageList.isEmpty())
        return;

    QString fileName = imageList.first();
    QString filePath = folderPath + "/" + fileName;

    // 显示图片到 img_label
    QPixmap pixmap(filePath);
    ui->img_label->setPixmap(pixmap.scaled(ui->img_label->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

    // 删除已显示的图片
    QFile::remove(filePath);

    // 从图片列表中移除已显示的图片
    imageList.removeFirst();

}


void Widget::handleDirectoryChange(const QString& path)
{
    qDebug() << "Directory changed: " << path;

    // 更新图片列表
    QDir dir(path);
    QStringList filters;
    filters << "*.jpg" << "*.jpeg" << "*.png";
    dir.setNameFilters(filters);
    QStringList fileList = dir.entryList(QDir::Files);
    imageList = fileList;
}



// python程序结束
void Widget::pythonScriptFinished()
{
    qDebug() << "Python script finished.";

    // 其他处理代码...

    // 显示图片的代码...
}


//检查是否已经安全
void Widget::checkSafety()
{
    // 如果连续 10 秒没有接收到 "1" 数据且未显示过 "安全" 字符串
    if (!isSafeDisplayed) {
        // 显示 "安全"
        // 恢复默认文本格式
        ui->textEdit_Read->setCurrentCharFormat(defaultFormat);
        ui->textEdit_Read->setText("安全");
        isSafeDisplayed = true;
    }
}


