#include <QApplication>
#include <QWidget>
#include <QSlider>
#include <QSpinBox>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget *window = new QWidget;
    QHBoxLayout *layout = new QHBoxLayout;

    QSpinBox *sb = new QSpinBox;
    QSlider *sl = new QSlider(Qt::Horizontal);

    layout->addWidget(sb);
    layout->addWidget(sl);

    window->setLayout(layout);
    window->show();

    QObject::connect(sb, SIGNAL(valueChanged(int)), sl, SLOT(setValue(int)));
    QObject::connect(sl, SIGNAL(valueChanged(int)), sb, SLOT(setValue(int)));

    return app.exec();
}
