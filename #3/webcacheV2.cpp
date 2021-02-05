#include<bits/stdc++.h>

using namespace std;

queue<int> l;
set<int> s;

int main() {
    int n, m, miss=0;
    scanf("%d%d", &n, &m);
    while(m--) {
        int x;
        scanf("%d",&x);
        auto it = s.find(x);
        //printf("%d %d\n", it, s.end());
        if(it == s.end()) { //find in set return end if it not found.
            //printf("miss\n");
            miss++;
            l.push(x);
            s.insert(x);
            if(l.size() > n) {
                s.erase(s.find(l.front()));
                l.pop();
            }
        }
        /*
        printf("set: ");
        for(auto i=s.begin(); i!=s.end(); i++) {
            printf("%d ", *i);
        }
        printf("\n");
        */
    }
    printf("%d\n",miss);
    return 0;
}

/*
3 7
1
2
3
2
5
3
1
*/