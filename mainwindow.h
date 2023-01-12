#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
   // 查看表
    void on_actionAuthors_triggered();
    void on_actionBooks_triggered();
	void on_actionBookstores_triggered();
    void on_actionPubHouses_triggered();
	void on_actionPublish_triggered();
	void on_actionPublishers_triggered();
	void on_actionSale_triggered();
	void on_actionWrite_triggered();

    // 查看视图
    void on_actionBookStoreSale_triggered();
    void on_actionChineseBook_triggered();
	void on_actionHScoreBook_triggered();
    
    // 事务操作
	bool on_btn_tran_clicked();

    // 满足触发器条件
    void on_pushButton_trigger_clicked();

    // 违背触发器条件
    void on_pushButton_trigger_err_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
