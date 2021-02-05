#include <bits/stdc++.h>
using namespace std;

vector<int> adj[3010];
vector<bool> visited(3010);
vector<int> color(3010);
int x,y;

bool isBipartite(int u)
{

	for (int v : adj[u]) {
		if (visited[v] == false) {
			visited[v] = true;
			color[v] = !color[u];
			if (!isBipartite(v))
				return false;
		}
		else if (color[u] == color[v])
			return false;
        
	}
	return true;
}

int main()
{
    int n,m,t;
    t = m;
	cin >> n >> m;
    int xx[m],yy[m];
    for(int i=1; i<n+1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
	    adj[v].push_back(u);
        xx[i] = u;yy[i] = v;
    }
	visited[1] = true;
	color[1] = 0;
    for(int i=0; i<m; i++) {

    }

    cout << x << " " << y;
	
	return 0;
}
