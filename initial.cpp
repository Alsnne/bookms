#include "initial.h"
#include "ui_initial.h"
#include "sql_op.h"
#include "mainwindow.h"

#include <QMessageBox>

#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_btn_exit_clicked()
{
    exit(0);
}


void Widget::on_btn_connect_clicked()
{
    QString serverName = ui->line_serverName->text();
    QString datasourceName = ui->line_datasourceName->text();
    QString userName = ui->line_userName->text();
    QString userPassword = ui->line_userPassword->text();


    // 获取sql_op类实例
    sql_op* ptr = sql_op::getInstance();

    if (ptr->connectToSQL(serverName, datasourceName, userName, userPassword))
    {
        QMessageBox::information(this, "信息", "连接成功！");
        MainWindow* w = new MainWindow();
        w->show();
        this->close();
    }
    else
    {
        QMessageBox::information(this, "信息", "连接失败！");
    }

	QSqlQuery sql = ptr->getSqlQuery();
    if(sql.exec("USE SCHOOL;"))
    {
        qDebug()<<"success";
    }
    else
    {
        qDebug()<<"fail";
    }
    if(sql.exec("create table Test4(test int);"))
    {
        qDebug()<<"success again";
    }
    else
    {
		qDebug() << "fail 2" + ptr->getLastError();
    }
}

