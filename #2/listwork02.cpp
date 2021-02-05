#include <iostream>
#include <list>

using namespace std;

int main(void) {
    int n;
    scanf("%d",&n);
    int data;
    char cm;
    list<int> l;
    list<int>::iterator itr;
    for(int i=0; i<n; i++) {
        scanf(" %c%d", &cm, &data);
        if(cm == 'A') {
            l.push_back(data);
        }else if(cm == 'I') {
            l.push_front(data);
        }else {
            itr = l.begin();
            if(data <= l.size()) {
                advance(itr, data-1);
                l.erase(itr);
            }
        }
    }
    /*
    for(auto i=l.begin(); i!=l.end(); i++) {
        printf("%d\n", *i);
    }
    */
    while(!l.empty()) {
        printf("%d\n", l.front());
        l.pop_front();
    }
    
}