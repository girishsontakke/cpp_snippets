#include<iostream>
#include<map>
#include<algorithm>
#include<unordered_map>

using namespace std;
void mp_demo(){
    cout << "map" <<endl;
    map<int, int> mp;

    mp[1]=10; //[] is known as subscript operator
    mp[2]=20;
    mp[6]=30;
    mp[4]=5;
    mp.insert(make_pair(5, 25));    
    
    //map automatically sort acc. to |key|
    //iterate
    map<int, int>::iterator it=mp.begin();
    for(;it!=mp.end();it++){
        cout<< it->first << "----" << it->second <<endl;
    }
}

void mmp_demo(){
    cout << "multimap"<< endl;
    // multimap do not support subscript operator

    multimap<int, int> mmp;
    mmp.insert(make_pair(4, 400));
    mmp.insert(make_pair(10, 700));
    mmp.insert(make_pair(3, 300));
    mmp.insert(make_pair(10, 900));
    mmp.insert(make_pair(10, 1000));
    mmp.insert(make_pair(3, 400));

    multimap<int, int>::iterator it1=mmp.begin();
    for(;it1!=mmp.end(); it1++){
        cout<< it1->first<<"---"<<it1->second << "\n";
    }

}

void ump_demo(){
    cout<<"unordered map"<<endl;
    unordered_map<int, int>ump;
    ump[1] = 10;
    ump.insert(make_pair(1, 20));
    ump.insert(make_pair(4, 40));
    ump.insert(make_pair(2, 10));
    ump.insert(make_pair(4, 20));
    ump[4]=500;

    auto it2 = ump.begin();
    for(; it2!=ump.end(); it2++){
        cout << it2->first <<"---"<< it2->second << endl;
    }
}
void ummp_demo(){
    cout<<"unordered map"<<endl;

    //unordered_mulitmap do not support subscript operator

    unordered_multimap<int, int>ummp;
    ummp.insert(make_pair(1, 20));
    ummp.insert(make_pair(4, 40));
    ummp.insert(make_pair(2, 10));
    ummp.insert(make_pair(4, 20));

    auto it2 = ummp.begin();
    for(; it2!=ummp.end(); it2++){
        cout << it2->first <<"---"<< it2->second << endl;
    }
}
int main(){
    pair<int, int> p = make_pair(10, 20);
    // cout << p.first<<"-"<<p.second<<endl;
    mp_demo();
}


