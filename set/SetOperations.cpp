#include <bits/stdc++.h>

using namespace std;

set<int> s;

int main(void) {
    s.insert(10);
    s.insert(20);
    s.insert(100);
    s.insert(1000);
    s.insert(10000);
    while(1) {
        int x = 10;
        cin >> x;
        //binary search
        // function find
        if(s.find(x) != s.end()) {
            cout << "find => " << *(s.find(x)) << endl;
        }else {
            cout << "find => no" << endl;
        }

        // function upper-bound
        if(s.upper_bound(x) != s.end()) {
            cout << "up => " << *(s.upper_bound(x)) << endl;
        }else {
            cout << "up => no" << endl;
        } 

        // function lower-bound
        if(s.lower_bound(x) != s.end()) {
            cout << "low => " << *(s.lower_bound(x)) << endl;
        }else {
            cout << " low => no" << endl;
        }
    }
}