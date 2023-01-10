#include "sql_op.h"

#include <QMessageBox>

// 初始化静态指针
sql_op* sql_op::psql_op = nullptr;

sql_op::sql_op() {}


bool sql_op::connectToSQL(QString serverName, QString datasourceName, QString userName, QString userPassword)
{
	db = QSqlDatabase::addDatabase("QODBC");
	qDebug() << "ODBC driver?" << db.isValid(); //查看QT是否支持该类型的数据库
	db.setHostName(serverName);   // 服务器名
	db.setDatabaseName(datasourceName); // 数据源名
	db.setUserName(userName);   // 数据库用户名
	db.setPassword(userPassword);   // 数据库用户密码
	if (!db.open())
	{
		qDebug() << "Fail to open the database.";
		return false;
	}
	else
	{
		qWarning() << "Successfully open database!";
		return true;
	}
}

bool sql_op::execSQL(QString query)
{
	QSqlQuery sql_query = getSqlQuery();
	if (!sql_query.exec(query))
	{
		qDebug() << sql_query.lastError();
		return false;
	}
	else
	{
		return true;
	}
}


QList<Authors> sql_op::getAuthorsData()
{
	QList<Authors> authorsList;
	QString sql = "USE BOOK; SELECT * FROM Authors;";
	QSqlQuery query = getSqlQuery();
	if (query.exec(sql))
	{ }
	else
	{
		qDebug() << "Error: Fail to execute sql." << query.lastError();
		QMessageBox::warning(nullptr, "错误", "查询失败");
	}
	while (query.next())
	{
		Authors authors;
		authors.name = query.value(0).toString();
		authors.gender = query.value(1).toString();
		authors.nationality = query.value(2).toString();
		authors.yearOfBirth = query.value(3).toInt();
		authorsList.push_back(authors);
	}
	return authorsList;	
}

QList<Books> sql_op::getBooksData()
{
	QList<Books> booksList;
	QString sql = "USE BOOK; SELECT * FROM Books;";
	QSqlQuery query = getSqlQuery();
	if (query.exec(sql))
	{
	}
	else
	{
		qDebug() << "Error: Fail to execute sql." << query.lastError();
		QMessageBox::warning(nullptr, "错误", "查询失败");
	}
	while (query.next())
	{
		Books books;
		books.title = query.value(0).toString();
		books.ISBN = query.value(1).toString();
		books.author = query.value(2).toString();
		books.pubHouse = query.value(3).toString();
		books.publisher = query.value(4).toString();
		books.pages = query.value(5).toInt();
		books.score = query.value(6).toFloat();
		booksList.push_back(books);
	}
	return booksList;
}

QList<Bookstores> sql_op::getBookstoresData()
{
	QList<Bookstores> bookstoresList;
	QString sql = "USE BOOK; SELECT * FROM Bookstores;";
	QSqlQuery query = getSqlQuery();
	if (query.exec(sql))
	{
	}
	else
	{
		qDebug() << "Error: Fail to execute sql." << query.lastError();
		QMessageBox::warning(nullptr, "错误", "查询失败");
	}
	while (query.next())
	{
		Bookstores bookstores;
		bookstores.name = query.value(0).toString();
		bookstores.country = query.value(1).toString();
		bookstores.city = query.value(2).toString();
		bookstoresList.push_back(bookstores);
	}
	return bookstoresList;
}

QList<PubHouses> sql_op::getPubHousesData()
{
	QList<PubHouses> pubHousesList;
	QString sql = "USE BOOK; SELECT * FROM PubHouses;";
	QSqlQuery query = getSqlQuery();
	if (query.exec(sql))
	{
	}
	else
	{
		qDebug() << "Error: Fail to execute sql." << query.lastError();
		QMessageBox::warning(nullptr, "错误", "查询失败");
	}
	while (query.next())
	{
		PubHouses pubHouses;
		pubHouses.name = query.value(0).toString();
		pubHouses.country = query.value(1).toString();
		pubHouses.city = query.value(2).toString();
		pubHouses.yearOfEstablishment = query.value(3).toInt();
		pubHousesList.push_back(pubHouses);
	}
	return pubHousesList;
}

QList<Publish> sql_op::getPublishData()
{
	QList<Publish> publishList;
	QString sql = "USE BOOK; SELECT * FROM Publish;";
	QSqlQuery query = getSqlQuery();
	if (query.exec(sql))
	{
	}
	else
	{
		qDebug() << "Error: Fail to execute sql." << query.lastError();
		QMessageBox::warning(nullptr, "错误", "查询失败");
	}
	while (query.next())
	{
		Publish publish;
		publish.ISBN = query.value(0).toString();
		publish.pubHouse = query.value(1).toString();
		publish.publisher = query.value(2).toString();
		publish.yearOfPublish = query.value(3).toInt();
		publishList.push_back(publish);
	}
	return publishList;
}

