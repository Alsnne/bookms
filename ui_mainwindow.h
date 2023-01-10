/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAuthors;
    QAction *actionBooks;
    QAction *actionBookstores;
    QAction *actionPubHouses;
    QAction *actionPublishers;
    QAction *actionSale;
    QAction *actionWrite;
    QAction *actionBookStoreSale;
    QAction *actionChineseBook;
    QAction *actionHScoreBook;
    QAction *actionPublish;
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_store;
    QPushButton *btn_tran;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(656, 548);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionAuthors = new QAction(MainWindow);
        actionAuthors->setObjectName(QString::fromUtf8("actionAuthors"));
        actionBooks = new QAction(MainWindow);
        actionBooks->setObjectName(QString::fromUtf8("actionBooks"));
        actionBookstores = new QAction(MainWindow);
        actionBookstores->setObjectName(QString::fromUtf8("actionBookstores"));
        actionPubHouses = new QAction(MainWindow);
        actionPubHouses->setObjectName(QString::fromUtf8("actionPubHouses"));
        actionPublishers = new QAction(MainWindow);
        actionPublishers->setObjectName(QString::fromUtf8("actionPublishers"));
        actionSale = new QAction(MainWindow);
        actionSale->setObjectName(QString::fromUtf8("actionSale"));
        actionWrite = new QAction(MainWindow);
        actionWrite->setObjectName(QString::fromUtf8("actionWrite"));
        actionBookStoreSale = new QAction(MainWindow);
        actionBookStoreSale->setObjectName(QString::fromUtf8("actionBookStoreSale"));
        actionChineseBook = new QAction(MainWindow);
        actionChineseBook->setObjectName(QString::fromUtf8("actionChineseBook"));
        actionHScoreBook = new QAction(MainWindow);
        actionHScoreBook->setObjectName(QString::fromUtf8("actionHScoreBook"));
        actionPublish = new QAction(MainWindow);
        actionPublish->setObjectName(QString::fromUtf8("actionPublish"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 50, 71, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 100, 491, 31));
        lineEdit_store = new QLineEdit(centralwidget);
        lineEdit_store->setObjectName(QString::fromUtf8("lineEdit_store"));
        lineEdit_store->setGeometry(QRect(190, 150, 113, 20));
        btn_tran = new QPushButton(centralwidget);
        btn_tran->setObjectName(QString::fromUtf8("btn_tran"));
        btn_tran->setGeometry(QRect(360, 150, 91, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 656, 22));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(actionAuthors);
        menu->addAction(actionBooks);
        menu->addAction(actionBookstores);
        menu->addAction(actionPubHouses);
        menu->addAction(actionPublish);
        menu->addAction(actionPublishers);
        menu->addAction(actionSale);
        menu->addAction(actionWrite);
        menu_2->addAction(actionBookStoreSale);
        menu_2->addAction(actionChineseBook);
        menu_2->addAction(actionHScoreBook);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAuthors->setText(QCoreApplication::translate("MainWindow", "Authors", nullptr));
        actionBooks->setText(QCoreApplication::translate("MainWindow", "Books", nullptr));
        actionBookstores->setText(QCoreApplication::translate("MainWindow", "Bookstores", nullptr));
        actionPubHouses->setText(QCoreApplication::translate("MainWindow", "PubHouses", nullptr));
        actionPublishers->setText(QCoreApplication::translate("MainWindow", "Publishers", nullptr));
        actionSale->setText(QCoreApplication::translate("MainWindow", "Sale", nullptr));
        actionWrite->setText(QCoreApplication::translate("MainWindow", "Write", nullptr));
        actionBookStoreSale->setText(QCoreApplication::translate("MainWindow", "BookStoreSale", nullptr));
        actionChineseBook->setText(QCoreApplication::translate("MainWindow", "ChineseBook", nullptr));
        actionHScoreBook->setText(QCoreApplication::translate("MainWindow", "HScoreBook", nullptr));
        actionPublish->setText(QCoreApplication::translate("MainWindow", "Publish", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\344\272\213\345\212\241</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#353535;\">\347\224\250\344\272\216\345\210\240\351\231\244\344\271\246\345\272\227\343\200\202\344\273\216\350\241\250 Bookstores \344\270\255\345\210\240\351\231\244\350\257\245\344\271\246\345\272\227\357\274\214\350\241\250 Sale \347\272\247\350\201\224\345\210\240\351\231\244\346\211\200\346\234\211\350\257\245\344\271\246\345\272\227\347\232\204\350\256\260\345\275\225\343\200\202</span></p></body></html>", nullptr));
        lineEdit_store->setText(QCoreApplication::translate("MainWindow", "\345\207\244\345\207\260\344\271\246\345\272\227", nullptr));
        lineEdit_store->setPlaceholderText(QCoreApplication::translate("MainWindow", "\344\271\246\345\272\227\345\220\215", nullptr));
        btn_tran->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\257\245\344\271\246\345\272\227", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\350\241\250", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\350\247\206\345\233\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
