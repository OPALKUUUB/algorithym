#include <iostream>
#include <deque>

using namespace std;

int main(void) {
    int m, data;
    scanf("%d", &m);
    char cm[2];
    deque<int> tube;
    for(int i=0; i<m; i++) {
        scanf("%s", cm);
        if(cm[0] == 'l' && cm[1] == 'i') {
            scanf("%d", &data);
            tube.push_front(data);
        }else if(cm[0] == 'r' && cm[1] == 'i') {
            scanf("%d", &data);
            tube.push_back(data);
        }else if(!tube.empty()) {
            if(cm[0] == 'l' && cm[1] == 'r') {
            data =tube.front();
            tube.pop_front();
            tube.push_back(data);
            }else if(cm[0] == 'r' && cm[1] == 'r') {
                data = tube.back();
                tube.pop_back();
                tube.push_front(data);
            }
        }
    }
    for(auto itr=tube.begin(); itr!=tube.end(); itr++) {
        printf("%d\n", *itr);
    }
    return 0;
}
/*
8
ri 1
ri 2
ri 3
li 20
ri 100
lr
ri 1000
rr
*/