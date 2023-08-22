#ifndef PYTHONTASKCONTROLLER_H
#define PYTHONTASKCONTROLLER_H


#include <QObject>

class PythonTaskController : public QObject
{
    Q_OBJECT
public:
    explicit PythonTaskController(QObject *parent = nullptr);

signals:
    void startPythonScript();

public slots:
    void handlePythonScriptFinished(int exitCode);
};



#endif // PYTHONTASKCONTROLLER_H
