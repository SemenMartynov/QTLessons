#include <QApplication>
#include "ui_mydialogwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QDialog *dialdog = new QDialog();
    Ui_MyDialogWindow *window_ui = new Ui_MyDialogWindow();
    window_ui->setupUi(dialdog);
    dialdog->show();


    return a.exec();
}
