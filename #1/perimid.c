#include <stdio.h>

int main(void) {
    int dim, sell;
    scanf("%d%d",&dim, &sell);
    int all=0;
    for(int i=1; i<=dim; i++) {
        all+=i*i;
    }
    int s=all-sell, lev=0;
    while(s>0) {
        s-=dim*dim;
        dim--;
        lev++;
    }
    printf("%d", lev);
}