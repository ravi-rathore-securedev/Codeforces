/*
    ***********************
    Coder :: sirravirathore
    ***********************
*/
/* Problem: shortest path in DAG

    given a graph, find the shortest from first 
    vertex to last vertex

    objective function 
    f[i] is the shortest path from i to last vertex

    f[i]=min(weight+f[ngbr]);

    f[n]=0;
*/
#include<bits/stdc++.h>
using namespace std;


int main() {
    int n, k;
    cin >> n >> k;

    
    unordered_map<int, vector<pair<int, int>>> adj; 
    for (int i = 0; i < k; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }
    
    vector<int> t(n, INT_MAX);
    t[n - 1] = 0; 
    
    for (int i = n - 2; i >= 0; i--) {
        for (auto &[node, wt] : adj[i]) {
            if (t[node] != INT_MAX) {
                t[i] = min(t[i], wt + t[node]);
            }
        }
    }
    
    cout << (t[0] == INT_MAX ? -1 : t[0]) << endl;
    return 0;
}

