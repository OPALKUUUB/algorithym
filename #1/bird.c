#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int arr[n+1];
    arr[0] = -1;
    arr[n+1] = -1;
    int i;
    for(i=1; i<=n; i++) {
        scanf("%d", &arr[i]);
    }
    /*
    for(i=0; i<=n+1; i++) {
        printf("%d ", arr[i]);
    }
    */
   int ck[n+1];
   ck[0] = ck[n+1] = -1;
   int count = 0;
   for(i=1; i<=n; i++) {
       if(arr[i]>arr[i+1] && arr[i]>arr[i-1]) {
           ck[i] = 1;
           count++;
       }else {
           ck[i] = 0;
       }
   }
   printf("%d", count);
   return 0;

}