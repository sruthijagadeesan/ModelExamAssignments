#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyleSheet("QPushButton{color:yellow;backgroung-color:blue;}");
    Widget w;
    w.show();
    return a.exec();
}