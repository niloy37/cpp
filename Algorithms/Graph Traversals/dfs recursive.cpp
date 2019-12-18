#include<iostream>
#include<vector>
using namespace std;

vector <int> adj[10];
bool visited[10];

//dfs recursive
void dfs (int s) {
    visited[s] = true;
    for(int i=0; i < adj[s].size(); ++i){
        if(visited[adj[s][i]] == false)
        dfs(adj[s][i]);
    }
}

void inititalize() {
    for(int i=0 ; i< 10 ; ++i){
        visited[i] = false;
    }
}

int main () 
{
    int nodes, edges, x, y , connectedComponents = 0;
    cin >> nodes;
    cin>> edges;
    for(int i = 0 ; i<edges; ++i){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    inititalize();

    for(int i=1 ; i<= nodes; ++i) {
        if(visited[i] == false){
            dfs(i);
            connectedComponents++;
        }
    }
      cout << "Number of connected components: " << connectedComponents << endl;
    return 0;
}
