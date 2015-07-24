#ifndef ENTRY_H
#define ENTRY_H

#include <QString>
#include <QDate>
class entry
{
private:
    QString site;
    QString doa; //date of attempt
    QString doc; //date of completion
    QString url;
    //tags
    QString new_concept;
    QString brute_force;
    QString combinatorics;
    QString dynamic_programming;
    QString graphs;
    QString greedy;
    QString implementation;
    QString probabilty;
    QString sorting;
    QString trees;

    QString need_to_solve_again;

public:
    entry(QString site, QString doa, QString doc, QString url, QString new_concept, QString bf, QString comb, QString dp,
          QString graphs, QString greedy, QString implementation, QString prob, QString sorting, QString trees);
};

#endif // ENTRY_H
