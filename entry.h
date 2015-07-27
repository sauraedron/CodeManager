#ifndef ENTRY_H
#define ENTRY_H

#include <QString>
#include <QDate>
class Entry
{
private:

public:
    QString site;
    QString p_name;
    QString doa; //date of attempt
    QString doc; //date of completion
    QString url;
    QString new_concept;
    QString solve_again;
    //tags
    QString Ad_hoc;
    QString _2sat;
    QString bfs;
    QString binarySearch;
    QString bipartite_graph;
    QString bit_manipulation;
    QString bitmasks;
    QString brute_force;
    QString combinatorics;
    QString constructive_algorithms;
    QString datastructures;
    QString dfs;
    QString disjoint_set;
    QString divideandconquer;
    QString dsu;
    QString dynamic_programming;
    QString factorization;
    QString fenwick_tree;
    QString fft;
    QString flows;
    QString games;
    QString gcd;
    QString geometry;
    QString graphs;
    QString greedy;
    QString hash_map;
    QString hashing;
    QString heap;
    QString implementation;
    QString matrices;
    QString matrix_exponentiation;
    QString meet_in_the_middle;
    QString memoization;
    QString modular_arithmetic;
    QString numbertheory;
    QString priority_queue;
    QString probabilty;
    QString recursion;
    QString segment_trees;
    QString shortestpaths;
    QString sieve;
    QString simulation;
    QString sorting;
    QString spanning_tree;
    QString sqrt_decomposition;
    QString stack;
    QString string_suffix_structures;
    QString suffix_arrays;
    QString ternarysearch;
    QString trees;
    QString trie;
    QString twopointers;





    Entry(QString site, QString doa, QString doc, QString url, QString new_concept,
          QString solve_again, QString Ad_hoc_,  QString _2sat_,  QString bfs_,
          QString binarySearch_,  QString bipartite_graph_,  QString bit_manipulation_,
          QString bitmasks_,  QString brute_force_,  QString combinatorics_,
          QString constructive_algorithms_,  QString datastructures_,  QString dfs_,
          QString disjoint_set_,  QString divideandconquer_,  QString dsu_,
          QString dynamic_programming_,  QString factorization_,  QString fenwick_tree_,
          QString fft_,  QString flows_,  QString games_,  QString gcd_,  QString geometry_,
          QString graphs_,  QString greedy_,  QString hash_map_,  QString hashing_,  QString heap_,
          QString implementation_,  QString matrices_,  QString matrix_exponentiation_,
          QString meet_in_the_middle_,  QString memoization_,  QString modular_arithmetic_,
          QString numbertheory_,  QString priority_queue_,  QString probabilty_,  QString recursion_,
          QString segment_trees_,  QString shortestpaths_,  QString sieve_,  QString simulation_,
          QString sorting_,  QString spanning_tree_,  QString sqrt_decomposition_,  QString stack_,
          QString string_suffix_structures_,  QString suffix_arrays_,  QString ternarysearch_,
          QString trees_,  QString trie_,  QString twopointers_);
    //getter functions
    QString get_Ad_hoc();
    QString get__2sat();
    QString get_bfs();
    QString get_binarySearch();
    QString get_bipartite_graph();
    QString get_bit_manipulation();
    QString get_bitmasks();
    QString get_brute_force();
    QString get_combinatorics();
    QString get_constructive_algorithms();
    QString get_datastructures();
    QString get_dfs();
    QString get_disjoint_set();
    QString get_divideandconquer();
    QString get_dsu();
    QString get_dynamic_programming();
    QString get_factorization();
    QString get_fenwick_tree();
    QString get_fft();
    QString get_flows();
    QString get_games();
    QString get_gcd();
    QString get_geometry();
    QString get_graphs();
    QString get_greedy();
    QString get_hash_map();
    QString get_hashing();
    QString get_heap();
    QString get_implementation();
    QString get_matrices();
    QString get_matrix_exponentiation();
    QString get_meet_in_the_middle();
    QString get_memoization();
    QString get_modular_arithmetic();
    QString get_numbertheory();
    QString get_priority_queue();
    QString get_probabilty();
    QString get_recursion();
    QString get_segment_trees();
    QString get_shortestpaths();
    QString get_sieve();
    QString get_simulation();
    QString get_sorting();
    QString get_spanning_tree();
    QString get_sqrt_decomposition();
    QString get_stack();
    QString get_string_suffix_structures();
    QString get_suffix_arrays();
    QString get_ternarysearch();
    QString get_trees();
    QString get_trie();
    QString get_twopointers();

    QString get_site();
    QString get_p_name();
    QString get_doa(); //date of attempt
    QString get_doc(); //date of completion
    QString get_url();
    QString get_new_concept();
    QString get_solve_again();



    //setter functions
    void set_Ad_hoc(QString arg);
    void set__2sat(QString arg);
    void set_bfs(QString arg);
    void set_binarySearch(QString arg);
    void set_bipartite_graph(QString arg);
    void set_bit_manipulation(QString arg);
    void set_bitmasks(QString arg);
    void set_brute_force(QString arg);
    void set_combinatorics(QString arg);
    void set_constructive_algorithms(QString arg);
    void set_datastructures(QString arg);
    void set_dfs(QString arg);
    void set_disjoint_set(QString arg);
    void set_divideandconquer(QString arg);
    void set_dsu(QString arg);
    void set_dynamic_programming(QString arg);
    void set_factorization(QString arg);
    void set_fenwick_tree(QString arg);
    void set_fft(QString arg);
    void set_flows(QString arg);
    void set_games(QString arg);
    void set_gcd(QString arg);
    void set_geometry(QString arg);
    void set_graphs(QString arg);
    void set_greedy(QString arg);
    void set_hash_map(QString arg);
    void set_hashing(QString arg);
    void set_heap(QString arg);
    void set_implementation(QString arg);
    void set_matrices(QString arg);
    void set_matrix_exponentiation(QString arg);
    void set_meet_in_the_middle(QString arg);
    void set_memoization(QString arg);
    void set_modular_arithmetic(QString arg);
    void set_numbertheory(QString arg);
    void set_priority_queue(QString arg);
    void set_probabilty(QString arg);
    void set_recursion(QString arg);
    void set_segment_trees(QString arg);
    void set_shortestpaths(QString arg);
    void set_sieve(QString arg);
    void set_simulation(QString arg);
    void set_sorting(QString arg);
    void set_spanning_tree(QString arg);
    void set_sqrt_decomposition(QString arg);
    void set_stack(QString arg);
    void set_string_suffix_structures(QString arg);
    void set_suffix_arrays(QString arg);
    void set_ternarysearch(QString arg);
    void set_trees(QString arg);
    void set_trie(QString arg);
    void set_twopointers(QString arg);

    void set_site(QString arg);
    void set_p_name(QString arg);
    void set_doa(QString arg); //date of attempt
    void set_doc(QString arg);//date of completion
    void set_url(QString arg);
    void get_new_concept(QString arg);
    void get_solve_again(QString arg);


};

#endif // ENTRY_H
