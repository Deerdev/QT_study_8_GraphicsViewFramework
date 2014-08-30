#include "widget.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QGraphicsScene *scene = new QGraphicsScene;
    scene->setSceneRect(0,0,300,300);//不让直线居中显示  自己定义窗口大小
    scene->addLine(10, 10, 150, 150);
    QGraphicsView *view = new QGraphicsView(scene);
   // view->resize(500, 500);
    view->setWindowTitle("Graphics View");
    view->show();

//    Widget *da = new Widget;
//    da->resize(500, 500);
//    da->setWindowTitle("QWidget");
//    da->show();
    return a.exec();
}
