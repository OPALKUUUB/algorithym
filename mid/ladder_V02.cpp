#include <bits/stdc++.h>

using namespace std;

int ladder[1010];
int n, m;

int main(void) {
    cin >> n >> m;
    for(int i=1; i<n+1; i++) {
        cin >> ladder[i];
    }
    int pos = 0, res;
    while(m--) {
        int dice;
        cin >> dice;
        if(dice + pos > n) { // case1 avoid out of range in ladder
            res = n;
            continue;
        }else if(pos+dice + ladder[pos+dice] > n) {
            res = n;
            continue;
        }else if(pos + dice + ladder[pos+dice] <= 0) {
            pos = 0;
            res = 0;
            continue;
        }
        pos+= dice + ladder[pos+dice];
        res = pos;
        //cout << "pos: " << pos << endl;
    }
    cout << res;
    return 0;
}