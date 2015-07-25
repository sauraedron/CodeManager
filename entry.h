#ifndef ENTRY_H
#define ENTRY_H

#include <QString>
#include <QDate>
class Entry
{
private:

public:
    QString site;
    QString doa; //date of attempt
    QString doc; //date of completion
    QString url;
    QString need_to_solve_again;
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
    QString binarySearch;
    QString fft;
    QString bitmasks;
    QString numbertheory;
    QString shortestpaths;
    QString _2sat;
    QString games;
    QString hashing;
    QString constructive_algorithms;
    QString datastructures;
    QString string_suffix_structures;
    QString matrices;
    QString meet_in_the_middle;
    QString flows;
    QString divideandconquer;
    QString geometry;
    QString twopointers;
    QString dsu ; // ?dats structure union ?
    QString ternarysearch;

    QString trees;
    Entry(QString site, QString doa, QString doc, QString url, QString new_concept, QString bf, QString comb, QString dp,
          QString graphs, QString greedy, QString implementation, QString prob, QString sorting, QString trees, QString nsa);
    //getter functions
    QString get_site();
    QString get_doa();
    QString get_doc();
    QString get_url();
    QString get_new_concept();
    QString get_brute_force();
    QString get_combinatorics();
    QString get_dynamic_programming();
    QString get_graphs();
    QString get_greedy();
    QString get_implementation();
    QString get_probabilty();
    QString get_sorting();
    QString get_trees();
    QString get_need_to_solve_again();

    //setter functions
    void set_site();
    void set_doa();
    void set_doc();
    void set_url();
    void set_new_concept();
    void set_brute_force();
    void set_combinatorics();
    void set_dynamic_programming();
    void set_graphs();
    void set_greedy();
    void set_implementation();
    void set_probabilty();
    void set_sorting();
    void set_trees();
    void set_need_to_solve_again();

};

#endif // ENTRY_H
