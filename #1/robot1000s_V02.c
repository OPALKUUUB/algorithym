#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char opt[1000];
    scanf("%s", opt);
    int n=0;
    int cdir[4] = {0,0,0,0};
    char dir[4] = {'N', 'S', 'E', 'W'};
    while(opt[n]!=NULL) {
        if(opt[n] == dir[0]) {
            cdir[0]++;
        }else if(opt[n] == dir[1]) {
            cdir[1]++;
        }else if(opt[n] == dir[2]) {
            cdir[2]++;
        }else if(opt[n] == dir[3]) {
            cdir[3]++;
        }
        n++;
    }
    int k, temp;
    scanf("%d", &k);
    temp = k;
    if(cdir[0]>cdir[1]) {
        while(cdir[1]!=0 && k!=0) {
            cdir[1]--;
            k--;
        }
        if(cdir[2]>cdir[3]) {
            while(cdir[3]!=0 && k!=0) {
                cdir[3]--;
                k--;
            }
        }else {
            while(cdir[2]!=0 && k!=0) {
                cdir[2]--;
                k--;
            }
        }
    }else {
        while(cdir[0]!=0 && k!=0) {
            cdir[0]--;
            k--;
        }
        if(cdir[2]>cdir[3]) {
            while(cdir[3]!=0 && k!=0) {
                cdir[3]--;
                k--;
            }
        }else {
            while(cdir[2]!=0 && k!=0) {
                cdir[2]--;
                k--;
            }
        }
    }
    int i=0;
    while(k!=0) {
        if(cdir[i]==0) {
            i++;
        }
        cdir[i]--;
        k--;
    }
    if(temp == n) {
        printf("%d", 0);
    }else {
        printf("%d",(abs(cdir[0]-cdir[1])+abs(cdir[2]-cdir[3]))*2);
    }
    return 0;
}