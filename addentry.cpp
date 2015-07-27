
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
    QString tags;
    if (ui->chk_Ad_hoc->isChecked())
    {
        tags.append(" ");
        tags.append("Ad_hoc");
    }
    if (ui->chk__2sat->isChecked())
    {
        tags.append(" ");
        tags.append("_2sat");
    }
    if (ui->chk_bfs->isChecked())
    {
        tags.append(" ");
        tags.append("bfs");
    }
    if (ui->chk_binarySearch->isChecked())
    {
        tags.append(" ");
        tags.append("binarySearch");
    }
    if (ui->chk_bipartite_graph->isChecked())
    {
        tags.append(" ");
        tags.append("bipartite_graph");
    }
    if (ui->chk_bit_manipulation->isChecked())
    {
        tags.append(" ");
        tags.append("bit_manipulation");
    }
    if (ui->chk_bitmasks->isChecked())
    {
        tags.append(" ");
        tags.append("bitmasks");
    }
    if (ui->chk_brute_force->isChecked())
    {
        tags.append(" ");
        tags.append("brute_force");
    }
    if (ui->chk_combinatorics->isChecked())
    {
        tags.append(" ");
        tags.append("combinatorics");
    }
    if (ui->chk_constructive_algorithms->isChecked())
    {
        tags.append(" ");
        tags.append("constructive_algorithms");
    }
    if (ui->chk_datastructures->isChecked())
    {
        tags.append(" ");
        tags.append("datastructures");
    }
    if (ui->chk_dfs->isChecked())
    {
        tags.append(" ");
        tags.append("dfs");
    }
    if (ui->chk_disjoint_set->isChecked())
    {
        tags.append(" ");
        tags.append("disjoint_set");
    }
    if (ui->chk_divideandconquer->isChecked())
    {
        tags.append(" ");
        tags.append("divideandconquer");
    }
    if (ui->chk_dsu->isChecked())
    {
        tags.append(" ");
        tags.append("dsu");
    }
    if (ui->chk_dynamic_programming->isChecked())
    {
        tags.append(" ");
        tags.append("dynamic_programming");
    }
    if (ui->chk_factorization->isChecked())
    {
        tags.append(" ");
        tags.append("factorization");
    }
    if (ui->chk_fenwicktree->isChecked())
    {
        tags.append(" ");
        tags.append("fenwick_tree");
    }
    if (ui->chk_fft->isChecked())
    {
        tags.append(" ");
        tags.append("fft");
    }
    if (ui->chk_flows->isChecked())
    {
        tags.append(" ");
        tags.append("flows");
    }
    if (ui->chk_games->isChecked())
    {
        tags.append(" ");
        tags.append("games");
    }
    if (ui->chk_gcd->isChecked())
    {
        tags.append(" ");
        tags.append("gcd");
    }
    if (ui->chk_geometry->isChecked())
    {
        tags.append(" ");
        tags.append("geometry");
    }
    if (ui->chk_graphs->isChecked())
    {
        tags.append(" ");
        tags.append("graphs");
    }
    if (ui->chk_greedy->isChecked())
    {
        tags.append(" ");
        tags.append("greedy");
    }
    if (ui->chk_hash_map->isChecked())
    {
        tags.append(" ");
        tags.append("hash_map");
    }
    if (ui->chk_hashing->isChecked())
    {
        tags.append(" ");
        tags.append("hashing");
    }
    if (ui->chk_heap->isChecked())
    {
        tags.append(" ");
        tags.append("heap");
    }
    if (ui->chk_implementation->isChecked())
    {
        tags.append(" ");
        tags.append("implementation");
    }
    if (ui->chk_matrices->isChecked())
    {
        tags.append(" ");
        tags.append("matrices");
    }
    if (ui->chk_matrix_exponentiation->isChecked())
    {
        tags.append(" ");
        tags.append("matrix_exponentiation");
    }
    if (ui->chk_meet_in_the_middle->isChecked())
    {
        tags.append(" ");
        tags.append("meet_in_the_middle");
    }
    if (ui->chk_memoization->isChecked())
    {
        tags.append(" ");
        tags.append("memoization");
    }
    if (ui->chk_modular_arithmetic->isChecked())
    {
        tags.append(" ");
        tags.append("modular_arithmetic");
    }
    if (ui->chk_numbertheory->isChecked())
    {
        tags.append(" ");
        tags.append("numbertheory");
    }
    if (ui->chk_priority_queue->isChecked())
    {
        tags.append(" ");
        tags.append("priority_queue");
    }
    if (ui->chk_probabilty->isChecked())
    {
        tags.append(" ");
        tags.append("probabilty");
    }
    if (ui->chk_recursion->isChecked())
    {
        tags.append(" ");
        tags.append("recursion");
    }
    if (ui->chk_segment_trees->isChecked())
    {
        tags.append(" ");
        tags.append("segment_trees");
    }
    if (ui->chk_shortestpath->isChecked())
    {
        tags.append(" ");
        tags.append("shortestpaths");
    }
    if (ui->chk_sieve->isChecked())
    {
        tags.append(" ");
        tags.append("sieve");
    }
    if (ui->chk_simulation->isChecked())
    {
        tags.append(" ");
        tags.append("simulation");
    }
    if (ui->chk_sorting->isChecked())
    {
        tags.append(" ");
        tags.append("sorting");
    }
    if (ui->chk_spanning_tree->isChecked())
    {
        tags.append(" ");
        tags.append("spanning_tree");
    }
    if (ui->chk_sqrt_decomposition->isChecked())
    {
        tags.append(" ");
        tags.append("sqrt_decomposition");
    }
    if (ui->chk_stack->isChecked())
    {
        tags.append(" ");
        tags.append("stack");
    }
    if (ui->chk_string_suffix_structures->isChecked())
    {
        tags.append(" ");
        tags.append("string_suffix_structures");
    }
    if (ui->chk_suffix_arrays->isChecked())
    {
        tags.append(" ");
        tags.append("suffix_arrays");
    }
    if (ui->chk_ternarysearch->isChecked())
    {
        tags.append(" ");
        tags.append("ternarysearch");
    }
    if (ui->chk_trees->isChecked())
    {
        tags.append(" ");
        tags.append("trees");
    }
    if (ui->chk_trie->isChecked())
    {
        tags.append(" ");
        tags.append("trie");
    }
    if (ui->chk_twopointers->isChecked())
    {
        tags.append(" ");
        tags.append("twopointers");
    }
    qDebug()<<tags;

