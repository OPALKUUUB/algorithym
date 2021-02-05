#include <stdio.h>

int min(int arr[]) {
    int min = arr[0];
    for(int i=1; i<3; i++) {
        min = (min<arr[i]) ? min : arr[i];
    }
    return min;
}

int main(void) {
    int pri[3];
    scanf("%d%d%d", &pri[0], &pri[1], &pri[2]);
    int n, type,res[3]={0,0,0};
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &type);
        res[type-1]+= pri[type-1];
    }
    printf("%d", min(res));
    return 0;
}