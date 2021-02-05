#include <stdio.h>

int min(int a, int b, int c) {
    int res, arr[3] = {a,b,c};
    res = arr[0];
    for(int i=1; i<3; i++) {
        if(res>arr[i]) {
            res = arr[i];
        }
    }
    return res;
}

int main(void) {
    int h[2], b[2], x, y;
    scanf("%d%d%d%d%d%d", &h[0], &h[1], &b[0], &b[1], &x, &y);
    int same=0, diff=0, t;
    if(x>=y) {// same > diff
        same += min(h[0], b[0], x);
        same += min(h[1], b[1], x);
        t = min(h[0], b[0], x);
        h[0] -= t;
        b[0] -= t;
        t = min(h[1], b[1], x);
        h[1] -= t;
        b[1] -= t;
        diff += min(h[0], b[1], y);
        diff += min(h[1], b[0], y);
    }else {
        diff += min(h[0], b[1], y);
        diff += min(h[1], b[0], y);
        t = min(h[0], b[1], y);
        h[0] -= t;
        b[1] -= t;
        t = min(h[1], b[0], y);
        h[1] -= t;
        b[0] -= t;
        same += min(h[0], b[0], x);
        same += min(h[1], b[1], x);
    }
    printf("%d",same+diff);
}