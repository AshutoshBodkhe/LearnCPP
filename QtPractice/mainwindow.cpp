#include "mainwindow.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("QtPractice - Base Widget Application");
    resize(640, 480);

    QWidget *central = new QWidget(this);
    setCentralWidget(central);

    QVBoxLayout *layout = new QVBoxLayout(central);

    QLabel *label = new QLabel("Welcome to the base Qt Widgets application", central);
    label->setAlignment(Qt::AlignCenter);

    layout->addStretch();
    layout->addWidget(label);
    layout->addStretch();
}

MainWindow::~MainWindow() = default;
