#include <stdio.h>

int operator(char x) {
    return (x=='+') ? 1 : 0;
}
/*
int main(void) {
    int n;
    scanf("%d", &n);
    int len = (2*n)-1, res, temp;
    char arr[len];
    for(int i=0; i<len; i++) {
        scanf("%c", &arr[i]);
    }
    res = arr[0]-'0';
    for(int i=1; i<len; i++) {
        printf("arr[%d]: %d\n", i,arr[i]-'0');
        if(i%2==0) {
            temp = arr[i]-'0';
        }else if(operator(arr[i])) {
            res+=temp;
        }else {
            res-=temp;
        }
    }
    printf("%d", res);
    return 0;
}
*/
int main() {
    char arr[5];
    for(int i=0; i<5; i++) {
        scanf("%c", &arr[i]);
        printf("%c", arr[i]);
    }
    
}