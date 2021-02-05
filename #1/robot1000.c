#include <stdio.h>

int main(void) {
    char opt[1000];
    int x=0, y=0, i;
    scanf("%s", opt);
    while(opt[i]!=NULL) {
        i++; 
    }
    for(int j=0; j<i; j++) {
        if(opt[j]=='N') {
            y+=1;
        }else if(opt[j]=='S') {
            y-=1;
        }else if(opt[j]=='E') {
            x+=1;
        }else if(opt[j]=='W') {
            x-=1;
        }else {
            x = y = 0;
        }
    }
    printf("%d %d", x, y);
    return 0;
}