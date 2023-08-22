#include "pythonthread.h"
#include <QProcess>
#include <QDebug>

PythonThread::PythonThread(QObject *parent) : QThread(parent), m_stopFlag(false)
{
    pythonPath = "D:\\python\\Python1\\python.exe";  // 指定 Python 解释器路径
    scriptPath = "D:\\tcp\\tcpwidget\\tcp_shangweiji2\\1.py";  // 指定要执行的 Python 脚本路径
}

void PythonThread::stop()
{
    m_stopFlag = true; // 设置停止标志位
}

void PythonThread::run()
{
    QProcess process;
    process.start(pythonPath, QStringList() << scriptPath);
    if (process.waitForStarted()) {
        qDebug() << "Python script started.";

        while (!m_stopFlag && process.state() == QProcess::Running) {
            // 等待 Python 脚本执行完成，同时检查停止标志位和进程状态
            process.waitForFinished(100); // 100ms
        }

        if (m_stopFlag) {
            process.kill(); // 如果被要求停止，则杀死进程
            qDebug() << "Python script stopped.";
        } else {
            qDebug() << "Python script finished with exit code:" << process.exitCode();
        }
    } else {
        qDebug() << "Failed to start Python script.";
    }

    emit pythonFinished();
}
