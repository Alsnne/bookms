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
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_trigger;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_trigger_err;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton_proc;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pushButton_view;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(677, 610);
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
        label->setGeometry(QRect(0, 50, 671, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 90, 671, 31));
        label_2->setWordWrap(true);
        lineEdit_store = new QLineEdit(centralwidget);
        lineEdit_store->setObjectName(QString::fromUtf8("lineEdit_store"));
        lineEdit_store->setGeometry(QRect(190, 140, 113, 20));
        btn_tran = new QPushButton(centralwidget);
        btn_tran->setObjectName(QString::fromUtf8("btn_tran"));
        btn_tran->setGeometry(QRect(360, 140, 91, 24));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 180, 671, 41));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 230, 621, 51));
        label_4->setMinimumSize(QSize(200, 0));
        label_4->setWordWrap(true);
        pushButton_trigger = new QPushButton(centralwidget);
        pushButton_trigger->setObjectName(QString::fromUtf8("pushButton_trigger"));
        pushButton_trigger->setGeometry(QRect(210, 290, 41, 21));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 290, 121, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(350, 290, 121, 16));
        pushButton_trigger_err = new QPushButton(centralwidget);
        pushButton_trigger_err->setObjectName(QString::fromUtf8("pushButton_trigger_err"));
        pushButton_trigger_err->setGeometry(QRect(490, 290, 41, 21));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 340, 671, 31));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 380, 671, 20));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(150, 420, 201, 16));
        pushButton_proc = new QPushButton(centralwidget);
        pushButton_proc->setObjectName(QString::fromUtf8("pushButton_proc"));
        pushButton_proc->setGeometry(QRect(410, 420, 41, 21));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(0, 480, 671, 31));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(150, 530, 201, 16));
        pushButton_view = new QPushButton(centralwidget);
        pushButton_view->setObjectName(QString::fromUtf8("pushButton_view"));
        pushButton_view->setGeometry(QRect(400, 530, 41, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 677, 22));
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
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; color:#353535;\">\347\224\250\344\272\216\345\210\240\351\231\244\344\271\246\345\272\227\343\200\202\344\273\216\350\241\250 Bookstores \344\270\255\345\210\240\351\231\244\350\257\245\344\271\246\345\272\227\357\274\214\350\241\250 Sale \347\272\247\350\201\224\345\210\240\351\231\244\346\211\200\346\234\211\350\257\245\344\271\246\345\272\227\347\232\204\350\256\260\345\275\225\343\200\202</span></p></body></html>", nullptr));
        lineEdit_store->setText(QCoreApplication::translate("MainWindow", "\345\207\244\345\207\260\344\271\246\345\272\227", nullptr));
        lineEdit_store->setPlaceholderText(QCoreApplication::translate("MainWindow", "\344\271\246\345\272\227\345\220\215", nullptr));
        btn_tran->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\257\245\344\271\246\345\272\227", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\350\247\246\345\217\221\345\231\250</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"justify\"><span style=\" font-size:10pt; color:#353535;\">\345\234\250Sale\350\241\250\344\270\255\346\211\247\350\241\214\346\217\222\345\205\245\346\223\215\344\275\234\357\274\214\350\241\250\347\244\272\346\237\220\344\271\246\345\234\250\344\271\246\345\272\227\357\274\210\344\273\245\343\200\214\344\270\212\346\265\267\344\271\246\345\237\216\343\200\215\344\270\272\344\276\213\357\274\211\344\270\212\346\236\266\357\274\214\346\255\244\346\227\266\351\224\200\351\207\217\357\274\210saleVolume\357\274\211\345\272\224\344\270\2720\343\200\202\350\213\245\351\224\200\351\207\217\344\270\2720\357\274\210\345\215\263\346\273\241\350\266\263\350\247\246\345\217\221\345\231\250\346\235\241\344\273\266\357\274\211\357\274\214\346\255\243\345\270\270\346\217\222\345\205\245\357\274\233\345\220\246\345\210\231\357\274\214\346\227\240\346\263\225\346\217\222\345\205\245\357\274\214\347\250\213\345\272\217\345\274\271\345\207\272\351\224\231\350\257\257\344\277\241\346\201\257\343\200\202"
                        "</span></p></body></html>", nullptr));
        pushButton_trigger->setText(QCoreApplication::translate("MainWindow", "\346\211\247\350\241\214", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#00007f;\">\346\273\241\350\266\263\350\247\246\345\217\221\345\231\250\346\235\241\344\273\266</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#00007f;\">\350\277\235\350\203\214\350\247\246\345\217\221\345\231\250\346\235\241\344\273\266</span></p></body></html>", nullptr));
        pushButton_trigger_err->setText(QCoreApplication::translate("MainWindow", "\346\211\247\350\241\214", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\345\255\230\345\202\250\350\277\207\347\250\213</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; color:#353535;\">\344\277\256\346\224\271\344\275\234\345\256\266\347\232\204\347\254\224\345\220\215\343\200\202\344\277\256\346\224\271\350\241\250Books\344\270\255\347\232\204author\345\222\214\350\241\250Authors\344\270\255\347\232\204name\357\274\214\347\272\247\350\201\224\346\233\264\346\226\260\350\241\250Write\344\270\255\347\232\204author\343\200\202</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#00007f;\">\345\260\206\344\275\234\345\256\266 'Yu Hua' \344\277\256\346\224\271\344\270\272 '\344\275\231\345\215\216'</span></p></body></html>", nullptr));
        pushButton_proc->setText(QCoreApplication::translate("MainWindow", "\346\211\247\350\241\214", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\350\247\206\345\233\276</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#00007f;\">2022 \345\271\264\345\272\246\347\225\205\351\224\200\344\270\255\345\233\275\345\233\276\344\271\246</span></p></body></html>", nullptr));
        pushButton_view->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\350\241\250", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\350\247\206\345\233\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
