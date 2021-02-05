#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, m, temp;
    scanf("%d%d",&n, &m);
    set<int> data;
    for(int i=0; i<n; i++) {
        scanf("%d", &temp);
        data.insert(temp);
    }
    list<int> ck;
    //data = {10, 12, 20, 25, 35}
    set<int>::iterator itup, itlow, ritb, rite;
    for(int i=0; i<m; i++) {
        scanf("%d",&temp);
        ritb = data.begin();
        rite = data.end();
        rite--;
        itup = data.upper_bound(temp);
        itlow = data.lower_bound(temp);
        if(*itlow == temp) {
            ck.push_back(temp);
            continue;
        } 
        itlow--;
        //printf("ritb: %d, rite: %d, itup: %d, itlow: %d\n",*ritb, *rite, *itup, *itlow);
        if(temp>*rite) {
            ck.push_back(*itlow);
        }else if(temp<*ritb) {
            ck.push_back(*itup);
        }else {
            //printf("%d %d\n", *itup, *itlow);
            ck.push_back((temp-*itlow<=*itup-temp) ? *itlow : *itup);
        }
    }
    for(auto it=ck.begin(); it!=ck.end(); it++) printf("%d\n", *it);
}
/*
5 4
10
20
35
12
25
100
11
17
25
*/