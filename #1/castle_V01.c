#include <stdio.h>

int main(void) {
    int n, i, j;
    scanf("%d", &n);
    int castle[9][5] = {{0, 0, 1, 0, 0},
                        {0, 2, 0, 4, 0},
                        {0, 6, 0, 8, 0},
                        {5, 0, 7, 0, 9},
                        {11, 0, 13, 0, 15},
                        {10, 12, 0, 14, 16},
                        {18, 20, 0, 22, 24},
                        {17, 19, 21, 23, 25}};
    for(i=0; i<8; i++) {
        for(j=0; j<5; j++) {
            if(n==castle[i][j]) {
                printf("%d", i+1);
            }
        }
    }
    return 0;
}