#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>
#include <QPushButton>

class MyWindow : public QDialog
{
     Q_OBJECT
public:
    MyWindow(QWidget *parrent = 0);

private:
    QLabel *lbl;
    QLineEdit *line;
    QCheckBox *cb1;
    QCheckBox *cb2;
    QPushButton *ok;
    QPushButton *close;

private slots:
    void OkClicked();
    void TextChanged(const QString& str);

signals:
    void PureSting(const QString& str);
    void UpcaseString(const QString& str);
    void InverseString(const QString& str);
    void UpcaseInverseString(const QString& str);
};

#endif // MYWINDOW_H
