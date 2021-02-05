#include <bits/stdc++.h>

using namespace std;

int n, m;

int *insert(int arr[], int x, int y, int end) {
    for(int i=0; i<n+m; i++) {
        if(arr[i] == y) {
            for(int j=end; j>i; j--) {
                arr[j] = arr[j-1];
            }
            arr[i+1] = x;
            break;
        }
    }
    /*
    printf("insert: ");
    for(int i=0; i<n+m; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    */
    return arr;
}

int main(void) {
    scanf("%d%d", &n, &m);
    int arr[n+m];
    for(int i=0; i<n+m; i++) {
        if(i<n) {
            arr[i] = i+1;
        }else {
            arr[i] = 0;
        }
    }
    int t=n, x, y, end=n;
    while(t--) {
        scanf("%d", &x);
    }
    for(int i=n; i<n+m; i++) {
        scanf("%d%d", &x, &y);
        /*
        printf("before: ");
        for(int i=0; i<n+m; i++) {
            printf("%d ",arr[i]);
        }
        printf("\n");
        */
        insert(arr, i+1, y, end);
        end++;
    }
    for(int i=0; i<n+m; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}