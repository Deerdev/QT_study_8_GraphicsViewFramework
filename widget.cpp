#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
}

Widget::~Widget()
{

}


void Widget::paintEvent(QPaintEvent *)
{
        QPainter painter(this);
        painter.drawLine(10, 10, 150, 300);

}
