#include <bits/stdc++.h>

using namespace std;
const int MAX_N = 3010;

int n, m;
vector<int> adj[MAX_N];
vector<bool> visited(MAX_N);
vector<int> color(MAX_N);
int deg[MAX_N];
int colour[MAX_N];

void read_input() {
    cin >> n >> m;
    for(int i=0; i<n; i++) {
        deg[i] = 0;
    }
    for(int i=0; i<m; i++) {
        int u, v;
        cin >> u >> v;
        u--;v--;

        adj[u].push_back(v);
        adj[v].push_back(u);
        deg[u]++;
        deg[v]++;
    }    
}       

bool isBipartite(vector<int> adj[], int v, vector<bool>& visited, vector<int>& color) {
	for (int u : adj[v]) {
		if (visited[u] == false) {
			visited[u] = true; 
			color[u] = !color[v];
			if (!isBipartite(adj, u, visited, color))
				return false;
		}
		else if (color[u] == color[v])
			return false;
	}
	return true;
}

void dfs(int u) {
    visited[u] = true;
    for(int d=0; d<deg[u]; d++) {
        int v = adj[u][v];

        if(!visited[v]) {
            dfs(v);
        }
    }
}

int main(void) {
    read_input();

}