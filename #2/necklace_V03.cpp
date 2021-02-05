#include<bits/stdc++.h>
using namespace std;
list <int> l[300005];
list <int> ::iterator it;
int h[300005];
int findh(int a)
{
    if(h[a] != a)
        return h[a] = findh(h[a]);
    return a;
}
int main()
{
    int n;
    for(int i=0;i<=300000;i++)
    {
        l[i].push_back(i);
        h[i] = i;
    }
    scanf("%d",&n);
    int k=n;
    n--;
    int start;
    while(n--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        int heady = findh(h[y]);
        h[x] = heady;
        it = find (l[heady].begin(),l[heady].end(),y);
        it++;
        l[heady].splice(it,l[x]);
    }
    for(int i=1;i<=k;i++)
    if(l[i].size() == k)
            start = i;
    for(it = l[start].begin() ; it != l[start].end() ; it++)
        printf("%d ",*it);

}