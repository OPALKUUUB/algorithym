#include <iostream>
#include <list>

using namespace std;

void showlist(list <int> g) 
{ 
    list <int> :: iterator it; 
    for(it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
} 

int main(void) {
    int m;
    scanf("%d", &m);
    list<int> station[100001];
    int i, x;
    char cm;
    for(int k=0; k<m; k++) {
        scanf(" %c %d%d",&cm, &x, &i);
        if(cm == 'N') {
            station[i].push_back(x);
        }else {
            station[i].splice(station[i].end(), station[x]);
        }
    }
    for(int i=1; i<=100000; i++) {
        for(auto itr=station[i].begin(); itr!=station[i].end(); itr++) {
            printf("%d\n", *itr);
        }
    }
}