//    QString new_concept = (ui->nc_y->isChecked()) ? "yes": "no";
//    QString brute_force = (ui->chk_bf->isChecked()) ?"yes": "no";
//    QString combinatorics =(ui->chk_cmb->isChecked()) ? "yes" : "no";
//    QString dynamic_programming = (ui->chk_dp->isChecked()) ? "yes": "no";
//    QString graphs = (ui->chk_grap->isChecked()) ? "yes": "no";
//    QString greedy=(ui->chk_greed->isChecked()) ? "yes": "no";
//    QString implementation = (ui->chk_imple->isChecked()) ? "yes": "no";
//    QString probabilty = (ui->chk_probab->isChecked()) ? "yes": "no";
//    QString sorting = (ui->chk_sort->isChecked()) ? "yes": "no";
//    QString trees  = (ui->chk_trees->isChecked()) ? "yes": "no";
//    QString need_to_solve_again = (ui->nsa_y->isChecked())? "yes": "no";


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
//            xml.writeTextElement("new_concept", new_concept);
//            xml.writeTextElement("brute_force", brute_force);
//            xml.writeTextElement("combinatorics", combinatorics);
//            xml.writeTextElement("dynamic_programming", dynamic_programming);
//            xml.writeTextElement("graphs", graphs);
//            xml.writeTextElement("greedy", greedy);
//            xml.writeTextElement("implementation", implementation);
//            xml.writeTextElement("probabilty", probabilty);
//            xml.writeTextElement("sorting", sorting);
//            xml.writeTextElement("trees", trees);
//            xml.writeTextElement("need_to_solve_again", need_to_solve_again);
        }

    }
    xml.writeEndElement();
    file.close();

}
