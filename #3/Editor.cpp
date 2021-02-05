#include <bits/stdc++.h>

using namespace std;

list<string> l;
list<string>::iterator it = l.begin();
int n;
char cm[5];

void read_input() {
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%s", cm);
        if(cm[0] == 'i') {
            char temp[15];
            scanf("%s", temp);
            it = l.insert(it, temp);
            it++;
        }else if(cm[0] == 'l') {
            if(it != l.begin()) {
                it--;
            }
        }else if(cm[0] == 'r') {
            if(it != l.end()) {
                it++;
            }
        }else if(cm[0] == 'b') {
            if(it != l.begin()) {
                auto it2 = it;
                it2--;
                l.erase(it2);
            }
        }else if(cm[0] == 'd') {
            if(it != l.end()) {
                auto it2 = it;
                it2++;
                l.erase(it);
                it = it2;
            }
        }
    }
}

int main(void) {
    read_input();
    for(auto i=l.begin(); i!=l.end(); i++) {
        cout << *i << " ";
    }
    return 0;
}
