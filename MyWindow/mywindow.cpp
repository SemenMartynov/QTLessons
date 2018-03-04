#include "mywindow.h"

#include <QHBoxLayout>
#include <QVBoxLayout>

MyWindow::MyWindow(QWidget *parrent) : QDialog(parrent)
{
    lbl = new QLabel("T&ext: ");
    line = new QLineEdit;
    lbl->setBuddy(line);

    cb1 = new QCheckBox("&Upcase");
    cb2 = new QCheckBox("&Invert");

    ok = new QPushButton("&OK");
    ok->setDefault(true);
    ok->setEnabled(false);
    close = new QPushButton("&Close");

    QHBoxLayout *linelayout = new QHBoxLayout;
    linelayout->addWidget(lbl);
    linelayout->addWidget(line);

    QVBoxLayout *leftlayout = new QVBoxLayout;
    leftlayout->addLayout(linelayout);
    leftlayout->addWidget(cb1);
    leftlayout->addWidget(cb2);

    QVBoxLayout *rightlayout = new QVBoxLayout;
    rightlayout->addWidget(ok);
    rightlayout->addWidget(close);

    QHBoxLayout *mainlayout = new QHBoxLayout;
    mainlayout->addLayout(leftlayout);
    mainlayout->addLayout(rightlayout);

    connect(line, SIGNAL(textChanged(QString)), this, SLOT(TextChanged(QString)));
    connect(close, SIGNAL(clicked(bool)), this, SLOT(close()));
    connect(ok, SIGNAL(clicked(bool)), this, SLOT(OkClicked()));

    setLayout(mainlayout);
    setWindowTitle("Message box");
}

void MyWindow::OkClicked()
{
    if (!cb1->isChecked() && !cb2->isChecked()) {
        emit PureSting(line->text());
        return;
    }

    if (cb1->isChecked() && cb2->isChecked()) {
        emit UpcaseInverseString(line->text());
        return;
    }

    if (cb1->isChecked()) {
        emit UpcaseString(line->text());
    }

    if (cb2->isChecked()) {
        emit InverseString(line->text());
    }
}

void MyWindow::TextChanged(const QString& str)
{
    ok->setEnabled(!str.isEmpty());
}
