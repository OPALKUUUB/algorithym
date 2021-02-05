#include <stdio.h>
#include <stdlib.h>

int dist(int opt[], int n) {
    int x=0,y=0;
    for(int i=0; i<n; i++) {
        if(opt[i]=='N') {
            y+=1;
        }else if(opt[i]=='S') {
            y-=1;
        }else if(opt[i]=='E') {
            x+=1;
        }else if(opt[i]=='W') {
            x-=1;
        }else if(opt[i]=='X'){
            continue;
        }else {
            x = y = 0;
        }
    }
    return abs(x)+abs(y);
}


int main(void) {
    char opt[1000];
    int x=0, y=0, n;
    scanf("%s", opt);
    while(opt[n]!=NULL) {
        n++; 
    }
    int k;
    scanf("%d", &k);
    int seq[k];
    for(int i=0; i<k; i++) {
        seq[i] = n-i;
    }
    //prob loop overlap loop==>use recursive
    return 0;
}