/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QWidget *widget;
    QLabel *label_IP;
    QLabel *label_Port;
    QLineEdit *lineEdit_IP;
    QLineEdit *lineEdit_Port;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonClose;
    QWidget *widget_3;
    QLabel *img_label;
    QLabel *label_3;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QWidget *widget_4;
    QLabel *label_4;
    QTextEdit *textEdit_Read;
    QPushButton *pushButton_Exit;
    QWidget *widget_2;
    QTextBrowser *textBrowser;
    QLabel *label_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1104, 708);
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        Widget->setFont(font);
        Widget->setStyleSheet(QLatin1String("QWidget0{\n"
"	border-radius: 25px;\n"
"	padding-left: 10px;\n"
"}\n"
"QWidget0{\n"
"	border: 2px solid  rgb(85, 0, 255);\n"
"}"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(400, 20, 431, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        font1.setPointSize(18);
        label->setFont(font1);
        label->setLayoutDirection(Qt::LeftToRight);
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 80, 551, 211));
        label_IP = new QLabel(widget);
        label_IP->setObjectName(QStringLiteral("label_IP"));
        label_IP->setGeometry(QRect(20, 30, 161, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        font2.setPointSize(12);
        label_IP->setFont(font2);
        label_Port = new QLabel(widget);
        label_Port->setObjectName(QStringLiteral("label_Port"));
        label_Port->setGeometry(QRect(20, 90, 161, 20));
        label_Port->setFont(font2);
        lineEdit_IP = new QLineEdit(widget);
        lineEdit_IP->setObjectName(QStringLiteral("lineEdit_IP"));
        lineEdit_IP->setGeometry(QRect(230, 20, 271, 31));
        lineEdit_IP->setStyleSheet(QLatin1String("QLineEdit{\n"
"	height: 31px;\n"
"	border-radius: 15px;\n"
"	padding-left: 10px;\n"
"}\n"
"QLineEdit:focus{\n"
"	border: 2px solid  rgb(85, 0, 255);\n"
"}\n"
""));
        lineEdit_Port = new QLineEdit(widget);
        lineEdit_Port->setObjectName(QStringLiteral("lineEdit_Port"));
        lineEdit_Port->setGeometry(QRect(230, 80, 271, 31));
        lineEdit_Port->setStyleSheet(QLatin1String("QLineEdit{\n"
"	height: 31px;\n"
"	border-radius: 15px;\n"
"	padding-left: 10px;\n"
"}\n"
"QLineEdit:focus{\n"
"	border: 2px solid  rgb(85, 0, 255);\n"
"}\n"
""));
        pushButtonConnect = new QPushButton(widget);
        pushButtonConnect->setObjectName(QStringLiteral("pushButtonConnect"));
        pushButtonConnect->setGeometry(QRect(61, 140, 171, 28));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(87);
        pushButtonConnect->setFont(font3);
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
        pushButtonClose = new QPushButton(widget);
        pushButtonClose->setObjectName(QStringLiteral("pushButtonClose"));
        pushButtonClose->setGeometry(QRect(280, 140, 171, 28));
        pushButtonClose->setFont(font3);
        pushButtonClose->setStyleSheet(QLatin1String("QPushButton{\n"
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
        widget_3 = new QWidget(Widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(40, 310, 551, 331));
        img_label = new QLabel(widget_3);
        img_label->setObjectName(QStringLiteral("img_label"));
        img_label->setGeometry(QRect(50, 60, 451, 251));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        font4.setPointSize(16);
        img_label->setFont(font4);
        img_label->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 15, 191, 21));
        label_3->setFont(font2);
        line = new QFrame(widget_3);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(17, 40, 511, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(widget_3);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(3, 50, 20, 271));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(widget_3);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(10, 310, 521, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(widget_3);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(520, 50, 20, 271));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        widget_4 = new QWidget(Widget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(640, 80, 431, 211));
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 10, 181, 31));
        label_4->setFont(font2);
        textEdit_Read = new QTextEdit(widget_4);
        textEdit_Read->setObjectName(QStringLiteral("textEdit_Read"));
        textEdit_Read->setGeometry(QRect(30, 50, 381, 131));
        textEdit_Read->setStyleSheet(QStringLiteral(""));
        pushButton_Exit = new QPushButton(Widget);
        pushButton_Exit->setObjectName(QStringLiteral("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(490, 650, 211, 41));
        pushButton_Exit->setFont(font3);
        pushButton_Exit->setStyleSheet(QLatin1String("QPushButton{\n"
"	border: 1px solid rgb(85, 0, 255);\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(85, 0, 255);\n"
"	height: 28px;\n"
"	font-weight: 700;\n"
"    border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	border: none;\n"
"	background-color: rgb(85, 0, 255);\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        widget_2 = new QWidget(Widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(640, 310, 431, 331));
        textBrowser = new QTextBrowser(widget_2);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 50, 381, 271));
        textBrowser->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 15, 141, 21));
        label_2->setFont(font2);

        retranslateUi(Widget);
        QObject::connect(pushButton_Exit, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label->setText(QApplication::translate("Widget", "\345\270\246\345\274\217\350\276\223\351\200\201\346\234\272\347\201\253\346\203\205\347\233\221\346\265\213\347\273\210\347\253\257  V1.0", 0));
        label_IP->setText(QApplication::translate("Widget", "Jetson Nano IP", 0));
        label_Port->setText(QApplication::translate("Widget", "Jetson Nano Port", 0));
        pushButtonConnect->setText(QApplication::translate("Widget", "\350\277\236\346\216\245", 0));
        pushButtonClose->setText(QApplication::translate("Widget", "\346\226\255\345\274\200", 0));
        img_label->setText(QApplication::translate("Widget", "\350\276\223\351\200\201\345\270\246\347\224\273\351\235\242", 0));
        label_3->setText(QApplication::translate("Widget", "\350\276\223\351\200\201\345\270\246\345\233\276\347\211\207\346\230\276\347\244\272", 0));
        label_4->setText(QApplication::translate("Widget", "\350\276\223\351\200\201\345\270\246\345\275\223\345\211\215\347\212\266\345\206\265\346\230\276\347\244\272", 0));
        textEdit_Read->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Adobe \351\273\221\344\275\223 Std R'; font-size:9.07563pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:9.07563pt;\"><br /></p></body></html>", 0));
        pushButton_Exit->setText(QApplication::translate("Widget", "\351\200\200\345\207\272\347\263\273\347\273\237", 0));
        textBrowser->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Adobe \351\273\221\344\275\223 Std R'; font-size:9.07563pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:9.07563pt;\"><br /></p></body></html>", 0));
        label_2->setText(QApplication::translate("Widget", "\350\276\223\351\200\201\345\270\246\350\255\246\346\212\245\350\256\260\345\275\225", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
