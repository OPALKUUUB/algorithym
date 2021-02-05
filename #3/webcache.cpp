#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, m; //n: page cache, m: request
    int count=1, miss=1; // enq/deq when cache #m
    scanf("%d%d", &n, &m);
    int page;
    scanf("%d", &page);
    printf("miss: %d\n", page);
    queue<int> after;
    after.push(page);
    m--;
    while(m--) {
        scanf("%d", &page);
        int check = 0;
        for(auto i=after.front(); i!=after.back(); i++) {//must O(1)
            if(i == page) {
                check++;
                break;
            }
        }
        if(check==0) {
            printf("miss: %d\n", page);
            miss++;
            after.push(page);
            count++;
            if(count>n) {
                after.pop();
            }
        }
    }

    printf("%d", miss);
}