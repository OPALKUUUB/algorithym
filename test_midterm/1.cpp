#include <bits/stdc++.h>

using namespace std;

int n, l;

int main(void) {
    cin >> n;
    int day[n+1];
    for(int i=0; i<n+1; i++) {
        day[i] = 0;
    }
    for(int i=1; i<n+1; i++) {
        int l;
        cin >> l;
        day[i] += day[i-1];
        while(l--) {
            int a, b;
            cin >> a >> b;
            day[i] += a;
            if(b+i < n+1) { // check out of range
                day[b+i] -= a;
            }
        }
    }
    for(int i=1; i<n+1; i++) {
        cout << day[i] << endl;
    }
    return 0;
}