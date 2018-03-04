#include <QApplication>
#include "mywindow.h"
#include "stringprocessor.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MyWindow *myWindow = new MyWindow;
    myWindow->show();

    StringProcessor *stProc = new StringProcessor;

    QObject::connect(myWindow, SIGNAL(PureSting(QString)), stProc, SLOT(PureSting(QString)));
    QObject::connect(myWindow, SIGNAL(UpcaseString(QString)), stProc, SLOT(UpcaseString(QString)));
    QObject::connect(myWindow, SIGNAL(InverseString(QString)), stProc, SLOT(InverseString(QString)));
    QObject::connect(myWindow, SIGNAL(UpcaseInverseString(QString)), stProc, SLOT(UpcaseInverseString(QString)));

    return a.exec();
}
