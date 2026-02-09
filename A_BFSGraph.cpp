#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u); 
}

void printGraph(vector<int>adj[], int n){
    for(int i = 0; i < n; i++){
        cout << "Vertex " << i << ": ";
        for(int j : adj[i]){
            cout << j << " ";
        }
        cout << endl;
    }
}

void bfs(vector<int>adj[], int start){

    queue<int>q;
    q.push(start);
    vector<int>vis(100, 0);
    vis[start] = 1;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << " ";

        for(int i : adj[node]){
            if(!vis[i]){
                vis[i] = 1;
                q.push(i);

            }
        }
    }
}
int main(){
    int n;
    cout << "Enter the number of vertices: ";
    cin >> n;

    int m;
    cout << "Enter the number of edges: ";
    cin >> m;

    // Assuming the graph is undirected 
    vector<int>adj[n];

    for(int i = 0; i <m; i++){
        int u, v;
        cout << "Enter edge " << i+1 << " (u v): ";
        cin >> u >> v;
        addEdge(adj, u, v);
    }
    printGraph(adj, n);
    int start;
    cout << "Enter the starting vertex for BFS: ";
    cin >> start;
    cout << "BFS Traversal starting from vertex " << start << ": ";
    bfs(adj, start);
    return 0;

}