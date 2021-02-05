#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main(void) {
    int n, m, temp;
    char temp2;
    scanf("%d%d", &n, &m);
    list <int> chain;
    for(int i=0; i<n; i++) {
        scanf("%d", &temp);
        chain.push_back(temp);
    }
    int arr[10], pos=1;
    list <int> :: iterator it;
    it = chain.begin();
    for(int i=0; i<m; i++) {
        scanf(" %c", &temp2);
        if(temp2 == 'F') {
            if(it != chain.end()) {
                it++;
                pos++;
            }
        }else if(temp2 == 'B') {
            if(it != chain.begin()) {
                it--;
                pos--;
            }
        }else if(temp2 == 'C') {
            scanf("%d", &temp);
            chain.insert(it,temp);
            it++;
            pos = temp;
        }
        arr[i] = pos;
    }
    
    for(int i=0; i<m; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}
/*
4 10
3
4
2
5
B
F
C 9
C 4
F
B
F
C 3
F
C 14 
*/