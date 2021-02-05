#include <stdio.h>

int optor(char x) {
    return (x=='+') ? 1 : 0;
}

int main() {
    int n;
    scanf("%d", &n);
    int opr;
    char opt;
    int res;
    scanf("%d", &res);
    for(int i=0; i<n-1; i++) {
        scanf(" %c %d", &opt, &opr);
        res = (optor(opt)) ? res+opr : res-opr;
    }
    printf("%d", res);
    return 0;
}