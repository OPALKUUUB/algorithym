#include <bits/stdc++.h>

using namespace std;
const int MAX_N = 500010;

int n, m, s, t, c, ans;
vector<int> adj[MAX_N];
vector<int> colour[MAX_N];
int deg[MAX_N];

bool visited[MAX_N];
void init_dfs() {
    for(int i=0; i<n; i++) {
        visited[i] = false;
    }
}

void dfs(int u, int T) {
    for(int d=0; d<deg[u]; d++) {
        if(u == s-1) {
        ans = 0;
        }
        int v = adj[u][d];
        //cout << ans << " "<<  u+1 << " " << v+1 << " "<< T << endl;
        //cout << "col: " << colour[u][d] << endl;
        if(u == t-1) {
            visited[u] = false;
        }
        if(v == t-1) {
            visited[v] = false;
        }else {
            visited[u] = true;
        }
        if(!visited[v]) {
            if(T == colour[u][d] || colour[u][d] == 0) {
                if(v == t-1) {
                    return;
                }
                ans++;
                dfs(v,T);
            }
            
            
        }
    }
}

int main(void) {
    cin >> n >> m >> s >> t;
    for(int i=0; i<n; i++) {
        deg[i] = 0;
    }
    for(int i=0; i<m; i++) {
        int u, v;
        cin >> u >> v >> c;
        u--;v--;
        adj[u].push_back(v);
        colour[u].push_back(c);
        adj[v].push_back(u); //undirected graph
        colour[v].push_back(c); 
        deg[u]++;deg[v]++;
    }
    int test[2] = { 1, 2};
    int res[2] = {0, 0};
    for(int i=0; i<2; i++) {
        int tt;
        init_dfs();
        ans = 1;
        tt = test[i];
        dfs(s-1, tt);
        res[i] = ans; 
    }
    if(res[0] == 0 && res[1] == 0) {
        cout << -1;
    }else {
        cout << (res[0] < res[1]) ? res[0]: res[1];
    }
    
    return 0;
}