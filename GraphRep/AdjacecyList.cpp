#include <bits/stdc++.h>

using namespace std;
const int MAX_N = 100010;

int n, m;
vector<int> adj[MAX_N];
int deg[MAX_N];

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
        //adj[v].push_back(u); //undirected graph

        deg[u]++;
        //deg[v]++;
    }    
}

bool discovered[MAX_N];
int layer[MAX_N];

void init_dis() {
    for(int i=0; i<n; i++) {
        discovered[i] = false;
    }
}

void bfs(int s) {
    discovered[s] = true;
    layer[s] = 0;
    list<int> Q;
    Q.push_back(s);
    while(!Q.empty()) {
        int u = Q.front();
        Q.pop_front();

        cout << u << " " << layer[u] << endl;
        for(int d=0; d<deg[u]; d++) {
            int v = adj[u][d];
            if(!discovered[v]) {
                Q.push_back(v);
                discovered[v] = true;
                layer[v] = layer[u] + 1;//updatelayer

            }
        }
    }
}

bool visited[MAX_N];
void init_dfs() {
    for(int i=0; i<n; i++) {
        visited[i] = false;
    }
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
    init_dis();
    bfs(0);
    for(int u=0; u<n; u++) {
        cout << " " << layer[u] << endl;
    }

}

/*
1: 2-> 3-> 4-> Null
2: 1-> 4-> 3-> Null
3: 1-> 2-> Null
4: 1-> 2-> Null
5: 3-> Null
6: 2-> Null #implement by vector
*/
