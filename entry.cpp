#include "entry.h"

Entry::Entry(QString site, QString doa, QString doc, QString url, QString new_concept,
             QString bf, QString comb, QString dp, QString graphs, QString greedy,
             QString implementation, QString prob, QString sorting, QString trees, QString nsa)
{
    this->site = site;
    this->doa = doa;
    this->doc = doc;
    this->url  = url;
    this->new_concept =new_concept;
    this->brute_force = bf;
    this->combinatorics = comb;
    this->dynamic_programming = dp;
    this->graphs = graphs;
    this->greedy = greedy;
    this->implementation = implementation;
    this->probabilty = prob;
    this->sorting = sorting;
    this->trees = trees;
    this->need_to_solve_again = nsa;

}
