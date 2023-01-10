#ifndef SHOWTV_H
#define SHOWTV_H

#include <QWidget>

namespace Ui {
class showtv;
}

class showtv : public QWidget
{
    Q_OBJECT

public:
    explicit showtv(QWidget *parent = nullptr);
    ~showtv();

private:
    Ui::showtv *ui;
};

#endif // SHOWTV_H
