#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to perform BFS on a graph
void BFS(int start, const vector<vector<int>>& adjList, vector<bool>& visited) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " "; // Output the current node

        // Traverse all the neighbors of the current node
        for (int x : adjList[node]) {
            if (!visited[x]) {
                q.push(x);
                visited[x] = true;
            }
        }
    }
}

int main() {
    int vertices, edges;
    cout << "Enter the number of vertices and edges: ";
    cin >> vertices >> edges;

    // Create an adjacency list
    vector<vector<int>> adjList(vertices);
    cout << "Enter the edges (u v):\n";
    for (int i = 0; i < edges; ++i) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);  // For an undirected graph
    }

    vector<bool> visited(vertices, false);
    int start;
    cout << "Enter the starting node for BFS: ";
    cin >> start;

    cout << "BFS Traversal starting from node " << start << ": ";
    BFS(start, adjList, visited);

    return 0;
}
