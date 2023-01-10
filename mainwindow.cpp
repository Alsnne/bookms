#include <QMessagebox>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sql_op.h"
#include "showtv.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow::setWindowTitle(tr(u8"图书信息管理系统"));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionAuthors_triggered()
{
	auto ptr = sql_op::getInstance();
	ptr->setTVName("Authors");
	showtv* s = new showtv;
	s->show();
}

void MainWindow::on_actionBooks_triggered()
{
	auto ptr = sql_op::getInstance();
	ptr->setTVName("Books");
	showtv* s = new showtv;
	s->show();
}

void MainWindow::on_actionBookstores_triggered()
{
	auto ptr = sql_op::getInstance();
	ptr->setTVName("Bookstores");
	showtv* s = new showtv;
	s->show();
}

void MainWindow::on_actionPubHouses_triggered()
{
	auto ptr = sql_op::getInstance();
	ptr->setTVName("PubHouses");
	showtv* s = new showtv;
	s->show();
}

void MainWindow::on_actionPublish_triggered()
{
	auto ptr = sql_op::getInstance();
	ptr->setTVName("Publish");
	showtv* s = new showtv;
	s->show();
}

void MainWindow::on_actionPublishers_triggered()
{
	auto ptr = sql_op::getInstance();
	ptr->setTVName("Publishers");
	showtv* s = new showtv;
	s->show();
}

void MainWindow::on_actionSale_triggered()
{
	auto ptr = sql_op::getInstance();
	ptr->setTVName("Sale");
	showtv* s = new showtv;
	s->show();
}

void MainWindow::on_actionWrite_triggered()
{
	auto ptr = sql_op::getInstance();
	ptr->setTVName("Write");
	showtv* s = new showtv;
	s->show();
}

void MainWindow::on_actionBookStoreSale_triggered()
{
	auto ptr = sql_op::getInstance();
	ptr->setTVName("BookStoreSale");
	showtv* s = new showtv;
	s->show();
}

void MainWindow::on_actionChineseBook_triggered()
{
	auto ptr = sql_op::getInstance();
	ptr->setTVName("ChineseBook");
	showtv* s = new showtv;
	s->show();
}

void MainWindow::on_actionHScoreBook_triggered()
{
	auto ptr = sql_op::getInstance();
	ptr->setTVName("HScoreBook");
	showtv* s = new showtv;
	s->show();
}

// 事务操作
bool MainWindow::on_btn_tran_clicked()
{
	auto ptr = sql_op::getInstance();
	QString strStore = ui->lineEdit_store->text();
	QString strQuery = QString("DECLARE @TranName VARCHAR(20);"
		"SELECT @TranName = 'DeleteBookstore';"
		"BEGIN TRANSACTION @TranName;"
		"USE BOOK;"
        "DELETE FROM Bookstores WHERE name = N'%1';"
		"COMMIT TRANSACTION @TranName;").arg(strStore);
	bool flag = ptr->execSQL(strQuery);
	if (!flag)
	{
		qDebug() << "删除失败" << ptr->getLastError();
		QMessageBox::warning(this, tr(u8"警告"), tr(u8"删除失败"));
	}
	else
	{  
		QMessageBox::information(this, tr(u8"提示"), tr(u8"删除成功"));
	}
	return flag;
}
