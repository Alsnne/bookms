/*
* 实现表、视图、SELECT 查询的显示
* 以列表形式显示查询
*/

#include "showtv.h"
#include "ui_showtv.h"
#include "sql_op.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <array>

const std::array<const char*, 12> arrTVNames = { "Authors", "Books", "Bookstores", "PubHouses", "Publish",
"Publishers", "Sale", "Write", "BookStoreSale", "ChineseBook", "HScoreBook", "ViewQuery"};

QString textf(QString str)
{
	return QString("<html><head / ><body><p align = 'center'><span style = 'font-size:14pt; font-weight:700;'>%1< / span>< / p>< / body>< / html>").arg(str);
}

showtv::showtv(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::showtv)
{
    ui->setupUi(this);
	auto ptr = sql_op::getInstance();
	auto tvName = ptr->getTVName();
	int index;
	for (int i = 0; i < arrTVNames.size(); i++)
	{
		if (tvName == arrTVNames[i])
		{
			index = i;
			break;
		}
	}
	switch (index)
	{
		case 0:
		{
			ui->label->setText(textf("Authors"));
			ui->tableWidget->setColumnCount(4);
			ui->tableWidget->setHorizontalHeaderLabels(QStringList() << tr(u8"姓名") << tr(u8"性别") << tr(u8"国籍") << tr(u8"出生年份"));
			auto list = ptr->getAuthorsData();
			ui->tableWidget->setRowCount(list.size());
			for (int i = 0; i < list.size(); i++)
			{
				ui->tableWidget->setItem(i, 0, new QTableWidgetItem(list[i].name));
				if (list[i].gender == 'M')
					ui->tableWidget->setItem(i, 1, new QTableWidgetItem("男"));
				else
					ui->tableWidget->setItem(i, 1, new QTableWidgetItem("女"));
				// ui->tableWidget->setItem(i, 1, new QTableWidgetItem(list[i].gender));
				ui->tableWidget->setItem(i, 2, new QTableWidgetItem(list[i].nationality));
				ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(list[i].yearOfBirth)));
			}
		}
		break;
		case 1:
		{
			ui->label->setText(textf("Books"));
			ui->tableWidget->setColumnCount(7);
			ui->tableWidget->setHorizontalHeaderLabels(QStringList() << tr(u8"书名") << tr("ISBN")
				<<tr(u8"作者") << tr(u8"出版社") << tr(u8"出版商") << tr(u8"页数") << tr(u8"评分"));
			auto list = ptr->getBooksData();
			ui->tableWidget->setRowCount(list.size());
			for (int i = 0; i < list.size(); i++)
			{
				ui->tableWidget->setItem(i, 0, new QTableWidgetItem(list[i].title));
				ui->tableWidget->setItem(i, 1, new QTableWidgetItem(list[i].ISBN));
				ui->tableWidget->setItem(i, 2, new QTableWidgetItem(list[i].author));
				ui->tableWidget->setItem(i, 3, new QTableWidgetItem(list[i].pubHouse));
				ui->tableWidget->setItem(i, 4, new QTableWidgetItem(list[i].publisher));
				ui->tableWidget->setItem(i, 5, new QTableWidgetItem(QString::number(list[i].pages)));
				ui->tableWidget->setItem(i, 6, new QTableWidgetItem(QString::number(list[i].score)));
			}			
		}
		break;
		case 2:
		{
			ui->label->setText(textf("Bookstores"));
			ui->tableWidget->setColumnCount(3);
			ui->tableWidget->setHorizontalHeaderLabels(QStringList() << tr(u8"书店名") << tr(u8"国家") << tr(u8"城市"));
			auto list = ptr->getBookstoresData();
			ui->tableWidget->setRowCount(list.size());
			for (int i = 0; i < list.size(); i++)
			{
				ui->tableWidget->setItem(i, 0, new QTableWidgetItem(list[i].name));
				ui->tableWidget->setItem(i, 1, new QTableWidgetItem(list[i].country));
				ui->tableWidget->setItem(i, 2, new QTableWidgetItem(list[i].city));
			}
		}
		break;
		case 3:
		{
			ui->label->setText(textf("PubHouses"));
			ui->tableWidget->setColumnCount(4);
			ui->tableWidget->setHorizontalHeaderLabels(QStringList() << tr(u8"出版社名") << tr(u8"国家") << tr(u8"城市") << tr(u8"成立年份"));
			auto list = ptr->getPubHousesData();
			ui->tableWidget->setRowCount(list.size());
			for (int i = 0; i < list.size(); i++)
			{
				ui->tableWidget->setItem(i, 0, new QTableWidgetItem(list[i].name));
				ui->tableWidget->setItem(i, 1, new QTableWidgetItem(list[i].country));
				ui->tableWidget->setItem(i, 2, new QTableWidgetItem(list[i].city));
				ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(list[i].yearOfEstablishment)));
			}
		}
		break;
		case 4:
		{
			ui->label->setText(textf("Publish"));
			ui->tableWidget->setColumnCount(4);
			ui->tableWidget->setHorizontalHeaderLabels(QStringList()  << tr(u8"ISBN")
				<< tr(u8"出版社") << tr(u8"出版商")<<tr(u8"出版年份"));
			auto list = ptr->getPublishData();
			ui->tableWidget->setRowCount(list.size());
			for (int i = 0; i < list.size(); i++)
			{
				ui->tableWidget->setItem(i, 0, new QTableWidgetItem(list[i].ISBN));
				ui->tableWidget->setItem(i, 1, new QTableWidgetItem(list[i].pubHouse));
				ui->tableWidget->setItem(i, 2, new QTableWidgetItem(list[i].publisher));
				ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(list[i].yearOfPublish)));
			}	
		}
		break;
		case 5:
		{
			ui->label->setText(textf("Publishers"));
			ui->tableWidget->setColumnCount(4);
			ui->tableWidget->setHorizontalHeaderLabels(QStringList() << tr(u8"出版商名") << tr(u8"国家") << tr(u8"城市") << tr(u8"成立年份"));
			auto list = ptr->getPublishersData();
			ui->tableWidget->setRowCount(list.size());
			for (int i = 0; i < list.size(); i++)
			{
				ui->tableWidget->setItem(i, 0, new QTableWidgetItem(list[i].name));
				ui->tableWidget->setItem(i, 1, new QTableWidgetItem(list[i].country));
				ui->tableWidget->setItem(i, 2, new QTableWidgetItem(list[i].city));
				ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(list[i].yearOfEstablishment)));
			}
		}
		break;
		case 6:
		{
			ui->label->setText(textf("Sale"));
			ui->tableWidget->setColumnCount(5);
			ui->tableWidget->setHorizontalHeaderLabels(QStringList() << tr(u8"书名")<<tr(u8"ISBN") << tr(u8"书店") << tr(u8"售价") << tr(u8"销量"));
			auto list = ptr->getSaleData();
			ui->tableWidget->setRowCount(list.size());
			for (int i = 0; i < list.size(); i++)
			{
				ui->tableWidget->setItem(i, 0, new QTableWidgetItem(list[i].titleOfBook));
				ui->tableWidget->setItem(i, 1, new QTableWidgetItem(list[i].ISBN));
				ui->tableWidget->setItem(i, 2, new QTableWidgetItem(list[i].store));
				ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(list[i].price)));
				ui->tableWidget->setItem(i, 4, new QTableWidgetItem(QString::number(list[i].saleVolume)));
			}
		}
		break;
		case 7:
		{
			ui->label->setText(textf("Write"));
			ui->tableWidget->setColumnCount(2);
			ui->tableWidget->setHorizontalHeaderLabels(QStringList() << tr("ISBN") << tr(u8"作者"));
			auto list = ptr->getWriteData();
			ui->tableWidget->setRowCount(list.size());
			for (int i = 0; i < list.size(); i++)
			{
				ui->tableWidget->setItem(i, 0, new QTableWidgetItem(list[i].ISBN));
				ui->tableWidget->setItem(i, 1, new QTableWidgetItem(list[i].author));
			}
		}
		break;
		case 8:
		{
			ui->label->setText(textf("BookStoreSale"));
			ui->tableWidget->setColumnCount(7);
			ui->tableWidget->setHorizontalHeaderLabels(QStringList() << tr(u8"书店名") << tr(u8"书名") << tr("ISBN") << tr(u8"作者") << tr(u8"国籍") << tr(u8"售价") << tr(u8"销售额"));
			auto list = ptr->getBookStoreSaleData();
			ui->tableWidget->setRowCount(list.size());
			for (int i = 0; i < list.size(); i++)
			{
				ui->tableWidget->setItem(i, 0, new QTableWidgetItem(list[i].store));
				ui->tableWidget->setItem(i, 1, new QTableWidgetItem(list[i].title));
				ui->tableWidget->setItem(i, 2, new QTableWidgetItem(list[i].ISBN));
				ui->tableWidget->setItem(i, 3, new QTableWidgetItem(list[i].author));
				ui->tableWidget->setItem(i, 4, new QTableWidgetItem(list[i].nationality));
				ui->tableWidget->setItem(i, 5, new QTableWidgetItem(QString::number(list[i].price)));
				ui->tableWidget->setItem(i, 6, new QTableWidgetItem(QString::number(list[i].sales)));
			}
		}
		break;
		case 9:
		{
			ui->label->setText(textf("ChineseBook"));
			ui->tableWidget->setColumnCount(5);
			ui->tableWidget->setHorizontalHeaderLabels(QStringList() << tr(u8"书名") << tr("ISBN") << tr(u8"作者") << tr(u8"出版年份") << tr(u8"评分"));
			auto list = ptr->getChineseBookData();
			ui->tableWidget->setRowCount(list.size());
			for (int i = 0; i < list.size(); i++)
			{
				ui->tableWidget->setItem(i, 0, new QTableWidgetItem(list[i].title));
				ui->tableWidget->setItem(i, 1, new QTableWidgetItem(list[i].ISBN));
				ui->tableWidget->setItem(i, 2, new QTableWidgetItem(list[i].author));
				ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(list[i].year)));
				ui->tableWidget->setItem(i, 4, new QTableWidgetItem(QString::number(list[i].score)));
			}			
		}
		break;
		case 10:
		{
			ui->label->setText(textf("HScoreBook"));
			ui->tableWidget->setColumnCount(5);
			ui->tableWidget->setHorizontalHeaderLabels(QStringList() << tr(u8"书名") << tr("ISBN") << tr(u8"作者") << tr(u8"出版年份") << tr(u8"评分"));
			auto list = ptr->getHScoreBookData();
			ui->tableWidget->setRowCount(list.size());
			for (int i = 0; i < list.size(); i++)
			{
				ui->tableWidget->setItem(i, 0, new QTableWidgetItem(list[i].title));
				ui->tableWidget->setItem(i, 1, new QTableWidgetItem(list[i].ISBN));
				ui->tableWidget->setItem(i, 2, new QTableWidgetItem(list[i].author));
				ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(list[i].year)));
				ui->tableWidget->setItem(i, 4, new QTableWidgetItem(QString::number(list[i].score)));
			}
		}
		break;
		case 11:
		{
			ui->label->setText(textf("2022 年度畅销中国图书"));
			ui->tableWidget->setColumnCount(4);
			ui->tableWidget->setHorizontalHeaderLabels(QStringList() << tr(u8"书名") << tr("ISBN") << tr(u8"作者") << tr(u8"总销售额"));
			auto list = ptr->getBestsellerData();
			ui->tableWidget->setRowCount(list.size());
			for (int i = 0; i < list.size(); i++)
			{
				ui->tableWidget->setItem(i, 0, new QTableWidgetItem(list[i].title));
				ui->tableWidget->setItem(i, 1, new QTableWidgetItem(list[i].ISBN));
				ui->tableWidget->setItem(i, 2, new QTableWidgetItem(list[i].author));
				ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(list[i].grossSales)));
			}
		}
		break;
		default:
			break;
	}
	
}

showtv::~showtv()
{
    delete ui;
}
