#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    // 连接 SQL Server 数据库
    // bool connectToSQL(QString, QString, QString, QString);

private slots:
    void on_btn_exit_clicked();

    void on_btn_connect_clicked();

private:
    Ui::Widget *ui;
    // QSqlDatabase db;
};
#endif // WIDGET_H
