#include <bits/stdc++.h>

using namespace std;
int hight[200005];
int n, q;

void Q1(int idx) {
    printf("%d\n",hight[idx]);
}

void Q2(int h) { // binary search
    int low = 1, high = n;
    int res;
    if(h > hight[1]) {
        res = 0;
    }else {
        while(low <= high) {
            int mid = (high + low)/2;
            if(h <= hight[mid]) {
                low = mid+1;
                res = mid;
            }else {
                high = mid-1;
            }
            //printf("high: %d, low: %d, hight[%d]: %d\n", high, low, mid, hight[mid]);
        }
    }
    
    printf("%d\n",res);
}

int main(void) {
    scanf("%d%d", &n, &q);
    hight[0] = 1e9 + 1;
    for(int i=1; i<n+1; i++) {
        scanf("%d", &hight[i]);
        hight[i] = min(hight[i], hight[i-1]); // 100 240 80 90 75 -> 100 100 80 80 75
        //printf("h[i]%d\n",hight[i]);
    }
    while(q--) {
        int cm, t;
        scanf("%d%d", &cm, &t);
        switch(cm) {
            case 1:
                Q1(t);
                break;
            case 2:
                Q2(t);
                break;
        }
    }
    return 0;
}