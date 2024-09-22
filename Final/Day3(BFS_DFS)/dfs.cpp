//Write a Code to apply DFS

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(int start,vector<vector<int>>& adjList, vector<bool>& visited){
    stack<int> s;
    s.push(start);
    visited[start] = true;

    while(!s.empty()){
        int node = s.top();
        s.pop();
        cout << node << " ";


        for(int x : adjList[node]){
            if(!visited[x]){
                s.push(x);
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

    cout << "DFS Traversal starting from node " << start << ": ";
    dfs(start, adjList, visited);

    return 0;
}