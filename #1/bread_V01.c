#include <stdio.h>

int main(void) {
    int w, h, i, j;
    int n, m;
    scanf("%d %d %d %d",&w, &h, &n, &m);
    int x[w], y[h], px, py;
    for(i=0; i<n; i++) {
        x[i] = 0;
    }
    for(j=0; j<n; j++) {
        y[j] = 0;
    }
    for(i=0; i<n; i++) {
        scanf("%d", &px);
        x[px] = 1;
    }
    for(j=0; j<m; j++) {
        scanf("%d", &py);
        y[py] = 1;
    }
    int metrix[h][w];
    for(j=0; j<h; j++) {
        for(i=0; i<w; i++) {
            if(y[j] == 1) {
                metrix[j][i] = 1;
            }else {
                metrix[j][i] = 0;
            }
        }
    }
    for(i=0; i<w; i++) {
        for(j=0; j<h; j++) {
            if(metrix[j][i] != 0 && x[i] == 1) {
                metrix[j][i] = 8;
            }else if(x[i] == 1) {
                metrix[j][i] = 1;
            }
        }
    }

    for(j=0; j<h; j++) {
        for(i=0; i<w; i++) {
            printf("%d", metrix[j][i]);
        }
        printf("\n");
    }
    
}