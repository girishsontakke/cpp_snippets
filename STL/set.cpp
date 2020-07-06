#include<iostream>
#include<set>

using namespace std;

int main(){
    // set is Associative container like map
    // set contains only one object as key as well as value

    cout << "set\n";
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(15);
    s.insert(25);
    s.insert(10);

    for(auto &setval: s){
        cout<< setval << " ";
    }

    cout << "\nmultiset\n";
    multiset<int> ms;
    ms.insert(10);
    ms.insert(20);
    ms.insert(30);
    ms.insert(15);
    ms.insert(25);
    ms.insert(10);

    for(auto &setval: ms){
        cout<< setval << " ";
    }
    cout << endl;
}