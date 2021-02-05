#include <bits/stdc++.h>

using namespace std;

int main(void) {
    //binary search
    int hight[6] = {0, 100, 100, 80, 80, 75};
    int high = 5, low = 1;
    int h = 95;
    int res;
    while(low <= high) {
        int mid = (high + low)/2;
        if(h <= hight[mid]) {
            low = mid+1;
            res = mid;
        }else {
            high = mid-1;
        }
        printf("high: %d, low: %d, hight[%d]: %d\n", high, low, mid, hight[mid]);
    }
    printf("res: %d", res);
}