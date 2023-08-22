#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <QDialog>

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButtonConnect_clicked()
{
    if(ui->lineEdit->text() != "fire")
    {
        QMessageBox::warning(this, "登录失败", "用户名错误");
        return;    //用户名不对
    }
    if(ui->lineEdit_2->text() != "1")
    {
        QMessageBox::warning(this, "登录失败", "密码错误");
        return;    //密码不对
    }
    close();
    w.show();
}
