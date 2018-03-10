#include <QApplication>
#include "mydialogwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MyDialogWindow *window = new MyDialogWindow();
    window->show();

    return a.exec();
}
