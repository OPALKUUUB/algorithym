#include <bits/stdc++.h>

using namespace std;

int ladder[1005];

int main(void) {
    int n, m, t;
    int index = 0;
    scanf("%d%d", &n, &m);
    ladder[0] = 0;
    for(int i=1; i<n+1; i++) {
        scanf("%d",&t);
        ladder[i] = t;
    }
    while(m--) {
        scanf("%d", &t);
        if(index + t >= n) {
            index=n;
            continue;
        }else if(ladder[index+t] + index + t >= n) { // dice t + index > ladder
            index=n;
            continue;
        }else if(index + t + ladder[index+t] < 0) { //< 0 -> reverse
            index=0;
            continue;
        }
        index+=ladder[index+t]+t;
    }
    printf("%d\n",index);
    
}