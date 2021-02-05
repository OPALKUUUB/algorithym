#include <bits/stdc++.h>

using namespace std;

int h[100005];

int find(int a) {
    if(h[a] == a) {
        return a;
    }
    return find(h[a]);
}

int main(void) {
    int n, m, k;
    scanf("%d%d%d",&n,&m,&k);
    for(int i=0; i<=n; i++) {
        h[i] = i;
    }
    int u, v;
    while(m--) {
        scanf("%d%d", &u,&v);
        int hu = find(u);
        int hv = find(v);
        h[hu] = h[hv];
    }
    while(k--) {
        scanf("%d%d", &u, &v);
        if(find(h[u]) == find(h[v])) {
            printf("%d\n",1);
        }else {
            printf("%d\n",0);
        }
    }
}