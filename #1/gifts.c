#include <stdio.h>

int main(void) {
    int n, temp, res=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &temp);
        if(temp<=0) {
            res+=0;
        }else {
            res+=temp;
        }
    } 
    printf("%d",res);
}