QList<Publishers> sql_op::getPublishersData()
{
	QList<Publishers> publishersList;
	QString sql = "USE BOOK; SELECT * FROM Publishers;";
	QSqlQuery query = getSqlQuery();
	if (query.exec(sql))
	{
	}
	else
	{
		qDebug() << "Error: Fail to execute sql." << query.lastError();
		QMessageBox::warning(nullptr, "错误", "查询失败");
	}
	while (query.next())
	{
		Publishers publishers;
		publishers.name = query.value(0).toString();
		publishers.country = query.value(1).toString();
		publishers.city = query.value(2).toString();
		publishers.yearOfEstablishment = query.value(3).toInt();
		publishersList.push_back(publishers);
	}
	return publishersList;
}

QList<Sale> sql_op::getSaleData()
{
	QList<Sale> saleList;
	QString sql = "USE BOOK; SELECT * FROM Sale;";
	QSqlQuery query = getSqlQuery();
	if (query.exec(sql))
	{
	}
	else
	{
		qDebug() << "Error: Fail to execute sql." << query.lastError();
		QMessageBox::warning(nullptr, "错误", "查询失败");
	}
	while (query.next())
	{
		Sale sale;
		sale.titleOfBook = query.value(0).toString();
		sale.ISBN = query.value(1).toString();
		sale.store = query.value(2).toString();
		sale.price = query.value(3).toFloat();
		sale.saleVolume = query.value(4).toInt();
		saleList.push_back(sale);
	}
	return saleList;
}

QList<Write> sql_op::getWriteData()
{
	QList<Write> writeList;
	QString sql = "USE BOOK; SELECT * FROM Write;";
	QSqlQuery query = getSqlQuery();
	if (query.exec(sql))
	{
	}
	else
	{
		qDebug() << "Error: Fail to execute sql." << query.lastError();
		QMessageBox::warning(nullptr, "错误", "查询失败");
	}
	while (query.next())
	{
		Write write;
		write.ISBN = query.value(0).toString();
		write.author = query.value(1).toString();
		writeList.push_back(write);
	}
	return writeList;
}

QList<BookStoreSale> sql_op::getBookStoreSaleData()
{
	QList<BookStoreSale> bookStoreSaleList;
	QString sql = "USE BOOK; SELECT * FROM BookStoreSale;";
	QSqlQuery query = getSqlQuery();
	if (query.exec(sql))
	{
	}
	else
	{
		qDebug() << "Error: Fail to execute sql." << query.lastError();
		QMessageBox::warning(nullptr, "错误", "查询失败");
	}
	while (query.next())
	{
		BookStoreSale bookStoreSale;
		bookStoreSale.store = query.value(0).toString();
		bookStoreSale.title = query.value(1).toString();
		bookStoreSale.ISBN = query.value(2).toString();
		bookStoreSale.author = query.value(3).toString();
		bookStoreSale.nationality = query.value(4).toString();
		bookStoreSale.price = query.value(5).toFloat();
		bookStoreSale.sales = query.value(6).toFloat();
		bookStoreSaleList.push_back(bookStoreSale);
	}
	return bookStoreSaleList;
}

QList<ChineseBook> sql_op::getChineseBookData()
{
	QList<ChineseBook> chineseBookList;
	QString sql = "USE BOOK; SELECT * FROM ChineseBook;";
	QSqlQuery query = getSqlQuery();
	if (query.exec(sql))
	{
	}
	else
	{
		qDebug() << "Error: Fail to execute sql." << query.lastError();
		QMessageBox::warning(nullptr, "错误", "查询失败");
	}
	while (query.next())
	{
		ChineseBook chineseBook;
		chineseBook.title = query.value(0).toString();
		chineseBook.ISBN = query.value(1).toString();
		chineseBook.author = query.value(2).toString();
		chineseBook.year = query.value(3).toInt();
		chineseBook.score = query.value(4).toFloat();
		chineseBookList.push_back(chineseBook);
	}
	return chineseBookList;
}

QList<HScoreBook> sql_op::getHScoreBookData()
{
	QList<HScoreBook> hScoreBookList;
	QString sql = "USE BOOK; SELECT * FROM HScoreBook;";
	QSqlQuery query = getSqlQuery();
	if (query.exec(sql))
	{
	}
	else
	{
		qDebug() << "Error: Fail to execute sql." << query.lastError();
		QMessageBox::warning(nullptr, "错误", "查询失败");
	}
	while (query.next())
	{
		HScoreBook hScoreBook;
		hScoreBook.title = query.value(0).toString();
		hScoreBook.ISBN = query.value(1).toString();
		hScoreBook.author = query.value(2).toString();
		hScoreBook.year = query.value(3).toInt();
		hScoreBook.score = query.value(4).toFloat();
		hScoreBookList.push_back(hScoreBook);
	}
	return hScoreBookList;
}