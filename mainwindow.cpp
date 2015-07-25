#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addentry.h"
#include <QFile>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->filename = "codem.xml";
    readData();

}

void MainWindow::readData()
{
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    addEntry entryForm;
    entryForm.setModal(true);
    entryForm.exec();
}
