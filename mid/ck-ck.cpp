#include <bits/stdc++.h>

using namespace std;

int u[3005];
int start = 2558;
int stop = 3005;

int main(void) {
    int y, refrain;
    scanf("%d", &y);
    for(int i = start; i<stop; i++) {
        u[i] = 0;
    }
    while(refrain != 0) {
        scanf("%d", &refrain);
        u[refrain] = -1;
    }
    int t = 0, sw;
    for(int i=start; i<=y; i++) {
        if(u[i] == -1) {
            t++;
        }
        if(t%2 == 0) {
            sw = 0;
        }else {
            sw = 1;
        }
        u[i] = sw; 
        //printf("u[%d]: %d, t = %d\n", i, sw, t);
        t++;
    }
    printf("%c", (u[y] == 0) ? 'K' : 'C');
}