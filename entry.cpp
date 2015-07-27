#include "entry.h"

Entry::Entry(QString site, QString doa, QString doc, QString url, QString new_concept,
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
             QString trees_,  QString trie_,  QString twopointers_)
{
    this->site = site;
    this->doa = doa;
    this->doc = doc;
    this->url  = url;
    this->new_concept =new_concept;
    this->solve_again = solve_again;

    this->Ad_hoc = Ad_hoc_;
    this->_2sat = _2sat_;
    this->bfs = bfs_;
    this->binarySearch = binarySearch_;
    this->bipartite_graph = bipartite_graph_;
    this->bit_manipulation = bit_manipulation_;
    this->bitmasks = bitmasks_;
    this->brute_force = brute_force_;
    this->combinatorics = combinatorics_;
    this->constructive_algorithms = constructive_algorithms_;
    this->datastructures = datastructures_;
    this->dfs = dfs_;
    this->disjoint_set = disjoint_set_;
    this->divideandconquer = divideandconquer_;
    this->dsu = dsu_;
    this->dynamic_programming = dynamic_programming_;
    this->factorization = factorization_;
    this->fenwick_tree = fenwick_tree_;
    this->fft = fft_;
    this->flows = flows_;
    this->games = games_;
    this->gcd = gcd_;
    this->geometry = geometry_;
    this->graphs = graphs_;
    this->greedy = greedy_;
    this->hash_map = hash_map_;
    this->hashing = hashing_;
    this->heap = heap_;
    this->implementation = implementation_;
    this->matrices = matrices_;
    this->matrix_exponentiation = matrix_exponentiation_;
    this->meet_in_the_middle = meet_in_the_middle_;
    this->memoization = memoization_;
    this->modular_arithmetic = modular_arithmetic_;
    this->numbertheory = numbertheory_;
    this->priority_queue = priority_queue_;
    this->probabilty = probabilty_;
    this->recursion = recursion_;
    this->segment_trees = segment_trees_;
    this->shortestpaths = shortestpaths_;
    this->sieve = sieve_;
    this->simulation = simulation_;
    this->sorting = sorting_;
    this->spanning_tree = spanning_tree_;
    this->sqrt_decomposition = sqrt_decomposition_;
    this->stack = stack_;
    this->string_suffix_structures = string_suffix_structures_;
    this->suffix_arrays = suffix_arrays_;
    this->ternarysearch = ternarysearch_;
    this->trees = trees_;
    this->trie = trie_;
    this->twopointers = twopointers_;


}

QString Entry::get_Ad_hoc(){
     return Ad_hoc;
}
QString Entry::get__2sat(){
     return _2sat;
}
QString Entry::get_bfs(){
     return bfs;
}
QString Entry::get_binarySearch(){
     return binarySearch;
}
QString Entry::get_bipartite_graph(){
     return bipartite_graph;
}
QString Entry::get_bit_manipulation(){
     return bit_manipulation;
}
QString Entry::get_bitmasks(){
     return bitmasks;
}
QString Entry::get_brute_force(){
     return brute_force;
}
QString Entry::get_combinatorics(){
     return combinatorics;
}
QString Entry::get_constructive_algorithms(){
     return constructive_algorithms;
}
QString Entry::get_datastructures(){
     return datastructures;
}
QString Entry::get_dfs(){
     return dfs;
}
QString Entry::get_disjoint_set(){
     return disjoint_set;
}
QString Entry::get_divideandconquer(){
     return divideandconquer;
}
QString Entry::get_dsu(){
     return dsu;
}
QString Entry::get_dynamic_programming(){
     return dynamic_programming;
}
QString Entry::get_factorization(){
     return factorization;
}
QString Entry::get_fenwick_tree(){
     return fenwick_tree;
}
QString Entry::get_fft(){
     return fft;
}
QString Entry::get_flows(){
     return flows;
}
QString Entry::get_games(){
     return games;
}
QString Entry::get_gcd(){
     return gcd;
}
QString Entry::get_geometry(){
     return geometry;
}
QString Entry::get_graphs(){
     return graphs;
}
QString Entry::get_greedy(){
     return greedy;
}
QString Entry::get_hash_map(){
     return hash_map;
}
QString Entry::get_hashing(){
     return hashing;
}
QString Entry::get_heap(){
     return heap;
}
QString Entry::get_implementation(){
     return implementation;
}
QString Entry::get_matrices(){
     return matrices;
}
QString Entry::get_matrix_exponentiation(){
     return matrix_exponentiation;
}
QString Entry::get_meet_in_the_middle(){
     return meet_in_the_middle;
}
QString Entry::get_memoization(){
     return memoization;
}
QString Entry::get_modular_arithmetic(){
     return modular_arithmetic;
}
QString Entry::get_numbertheory(){
     return numbertheory;
}
QString Entry::get_priority_queue(){
     return priority_queue;
}
QString Entry::get_probabilty(){
     return probabilty;
}
QString Entry::get_recursion(){
     return recursion;
}
QString Entry::get_segment_trees(){
     return segment_trees;
}
QString Entry::get_shortestpaths(){
     return shortestpaths;
}
QString Entry::get_sieve(){
     return sieve;
}
QString Entry::get_simulation(){
     return simulation;
}
QString Entry::get_sorting(){
     return sorting;
}
QString Entry::get_spanning_tree(){
     return spanning_tree;
}
QString Entry::get_sqrt_decomposition(){
     return sqrt_decomposition;
}
QString Entry::get_stack(){
     return stack;
}
QString Entry::get_string_suffix_structures(){
     return string_suffix_structures;
}
QString Entry::get_suffix_arrays(){
     return suffix_arrays;
}
QString Entry::get_ternarysearch(){
     return ternarysearch;
}
QString Entry::get_trees(){
     return trees;
}
QString Entry::get_trie(){
     return trie;
}
QString Entry::get_twopointers(){
     return twopointers;
}


