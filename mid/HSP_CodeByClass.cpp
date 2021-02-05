#include<bits/stdc++.h>
using namespace std;
set<int>v[100005];
set<int>s;
int aa[100005];
int bb[100005];
int chk[100005];
int c[100005];
int anschk = 0;
int ans;
int stop = 0;
void dfs(int a,int color)
{
    if(chk[a])
    {
        if(c[a] != color)
        {
            anschk=1;
        }
        return;
    }
    chk[a] = 1;
    c[a] = color;
    for(auto it=v[a].begin(); it!=v[a].end(); it++)
    {
        if(color == 1)
            dfs(*it,2);
        else
            dfs(*it,1);
    }
}
int main()
{
    int t,n,m;

    scanf("%d%d",&n,&m);
    for(int i=1; i<=m; i++)
    {
        scanf("%d%d",&aa[i],&bb[i]);
        s.insert(aa[i]);
        s.insert(bb[i]);
        v[aa[i]].insert(bb[i]);
        v[bb[i]].insert(aa[i]);
        
    }
    for(int i=1;i<=m;i++)
    {
        anschk = 0;
        v[aa[i]].erase(bb[i]);
        v[bb[i]].erase(aa[i]);
        for(auto it=s.begin();it!=s.end();it++)
        {
            if(!chk[*it])
                dfs(*it,1);
        }
        if(!anschk)
        {
            printf("%d %d",aa[i],bb[i]);
            break;
        }
        for(auto it=s.begin();it!=s.end();it++)
        {
            chk[*it] = 0;
            c[*it] = 0;
        }
        v[aa[i]].insert(bb[i]);
        v[bb[i]].insert(aa[i]);
    }
}