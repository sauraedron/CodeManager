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
    QFile xmlFile(filename);
    xmlFile.open(QFile::ReadOnly);
    xml.setDevice(&xmlFile);

    //codeManager
    xml.readNextStartElement();
    qDebug()<<xml.name()<<" "<<xml.text();

    //number
    xml.readNextStartElement();
    qDebug()<<xml.name()<<" "<<xml.readElementText();

    //site
    xml.readNextStartElement();
    qDebug()<<xml.name()<<" "<<xml.readElementText();

    //doa
    xml.readNextStartElement();
    qDebug()<<xml.name()<<" "<<xml.readElementText();

    //doc
    xml.readNextStartElement();
    qDebug()<<xml.name()<<" "<<xml.readElementText();

    //url
    xml.readNextStartElement();
    qDebug()<<xml.name()<<" "<<xml.readElementText();

    //newConcept
    xml.readNextStartElement();
    qDebug()<<xml.name()<<" "<<xml.readElementText();



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
