#include <iostream>
#include <list>

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

int main(void) {
    int n;
    scanf("%d", &n);
    list<int> arr[n];
    for(int i=0; i<n; i++) {
        arr[i].push_back(i+1);
    }
    int x, y;
    for(int i=0; i<n-1; i++) {//O(n) only!!!!!
        scanf("%d%d", &x, &y);
        for(int j=0; j<n; j++) {
            for(auto it=arr[j].begin(); it!=arr[j].end(); it++) {
                if(*it==y) {
                    it++;
                    for(int k=0; k<n; k++) {
                        if(arr[k].front()==x) {
                            arr[j].splice(it, arr[k]);
                            break;
                        }
                    }
                    break;
                }
            }
        }
        showlist(arr, n);
    }
    for(int i=0; i<n; i++) {
        for(auto it=arr[i].begin(); it!=arr[i].end(); it++) {
            printf("%d ", *it);
        }
    }
    
    return 0;
}
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