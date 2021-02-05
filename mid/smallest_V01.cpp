#include <bits/stdc++.h>

using namespace std;
int high[200005];
int n, q;

void Q1(int t) {
    int min = high[0];
    for(int i=0; i<t; i++) {
        (min > high[i]) ? min = high[i] : min;
    }
    printf("%d\n", min);
}

void Q2(int t) {
    int i;
    for(i=0; i<n; i++) {
        if(high[i] < t) {
            break;
        }
    }
    printf("%d\n", (i == 0) ? 0 : i++);
}

int main(void) {
    scanf("%d%d",&n, &q);
    for(int i=0; i<n; i++) {
        scanf("%d", &high[i]);
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
/*
5 10
100
240
80
90
75
*/