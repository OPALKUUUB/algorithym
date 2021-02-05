#include <stdio.h>

int find_max(int arr[], int n) {
    int a=arr[0], i;
    for(i=0; i<n; i++) {
        if(a<arr[i]) {
            a=arr[i];
        }
    }
    return a;
}

void delete(int arr[], int n, int x) {
    int i;
    for(i=0; i<n; i++) {
        if(arr[i]==x) {
            arr[i]=0;
            return;
        }
    }
}

int main(void) {
    int w, h, m, n;
    scanf("%d%d%d%d",&w,&h,&m,&n);
    int x[m+2], y[n+2], i, j;
    x[0]=y[0]=0;
    x[m+1] = w;
    y[n+1] = h;
    for(i=1; i<m+1; i++) {
        scanf("%d",&x[i]);
    }
    for(i=1; i<n+1; i++) {
        scanf("%d",&y[i]);
    }
    int dist_x[m+1], dist_y[n+1];
    for(i=0; i<m+1; i++) {
        dist_x[i] = x[i+1]-x[i];
    }
    for(i=0; i<n+1; i++) {
        dist_y[i] = y[i+1]-y[i];
    }
    int s = (m+1)*(n+1);
    int Area[s];
    int run=0;
    for(i=0; i<m+1; i++) {
        for(j=0; j<n+1; j++) {
            Area[run] = dist_x[i]*dist_y[j];
            run++;
        }
    }
    int max[2];
    max[0]=find_max(Area, s);
    delete(Area,s,max[0]);
    max[1]=find_max(Area,s);
    printf("%d %d", max[0], max[1]);
    /*
    for(i=0; i<s; i++) {
        printf("%d ", Area[i]);
    }
    for(i=0; i<m+1; i++) {
        printf("%d ", dist_x[i]);
    }
    printf("\n");
    for(i=0; i<n+1; i++) {
        printf("%d ", dist_y[i]);
    }
    */
    return 0;
}