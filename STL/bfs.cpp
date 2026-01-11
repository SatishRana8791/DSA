#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> bfs(int start, const vector<vector<int>>& adj) {
    int V = adj.size();
    vector<bool> visited(V, false);
    queue<int> q;
    vector<int> traversal;

    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        traversal.push_back(current);

        for (int neighbor : adj[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    return traversal;
}

int main() {
    vector<vector<int>> graph = {
        {1, 2},    // neighbors of 0
        {0, 3, 4}, // neighbors of 1
        {0, 5},    // neighbors of 2
        {1},       // neighbors of 3
        {1},       // neighbors of 4
        {2}        // neighbors of 5
    };

    vector<int> result = bfs(0, graph);
    cout << "BFS Traversal: ";
    for (int node : result)
        cout << node << " ";
    cout << endl;
    return 0;
}
