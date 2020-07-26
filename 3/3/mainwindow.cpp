#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{





}

MainWindow::~MainWindow()
{
    delete ui;
}

/*void MainWindow::setchart(QChartView &sas)
{
    this->sasa=&sas;
}*/





