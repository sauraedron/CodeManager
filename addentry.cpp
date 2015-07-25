
#include <QMessageBox>
#include <QXmlStreamWriter>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QLinkedList>
#include <QXmlStreamReader>

#include "addentry.h"
#include "ui_addentry.h"
#include <entry.h>


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

    this->filename = "codem.xml";

}

addEntry::~addEntry()
{
    delete ui;
}

void addEntry::on_pushButton_clicked()
{
    QString site = ui->sites_combobox->currentText();;
    QString doa = ui->attemptDate->date().toString(); //date of attempt
    QString doc = ui->completionDate->date().toString(); //date of completion
    QString url = ui->url_ledit->text();
    //tags
    QString new_concept = (ui->nc_y->isChecked()) ? "yes": "no";
    QString brute_force = (ui->chk_bf->isChecked()) ?"yes": "no";
    QString combinatorics =(ui->chk_cmb->isChecked()) ? "yes" : "no";
    QString dynamic_programming = (ui->chk_dp->isChecked()) ? "yes": "no";
    QString graphs = (ui->chk_grap->isChecked()) ? "yes": "no";
    QString greedy=(ui->chk_greed->isChecked()) ? "yes": "no";
    QString implementation = (ui->chk_imple->isChecked()) ? "yes": "no";
    QString probabilty = (ui->chk_probab->isChecked()) ? "yes": "no";
    QString sorting = (ui->chk_sort->isChecked()) ? "yes": "no";
    QString trees  = (ui->chk_trees->isChecked()) ? "yes": "no";
    QString need_to_solve_again = (ui->nsa_y->isChecked())? "yes": "no";
    list.push_back(Entry (site,  doa,  doc,  url,  new_concept,brute_force,
                          combinatorics,  dynamic_programming,  graphs,  greedy,
                          implementation,  probabilty,  sorting,  trees, need_to_solve_again));

    //push onto linked list



    QFile file(filename);
    file.open(QFile::WriteOnly);
    QXmlStreamWriter xml(&file);
    xml.setAutoFormatting(true);
    xml.writeStartDocument();
    xml.writeStartElement("CodeM");
    {
        for(QLinkedList<Entry>::iterator it = list.begin(); it!=list.end(); ++it)
        {
            xml.writeTextElement("site", it->site);
            xml.writeTextElement("doa", doa);
            xml.writeTextElement("doc", doc);
            xml.writeTextElement("url", url);
            xml.writeTextElement("new_concept", new_concept);
            xml.writeTextElement("brute_force", brute_force);
            xml.writeTextElement("combinatorics", combinatorics);
            xml.writeTextElement("dynamic_programming", dynamic_programming);
            xml.writeTextElement("graphs", graphs);
            xml.writeTextElement("greedy", greedy);
            xml.writeTextElement("implementation", implementation);
            xml.writeTextElement("probabilty", probabilty);
            xml.writeTextElement("sorting", sorting);
            xml.writeTextElement("trees", trees);
            xml.writeTextElement("need_to_solve_again", need_to_solve_again);
        }

    }
    xml.writeEndElement();
    file.close();

}
