/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QPushButton *pushButtonConnect;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(686, 496);
        label = new QLabel(Login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 180, 101, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(Login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 260, 101, 31));
        label_2->setFont(font);
        lineEdit = new QLineEdit(Login);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(240, 180, 231, 31));
        lineEdit_2 = new QLineEdit(Login);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(240, 260, 231, 31));
        label_3 = new QLabel(Login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 40, 381, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("04b_21"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        pushButtonConnect = new QPushButton(Login);
        pushButtonConnect->setObjectName(QStringLiteral("pushButtonConnect"));
        pushButtonConnect->setGeometry(QRect(260, 370, 171, 28));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(87);
        pushButtonConnect->setFont(font2);
        pushButtonConnect->setStyleSheet(QLatin1String("QPushButton{\n"
"	border: 1px solid rgb(85, 0, 255);\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(85, 0, 255);\n"
"	height: 28px;\n"
"	font-weight: 700;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	border: none;\n"
"	background-color: rgb(85, 0, 255);\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
""));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "\345\256\242\346\210\267\347\253\257", 0));
        label->setText(QApplication::translate("Login", "\350\264\246\345\217\267", 0));
        label_2->setText(QApplication::translate("Login", "\345\257\206\347\240\201", 0));
        label_3->setText(QApplication::translate("Login", "\345\270\246\345\274\217\350\276\223\351\200\201\346\234\272\347\201\253\346\203\205\346\243\200\346\265\213\347\273\210\347\253\257", 0));
        pushButtonConnect->setText(QApplication::translate("Login", "\347\231\273\345\275\225", 0));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
