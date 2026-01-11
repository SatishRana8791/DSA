#include <bits/stdc++.h>
using namespace std;

void dfsRec(const vector<vector<int>>& adj, vector<bool>& visited, int u) {
    visited[u] = true;
    cout << u << " ";
    for (int v : adj[u]) {
        if (!visited[v]) dfsRec(adj, visited, v);
    }
}

void DFS(const vector<vector<int>>& adj, int start) {
    vector<bool> visited(adj.size(), false);
    dfsRec(adj, visited, start);
}

int main() {
    int V = 5;
    vector<vector<int>> adj(V);
    vector<vector<int>> edges = {{1,2}, {1,0}, {2,0}, {2,3}, {4,2}};
    for (auto &e : edges)
        adj[e[0]].push_back(e[1]);
    cout << "DFS starting from vertex 1:\n";
    DFS(adj, 1);
    return 0;
}
