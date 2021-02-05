#include <stdio.h>

int main(void) {
    int n, q=0, run=1, lev=0, count=0,wall;
    scanf("%d", &n);
    while(q==0) {
        printf("%d ", run);
        if(run==n) {
            break;
        }
        if(count==lev) {
            printf("\n");
            count=-1;
            lev+=2;
        }
        count++; 
        run++;
    }
    int odd=0,even=1, x=2;
    while(x<=lev) {
        if(x==lev) {
            odd=1;
            even=0;
            break;
        }
        x+=4;
    }
    
    if(odd==1 && n%2!=0) {
        printf("%d",lev-1);
    }else if(even==1 && n%2==0){
        printf("%d",lev-1);
    }else {
        printf("%d",lev);
    }
    return 0;
}