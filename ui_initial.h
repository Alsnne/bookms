/********************************************************************************
** Form generated from reading UI file 'initial.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITIAL_H
#define UI_INITIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *line_serverName;
    QLineEdit *line_datasourceName;
    QLineEdit *line_userName;
    QLineEdit *line_userPassword;
    QPushButton *btn_connect;
    QPushButton *btn_exit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(423, 365);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 30, 271, 81));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 100, 91, 16));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 140, 54, 16));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 170, 54, 16));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(110, 200, 54, 16));
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(110, 230, 30, 17));
        line_serverName = new QLineEdit(Widget);
        line_serverName->setObjectName(QString::fromUtf8("line_serverName"));
        line_serverName->setGeometry(QRect(170, 140, 141, 21));
        line_datasourceName = new QLineEdit(Widget);
        line_datasourceName->setObjectName(QString::fromUtf8("line_datasourceName"));
        line_datasourceName->setGeometry(QRect(170, 170, 141, 21));
        line_userName = new QLineEdit(Widget);
        line_userName->setObjectName(QString::fromUtf8("line_userName"));
        line_userName->setGeometry(QRect(170, 200, 141, 21));
        line_userPassword = new QLineEdit(Widget);
        line_userPassword->setObjectName(QString::fromUtf8("line_userPassword"));
        line_userPassword->setGeometry(QRect(170, 230, 141, 21));
        line_userPassword->setEchoMode(QLineEdit::Password);
        btn_connect = new QPushButton(Widget);
        btn_connect->setObjectName(QString::fromUtf8("btn_connect"));
        btn_connect->setGeometry(QRect(100, 270, 80, 24));
        btn_exit = new QPushButton(Widget);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));
        btn_exit->setGeometry(QRect(240, 270, 80, 24));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\345\233\276\344\271\246\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">\345\233\276\344\271\246\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; color:#3b3b3b;\">\344\275\234\350\200\205\357\274\232\346\234\261\347\276\277\345\220\215</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:10pt;\">\346\234\215\345\212\241\345\231\250</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:10pt;\">\346\225\260\346\215\256\346\272\220</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:10pt;\">\347\224\250\346\210\267\345\220\215</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:10pt;\">\345\257\206	\347\240\201</span></p></body></html>", nullptr));
        line_serverName->setText(QString());
        line_serverName->setPlaceholderText(QCoreApplication::translate("Widget", "serverName", nullptr));
        line_datasourceName->setText(QString());
        line_datasourceName->setPlaceholderText(QCoreApplication::translate("Widget", "datasourceName", nullptr));
        line_userName->setText(QString());
        line_userName->setPlaceholderText(QCoreApplication::translate("Widget", "Username", nullptr));
        line_userPassword->setText(QString());
        line_userPassword->setPlaceholderText(QCoreApplication::translate("Widget", "Password", nullptr));
        btn_connect->setText(QCoreApplication::translate("Widget", "\350\277\236  \346\216\245", nullptr));
        btn_exit->setText(QCoreApplication::translate("Widget", "\351\200\200  \345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITIAL_H
