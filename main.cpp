#include "mainwindow.h"
#include <MandelbrotWidget.h>
#include <QApplication>
#include <Mand.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MandelbrotWidget widget;
    widget.show();
    return app.exec();
}
