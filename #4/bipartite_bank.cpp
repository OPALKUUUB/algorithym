#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100100;

vector<int> adj[MAX_N];
int deg[MAX_N];
int n,m;

void init_input(){ //reset
    for (int i=0; i<MAX_N; i++){
        adj[i].clear();
        deg[i] = 0;
    }
}

void read_input(){ // create undirected graph
    int x,y;
    cin >> n >> m;
    for (int i=0; i<m; i++){
        cin >> x >> y;
        x--; y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
        deg[x]++;
        deg[y]++;
    }
}

bool discovered[MAX_N];
int mark[MAX_N];

void init_BFS(){//reset
    for (int i=0; i<MAX_N; i++){
        discovered[i] = false;
    }
}

void bfs(int s){
    discovered[s] = true;
    queue<int> Q;
    Q.push(s);
    while (!Q.empty()){
        int U = Q.front();
        Q.pop();
        //cout << "U: " << U+1 << " " << endl;
        for (int d=0; d<deg[U]; d++){
            int v = adj[U][d];
            //cout << "v: " << v+1 << " ";
            if (!discovered[v]){
                //cout << "new ";
                Q.push(v);
                discovered[v] = true;
                
                mark[v] = (mark[U]==0) ? 1:0;//use for check bipartite
                //cout << "mark[v] (" << mark[v] << "), ";
                //cout << "mark[U] (" << mark[U] << ") ";
            }
            //cout << endl;
        }
    }
}

int bipartite(){
    //cout << "Bipartite" << endl; 
    for (int i=0; i<n; i++){
        for (int d=0; d<deg[i]; d++){
            int v = adj[i][d];
            //cout << "loop " << i+1 << " " << v+1 << endl;
            if (mark[i]==mark[v]){
                cout << i << " " << v << endl;
                return 0;
            }
        }
    }
    //cout << "return 1" << endl;
    return 1;
}

int main(){
    int k = 1;
    //cin >> k;
    for (int i=0; i<k; i++){
        init_input();
        read_input();
        init_BFS();
        for (int j=0; j<n; j++){ // check that how many graph
            if (!discovered[j]){
                bfs(j);
            }
        }
        bipartite();
        
        /*
        if (bipartite()){
            cout << "yes\n";
        }
        else{
            cout << "no\n";
        }
        */
    }
    return 0;
}
/*
2
3 3
1 2
2 3
3 1
4 3
1 2
1 3
4 1
*/