QString Entry::get_site()
{
    return site;
}

QString Entry::get_doa()
{
    return doa;
}

QString Entry::get_doc()
{
    return doc;
}

QString Entry::get_url()
{
    return url;
}

QString Entry::get_new_concept()
{
    return new_concept;
}

QString Entry::get_solve_again()
{
    return solve_again;
}


//setter

void Entry::set_Ad_hoc(QString arg){
     this->Ad_hoc = arg;
}
void Entry::set__2sat(QString arg){
     this->_2sat = arg;
}
void Entry::set_bfs(QString arg){
     this->bfs = arg;
}
void Entry::set_binarySearch(QString arg){
     this->binarySearch = arg;
}
void Entry::set_bipartite_graph(QString arg){
     this->bipartite_graph = arg;
}
void Entry::set_bit_manipulation(QString arg){
     this->bit_manipulation = arg;
}
void Entry::set_bitmasks(QString arg){
     this->bitmasks = arg;
}
void Entry::set_brute_force(QString arg){
     this->brute_force = arg;
}
void Entry::set_combinatorics(QString arg){
     this->combinatorics = arg;
}
void Entry::set_constructive_algorithms(QString arg){
     this->constructive_algorithms = arg;
}
void Entry::set_datastructures(QString arg){
     this->datastructures = arg;
}
void Entry::set_dfs(QString arg){
     this->dfs = arg;
}
void Entry::set_disjoint_set(QString arg){
     this->disjoint_set = arg;
}
void Entry::set_divideandconquer(QString arg){
     this->divideandconquer = arg;
}
void Entry::set_dsu(QString arg){
     this->dsu = arg;
}
void Entry::set_dynamic_programming(QString arg){
     this->dynamic_programming = arg;
}
void Entry::set_factorization(QString arg){
     this->factorization = arg;
}
void Entry::set_fenwick_tree(QString arg){
     this->fenwick_tree = arg;
}
void Entry::set_fft(QString arg){
     this->fft = arg;
}
void Entry::set_flows(QString arg){
     this->flows = arg;
}
void Entry::set_games(QString arg){
     this->games = arg;
}
void Entry::set_gcd(QString arg){
     this->gcd = arg;
}
void Entry::set_geometry(QString arg){
     this->geometry = arg;
}
void Entry::set_graphs(QString arg){
     this->graphs = arg;
}
void Entry::set_greedy(QString arg){
     this->greedy = arg;
}
void Entry::set_hash_map(QString arg){
     this->hash_map = arg;
}
void Entry::set_hashing(QString arg){
     this->hashing = arg;
}
void Entry::set_heap(QString arg){
     this->heap = arg;
}
void Entry::set_implementation(QString arg){
     this->implementation = arg;
}
void Entry::set_matrices(QString arg){
     this->matrices = arg;
}
void Entry::set_matrix_exponentiation(QString arg){
     this->matrix_exponentiation = arg;
}
void Entry::set_meet_in_the_middle(QString arg){
     this->meet_in_the_middle = arg;
}
void Entry::set_memoization(QString arg){
     this->memoization = arg;
}
void Entry::set_modular_arithmetic(QString arg){
     this->modular_arithmetic = arg;
}
void Entry::set_numbertheory(QString arg){
     this->numbertheory = arg;
}
void Entry::set_priority_queue(QString arg){
     this->priority_queue = arg;
}
void Entry::set_probabilty(QString arg){
     this->probabilty = arg;
}
void Entry::set_recursion(QString arg){
     this->recursion = arg;
}
void Entry::set_segment_trees(QString arg){
     this->segment_trees = arg;
}
void Entry::set_shortestpaths(QString arg){
     this->shortestpaths = arg;
}
void Entry::set_sieve(QString arg){
     this->sieve = arg;
}
void Entry::set_simulation(QString arg){
     this->simulation = arg;
}
void Entry::set_sorting(QString arg){
     this->sorting = arg;
}
void Entry::set_spanning_tree(QString arg){
     this->spanning_tree = arg;
}
void Entry::set_sqrt_decomposition(QString arg){
     this->sqrt_decomposition = arg;
}
void Entry::set_stack(QString arg){
     this->stack = arg;
}
void Entry::set_string_suffix_structures(QString arg){
     this->string_suffix_structures = arg;
}
void Entry::set_suffix_arrays(QString arg){
     this->suffix_arrays = arg;
}
void Entry::set_ternarysearch(QString arg){
     this->ternarysearch = arg;
}
void Entry::set_trees(QString arg){
     this->trees = arg;
}
void Entry::set_trie(QString arg){
     this->trie = arg;
}
void Entry::set_twopointers(QString arg){
     this->twopointers = arg;
}



void Entry::set_site(QString arg)
{
    this->site = arg;
}

void Entry::set_p_name(QString arg)
{
    this->p_name = arg;
}

void Entry::set_doa(QString arg)
{
    this->doa = arg;
}

void Entry::set_url(QString arg)
{
    this->url = arg;
}

void Entry::get_new_concept(QString arg)
{
    this->new_concept = arg;
}

void Entry::get_solve_again(QString arg)
{
    this->solve_again = arg;
}


