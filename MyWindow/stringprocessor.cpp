#include <QMessageBox>
#include "stringprocessor.h"

StringProcessor::StringProcessor()
{

}

void StringProcessor::PureSting(const QString& str)
{
    QMessageBox msg;
    msg.setText(str);
    msg.exec();
}

void StringProcessor::UpcaseString(const QString& str)
{
    QString tmp(str);
    QMessageBox msg;
    msg.setText(tmp.toUpper());
    msg.exec();
}

void StringProcessor::InverseString(const QString& str)
{
    QString tmp(str);
    QMessageBox msg;
    std::reverse(tmp.begin(), tmp.end());
    msg.setText(tmp);
    msg.exec();
}

void StringProcessor::UpcaseInverseString(const QString& str)
{
    QString tmp(str);
    QMessageBox msg;
    std::reverse(tmp.begin(), tmp.end());
    msg.setText(tmp.toUpper());
    msg.exec();
}
