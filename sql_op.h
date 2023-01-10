#ifndef SQL_OP_H
#define SQL_OP_H

#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlError>

#include "struct.h"

class sql_op
{
public:
	// 静态指针
	static sql_op* psql_op;

	// 获取实例
	static sql_op* getInstance()
	{
		if (nullptr == psql_op)
		{
			psql_op = new sql_op;
		}
		return psql_op;
	}

    sql_op();
	
	// 获取数据库连接
	QSqlDatabase getDB() { return db; }

	// 获取数据库查询对象
	QSqlQuery getSqlQuery() { return QSqlQuery(db); }
	
	// 获取数据库查询错误信息
	QString getLastError() { return getSqlQuery().lastError().text(); }
	
	// 设置表、视图名
	void setTVName(QString name) { tvName = name; }
	
	// 获取表、视图名
	QString getTVName() { return tvName; }

	// 连接 SQL Server 数据库
	bool connectToSQL(QString, QString, QString, QString);
	
	// 关闭数据库
	void closeDB() { db.close(); }

	// 执行 SQL 语句
	bool execSQL(QString);
	
	// 获取表 Authors 中的数据
	QList<Authors> getAuthorsData();

	// 获取表 Books 中的数据
	QList<Books> getBooksData();

	// 获取表 Bookstores 中的数据
	QList<Bookstores> getBookstoresData();

	// 获取表 PubHouses 中的数据
	QList<PubHouses> getPubHousesData();

	// 获取表 Publish 中的数据
	QList<Publish> getPublishData();

	// 获取表 Publishers 中的数据
	QList<Publishers> getPublishersData();
	
	// 获取表 Sale 中的数据
	QList<Sale> getSaleData();

	// 获取表 Write 中的数据
	QList<Write> getWriteData();

	// 获取视图 BookStoreSale 中的数据
	QList<BookStoreSale> getBookStoreSaleData();

	// 获取视图 ChineseBook 中的数据
	QList<ChineseBook> getChineseBookData();

	// 获取视图 HScoreBook 中的数据
	QList<HScoreBook> getHScoreBookData();

private:
	QSqlDatabase db;
	QString tvName;
};

#endif // SQL_OP_H
