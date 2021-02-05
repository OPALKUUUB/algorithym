#include <stdio.h>
#include <math.h>
int darts(int x, int y) {
    double sco = sqrt(x*x + y*y);
    int res;
    if(sco<=2) {
        res=5;
    }else if(2<sco && sco<=4) {
        res=4;
    }else if(4<sco && sco<=6) {
        res=3;
    }else if(6<sco && sco<=8) {
        res=2;
    }else if(8<sco && sco<=10) {
        res=1;
    }else if(sco>10) {
        res=0;
    }
    return res;
}

int main(void) {
    int n;
    scanf("%d", &n);
    int x, y, score=0;
    for(int i=0; i<n; i++) {
        scanf("%d%d", &x, &y);
        score += darts(x, y);
    }
    printf("%d", score);
}