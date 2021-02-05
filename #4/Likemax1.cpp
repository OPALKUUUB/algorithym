#include <iostream>
#include <map>

using namespace std;

map<int, int> like;
map<int, int>::iterator it_max;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int t;
        cin >> t;
        if(like.find(t) == like.end()) {
            like[t] = 0;
        }
        like[t]++;
        if(like.size() == 1) {
            it_max = like.begin();
        }else if(like[t]>=like[it_max->first]) {
            it_max = like.find(t);
        }
        cout << it_max->first << "\n";
    }
    return 0;
}