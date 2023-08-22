#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QHostAddress>    //ip地址
#include <QIODevice>
#include <QDataStream>
#include <QByteArray>
#include <QImageReader>
#include <QSize>
#include <QPixmap>
#include <QObject>
#include <QCoreApplication>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QUrl>
#include <QLabel> // 添加此行
#include <QProcess>
#include "pythonthread.h"
#include <QTextCharFormat>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();


//按钮
private slots:
    void on_pushButtonConnect_clicked();  //连接按钮
    void on_pushButtonClose_clicked();    //关闭按钮
    void displayNextImage();
    void handleDirectoryChange(const QString& path);

    void pythonScriptFinished();

    void checkSafety();


private:
    Ui::Widget *ui;
    QTcpSocket *tcpsocket;    //声明套接字，客户端只有一个通信套接字
    //qint64 imageSize;      // 图像大小
    // 添加一个私有变量用于存储图像数据
    //QByteArray imageData;
    QLabel *img_label; // 添加这行声明
    QStringList imageList;
    int currentImageIndex;  // 当前显示的图片索引
    PythonThread* pythonThread;

    QTimer *timer;  // QTimer 对象用于定时检测
    bool isSafeDisplayed;  // 标记是否已经显示了 "安全" 字符串
    QTextCharFormat defaultFormat; // 声明成员变量


};



#endif // WIDGET_H








