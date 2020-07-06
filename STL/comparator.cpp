#include<bits/stdc++.h>
using namespace std;

#define mp make_pair

template <typename type>
struct mycomp{
    bool operator()(const type &first, const type &second) const{
        return first > second;
    }
};

void comparison(){
    map<int, int, greater<int> > m; //default less<int>
    m.insert(mp(1, 10)), m.insert(mp(7,20)), m.insert(mp(2, 30));

    // for(auto &val: m){
    //     cout << val.first << "---" << val.second << "\n";
    // }

    // set<int, greater<int>> s;
    set<int, mycomp<int>> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(15);
    s.insert(25);
    s.insert(10);

    for(auto &setval: s){
        cout<< setval << " ";
    }
    cout<< endl;
}

int main(){
    // set<pair<int, int>, greater<pair<int, int>> > myset;
    set<pair<int, int>, mycomp<pair<int, int>> > myset;
    myset.insert(mp(1, 10)), myset.insert(mp(3, 30)), myset.insert(mp(2, 20));
    for(auto &elem: myset){
        cout << elem.first << "---" << elem.second << " ";
    }
    cout << endl;
}