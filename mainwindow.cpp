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
	// 获取 SQL 实例
	auto ptr = sql_op::getInstance();
	
	// 获取书店名
	QString strStore = ui->lineEdit_store->text();
	
	QString strQuery = QString("DECLARE @TranName VARCHAR(20);"
		"SELECT @TranName = 'DeleteBookstore';"
		"BEGIN TRANSACTION @TranName;"
		"USE BOOK;"
        "DELETE FROM Bookstores WHERE name = N'%1';"
		"COMMIT TRANSACTION @TranName;").arg(strStore);
	
	// 执行事务，返回查询结果
	bool flag = ptr->execSQL(strQuery);
	return flag;
}


// 满足触发器条件
void MainWindow::on_pushButton_trigger_clicked()
{
    // 满足触发器条件的 INSERT 语句
    QString strQuery = "INSERT INTO Sale VALUES ('红楼梦', '9787020002207', '上海书城', 45, 0);";
    // 获取 SQL 实例
    auto ptr = sql_op::getInstance();
    // 执行
    ptr->execSQL(strQuery);
}

// 违背触发器条件
void MainWindow::on_pushButton_trigger_err_clicked()
{
    // 违背触发器条件的 INSERT 语句
    QString strQuery = "INSERT INTO Sale VALUES ('小王子', '9787532747962', '上海书城', 16, 200);";
    // 获取 SQL 实例
    auto ptr = sql_op::getInstance();
    // 执行
    ptr->execSQL(strQuery);
}

// 执行存储过程
void MainWindow::on_pushButton_proc_clicked()
{
	// 获取 SQL 实例
	auto ptr = sql_op::getInstance();
	// 执行存储过程 SQL 语句
	QString strQuery = "EXEC ChangeAuthorName 'Yu Hua', '余华';";
	// 执行
	ptr->execSQL(strQuery);
}

// 执行视图查询
void MainWindow::on_pushButton_view_clicked()
{
	// 获取 SQL 实例
	auto ptr = sql_op::getInstance();
	ptr->setTVName("ViewQuery");
	showtv* s = new showtv;
	s->show();
}