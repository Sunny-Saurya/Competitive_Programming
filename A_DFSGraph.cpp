#include<bits/stdc++.h>
using namespace std;

void addEdges(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printAdjacencyList(vector<int> adj[], int n){
    for(int i = 0; i < n; i++){
        cout << "Vertex " << i << ": ";
        for(int j : adj[i]){
            cout << j << " ";
        }
        cout << endl;
    }
}

void dfsUtil(vector<int> adj[], int node, vector<int> &vis){
    vis[node] = 1;
    cout << node << " ";

    for(int i : adj[node]){
        if(!vis[i]){
            dfsUtil(adj, i, vis);
        }
    }
}

void dfs(vector<int> adj[], int start, int n){
    vector<int> vis(n, 0);
    dfsUtil(adj, start, vis);
}

int main(){
    int n;
    cout << "Enter number of vertices: ";
    cin >> n;

    int m;
    cout << "Enter number of edges: ";
    cin >> m;

    vector<int> adj[n];
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        addEdges(adj, u, v);
    }

    printAdjacencyList(adj, n);

    cout << "DFS Traversal: ";
    dfs(adj, 0, n);

    return 0;
}
