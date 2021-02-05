#include <bits/stdc++.h>

using namespace std;
int arr[1001];

int check(int arr[], int n) {
    int run = 1, i=0;
    stack<int> s;
    while(run<=n) {
        if(arr[i]==run) {
            i++;
            run++;
        }else {
            s.push(run);
            run++;
        }
    }
    int count=i;
    for(int j=i; j<n; j++) {
        if(s.top()==arr[j]) {
            count++;
        } 
        s.pop();
    }
    return (count+1==n) ? 1 : 0;
}

int main(void) {
    int n=-1;
    arr[0] = 1;
    while(n!=0) {
        scanf("%d", &n);
        
        while(arr[0]!=0 && n!=0) {
            scanf("%d",&arr[0]);
            if(arr[0]==0) {
                break;
            }
            for(int i=1; i<n; i++) {
                scanf("%d", &arr[i]);
            }
            if(!check(arr, n)) {
                printf("Yes\n");
            }else {
                printf("No\n");
            }
        }
    }
    printf("Yes");
}