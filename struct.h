#pragma once

#include <QString>

struct Authors
{
	QString name;
	QString gender;
	QString nationality;
	int yearOfBirth;
};

struct Books
{
	QString title;
	QString ISBN;
	QString author;
	QString pubHouse;
	QString publisher;
	int pages;
	float score;
};

struct Bookstores
{
	QString name;
	QString country;
	QString city;
};

struct PubHouses
{
	QString name;
	QString country;
	QString city;
	int yearOfEstablishment;
};

struct Publish
{
	QString ISBN;
	QString pubHouse;
	QString publisher;
	int yearOfPublish;
};

struct Publishers
{
	QString name;
	QString country;
	QString city;
	int yearOfEstablishment;
};

struct Sale
{
	QString titleOfBook;
	QString ISBN;
	QString store;
	float price;
	int saleVolume;
};

struct Write
{
	QString ISBN;
	QString author;
};

struct BookStoreSale
{
	QString store;
	QString title;
	QString ISBN;
	QString author;
	QString nationality;
	float price;
	float sales;
};

struct ChineseBook
{
	QString title;
	QString ISBN;
	QString author;
	int year;
	float score;
};

struct HScoreBook
{
	QString title;
	QString ISBN;
	QString author;
	int year;
	float score;
};

struct Bestseller
{
	QString title;
	QString ISBN;
	QString author;
	float grossSales;
};