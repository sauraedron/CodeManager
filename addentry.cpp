#include "addentry.h"
#include <QMessageBox>
#include <QXmlStreamWriter>
#include "ui_addentry.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QLinkedList>
#include <QXmlStreamReader>


addEntry::addEntry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addEntry)
{
    ui->setupUi(this);
    //set the sites here
    ui->sites_combobox->addItem("CodeChef");
    ui->sites_combobox->addItem("CodeForces");
    ui->sites_combobox->addItem("HackerEarth");
    ui->sites_combobox->addItem("HackerRank");
    ui->sites_combobox->addItem("Topcoder");
    //set todays date
    ui->attemptDate->setDate(QDate::currentDate());
    ui->completionDate->setDate(QDate::currentDate());

}

addEntry::~addEntry()
{
    delete ui;
}

void addEntry::on_pushButton_clicked()
{
    QString filename = "codem.xml";
//Write contents
    QFile mfile(filename);
    if(!mfile.open(QFile::WriteOnly | QFile::Text| QFile::Append))
    {
        qDebug()<<"Could not open the file for writing";
        return ;
    }
    /*
    xw.writeStartElement("");
    xw.writeCDATA();
    xw.writeEndElement();
    */
    QXmlStreamWriter xw(&mfile);
    xw.writeStartDocument();
    xw.setAutoFormatting(true);
    xw.writeStartElement("CodeManager");
    xw.writeStartElement("number");
    xw.writeCDATA("0");
    xw.writeEndElement();

    xw.writeStartElement("site");
    xw.writeCDATA(ui->sites_combobox->currentText());
    xw.writeEndElement();

    xw.writeStartElement("doa");
    xw.writeCDATA(ui->attemptDate->date().toString());
    xw.writeEndElement();

    xw.writeStartElement("doc");
    xw.writeCDATA(ui->completionDate->date().toString());
    xw.writeEndElement();

    xw.writeStartElement("url");
    xw.writeCDATA(ui->url_ledit->text());
    xw.writeEndElement();

    xw.writeStartElement("newconcept");
    if(ui->nc_y->isChecked())
        xw.writeCDATA("yes");
    else
        xw.writeCDATA("no");
    xw.writeEndElement();

    //tags start here

    xw.writeStartElement("bruteforce");
    if(ui->chk_bf->isChecked())
    {
        xw.writeCDATA("yes");
    }
    else
        xw.writeCDATA("no");
    xw.writeEndElement();

    xw.writeStartElement("combinatorics");
    if(ui->chk_cmb->isChecked())
    {
        xw.writeCDATA("yes");
    }
    else
        xw.writeCDATA("no");
    xw.writeEndElement();

    xw.writeStartElement("dyanmicprogramming");
    if(ui->chk_dp->isChecked())
    {
        xw.writeCDATA("yes");
    }
    else
        xw.writeCDATA("no");
    xw.writeEndElement();

    xw.writeStartElement("graph");
    if(ui->chk_grap->isChecked())
    {
        xw.writeCDATA("yes");
    }
    else
        xw.writeCDATA("no");
    xw.writeEndElement();

    xw.writeStartElement("greedy");
    if(ui->chk_greed->isChecked())
    {
        xw.writeCDATA("yes");
    }
    else
        xw.writeCDATA("no");
    xw.writeEndElement();

    xw.writeStartElement("implementation");
    if(ui->chk_imple->isChecked())
    {
        xw.writeCDATA("yes");
    }
    else
        xw.writeCDATA("no");
    xw.writeEndElement();

    xw.writeStartElement("probability");
    if(ui->chk_probab->isChecked())
    {
        xw.writeCDATA("yes");
    }
    else
        xw.writeCDATA("no");
    xw.writeEndElement();

    xw.writeStartElement("sorting");
    if(ui->chk_sort->isChecked())
    {
        xw.writeCDATA("yes");
    }
    else
        xw.writeCDATA("no");
    xw.writeEndElement();

    xw.writeStartElement("trees");
    if(ui->chk_trees->isChecked())
    {
        xw.writeCDATA("yes");
    }
    else
        xw.writeCDATA("no");
    xw.writeEndElement();

    xw.writeStartElement("need_to_solve_again");
    if(ui->nsa_y)
        xw.writeCDATA("yes");
    else
        xw.writeCDATA("no");
    xw.writeEndElement();\

    xw.writeEndElement();

    mfile.close();
}
