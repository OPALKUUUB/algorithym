#include <iostream>
#include <list>

using namespace std;

int main(void) {
    int n;
    list <int> l;
    scanf("%d", &n);
    int data;
    char cm;
    list<int>::iterator itr;
    for(int i=0; i<n; i++) {
        scanf(" %c%d", &cm, &data);
        if(cm == 'I') {
            l.push_front(data);
        }else {
            itr = l.begin();
            if(data <= l.size()) {
                advance(itr,data-1);
                l.erase(itr); 
            }
        }
    }
    for(auto i=l.begin(); i!=l.end(); i++) {
        printf("%d\n", *i);
    }
    return 0;
}
/*
6
I 10
D 5
I 20
I 15
I 30
D 2
*/