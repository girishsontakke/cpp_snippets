#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l;
    l.push_back(100);
    l.push_back(200);
    l.push_back(500);
    l.push_back(150);

    auto it = l.begin();
    for(; it!=l.end(); it++){
        cout << *it <<endl;
    }
}