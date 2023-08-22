#ifndef PYTHONTHREAD_H
#define PYTHONTHREAD_H

#include <QThread>
#include <QProcess>

class PythonThread : public QThread
{
    Q_OBJECT
public:
    explicit PythonThread(QObject *parent = nullptr);
    void stop(); // 停止线程的方法

signals:
    void pythonFinished();

protected:
    void run() override;

private:
    QString pythonPath;
    QString scriptPath;
    bool m_stopFlag; // 停止标志位
};

#endif // PYTHONTHREAD_H
