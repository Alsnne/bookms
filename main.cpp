/* 
*  项目名称：图书信息管理系统
*  作者：朱羿名
*  完成日期：2023.1.12
*/

/* 主程序 */

#include "initial.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
