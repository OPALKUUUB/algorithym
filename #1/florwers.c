#include <stdio.h>

int main(void) {
    int n, l;
    scanf("%d%d", &n, &l);
    int i=1,count=1,lev=1;
    i=n*(n+1)/2;
    while(i<l) {
        i+=n*n*count;
        count++;
        i+=n*(n+1)/2;
        if(i>=l) {
            break;
        }
        lev++;
    }
    if(count!=1) {
        printf("%d", lev+1);
    }else {
        printf("%d", lev);
    } 
    
}