#include <stdio.h>

int main(void) {
    char opt[1000];
    int x=0, y=0, n;
    scanf("%s", opt);
    while(opt[n]!=NULL) {
        n++; 
    }
    char dir[4] = {'N', 'E', 'S', 'W'};
    int pos = 0;
    for(int i=0; i<n; i++) {
        if(dir[pos] == opt[i]) {
            printf("F");
        }else if(opt[i]=='Z') {
            pos=0;
            printf("Z");
        }else {
            while(opt[i]!=dir[pos]) {
                pos = (pos+1) % 4;
                printf("R");
            }
            printf("F");
        }
    }
    return 0;
}