#include <stdio.h>

int chair(int q[], int pos, int h) {
    int max=q[0], res,count=0, i;
    for(i=1; i<pos; i++) {
        if(q[i]>max) {
            max = q[i];
        }
    }
    //printf("max: %d, h: %d pos: %d\n", max, h, pos);
    res = max-h+1;
    if(max==h) {
        int count=0;
        for(i=0; i<pos-1; i++) {
            //printf("q[i]: %d ", q[i]);
            if(q[i]==h) {
                count=1;
            }
        }
        //printf("c: %d\n", count);
        if(count==0) {
            res--;
        }
    }
    return res;
}

int main(void) {
    int n, l, i;
    scanf("%d%d", &n, &l);
    int queue[n], cust[l];
    for(i=0; i<n; i++) {
        scanf("%d",&queue[i]);
    }
    for(i=0; i<l; i++) {
        scanf("%d",&cust[i]);
    }
    int high;
    for(i=0; i<l; i++) {
        high = queue[cust[i]-1];
        printf("%d\n", chair(queue, cust[i], high));
    }
}