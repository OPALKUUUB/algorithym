#include <bits/stdc++.h>

using namespace std;

void showlist(list<int> arr[], int n) {
    for(int i=0; i<n; i++) {
        for(auto itr=arr[i].begin(); itr!=arr[i].end(); itr++) {
            printf("%d ", *itr);
        }
        printf(" | ");
    }
    printf("\n");
}

int find_head(int arr[], int a) {
    if(arr[a] != a) {
        return arr[a] = find_head(arr, arr[a]);
    }
    return a;
}

int main(void) {
    int n;
    scanf("%d", &n);
    list<int> arr[n+1];
    int temp[n+1];
    for(int i=0; i<=n; i++) {
        arr[i].push_back(i);
        temp[i] = i;
    }
    int x, y;//y->x
    list<int>::iterator itr;
    for(int i=0; i<n-1; i++) {
        scanf("%d%d", &x, &y);
        temp[x] = find_head(temp, temp[y]);
        itr = find(arr[temp[x]].begin(), arr[temp[x]].end(), y);
        itr++;
        arr[temp[x]].splice(itr, arr[x]);
        //showlist(arr, n);
    }
    int i;
    for(i=0; i<=n; i++) {
        if(arr[i].size()==n) {
            for(auto it=arr[i].begin(); it!=arr[i].end(); it++) {
                printf("%d ", *it);
            }
            break;
        }
    }
    
}
//-6-1-4-5-3-7-8-2- 
/*
8
7 4
3 5
5 4
8 1
2 8
1 6
4 1 
*/