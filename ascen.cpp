#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>
int main()
{
vector<string> v = {"brute_force","combinatorics","dynamic_programming","graphs",
          "greedy", "implementation", "probabilty","sorting","binarySearch","fft","bitmasks","numbertheory","shortestpaths","_2sat","games",
            "hashing","constructive_algorithms","datastructures","string_suffix_structures","matrices","meet_in_the_middle","flows","divideandconquer",
            "geometry" ,"twopointers","dsu","ternarysearch","trees", "disjoint_set", "Ad_hoc", "hash_map", "bit_manipulation", "dfs", "bfs", "sieve", "priority_queue",
            "stack", "recursion", "heap", "modular_arithmetic", "spanning tree", "matrix exponentiation", "gcd", "factorization", "simulation", "trie", "segment_trees",
            "memoization", "fenwick_tree", "suffix_arrays", "sqrt_decomposition", "bipartite_graph"};
            sort(v.begin(), v.end());
            cout<<v.size()<<endl;
            int cn = 0;
            for(int i=0; i<v.size(); ++i)
            {
                cout<<i<<" "<<v.at(i)<<" \n";
                cn++;

            }
}
