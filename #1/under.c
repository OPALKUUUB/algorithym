#include <stdio.h>

void count(int line[], int start, int stop) {
    for(start+1; start<=stop-1; start++) {
        line[start]++;
    }
}

int max(int arr[], int l) {
    int max = arr[0];
    for(int i=1; i<=l; i++) {
        max = (max<arr[i]) ? arr[i] : max;
    }
    return max;
}

int main(void) {
    int l, n;
    scanf("%d%d", &l, &n);
    int line[l+1];
    for(int i=0; i<=l; i++) {
        line[i] = 0;
    }
    int start, stop;
    for(int i=0; i<n; i++) {
        scanf("%d%d", &start, &stop);
        count(line, start, stop);
    }
    printf("%d", max(line, l));
    /*
    for(int i=0; i<=l; i++) {
        printf("%d ", line[i]);
    }
    */
}