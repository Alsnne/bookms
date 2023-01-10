/********************************************************************************
** Form generated from reading UI file 'showtv.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWTV_H
#define UI_SHOWTV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_showtv
{
public:
    QTableWidget *tableWidget;
    QLabel *label;

    void setupUi(QWidget *showtv)
    {
        if (showtv->objectName().isEmpty())
            showtv->setObjectName(QString::fromUtf8("showtv"));
        showtv->resize(586, 385);
        tableWidget = new QTableWidget(showtv);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(40, 60, 521, 291));
        label = new QLabel(showtv);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 521, 31));

        retranslateUi(showtv);

        QMetaObject::connectSlotsByName(showtv);
    } // setupUi

    void retranslateUi(QWidget *showtv)
    {
        showtv->setWindowTitle(QCoreApplication::translate("showtv", "\345\233\276\344\271\246\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("showtv", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">\344\275\234\350\200\205\344\277\241\346\201\257</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class showtv: public Ui_showtv {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWTV_H
