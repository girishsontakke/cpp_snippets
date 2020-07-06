#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define elif else if
#define fp(i, a, b) for(int i=a; i<b; i++)
#define fpe(i, a, b) for(int i=a; i<=b; i++)
#define fn(i, a, b) for(int i=a; i>b; i--)
#define fne(i, a, b) for(int i=a; i>=b; i--)
#define sq(a) (a)*(a)

void RemoveErase(){
    cout << "we use remove erase method for sequence container\n";
    vi v;
    v.push_back(10),
    v.push_back(20),
    v.push_back(30),
    v.push_back(40),
    // v.push_back(40), 
    v.push_back(50),
    v.push_back(60),
    cout << "size of vector before remove =>" << v.size() << endl;
    vector<int>::iterator it=remove(v.begin(), v.end(), 40);

    cout << "size of vector after remove =>"<< v.size() << endl;
    v.erase(it, v.end());

    cout << "size of vector after erase =>"<< v.size() << endl;
    for(auto &val:v){
        cout <<"vector val=>" << val << "\n";
    }
}

void replace(){
    string str="23,24,25";
    replace(str.begin(), str.end(), ',', ' ');
    cout << str << endl;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    RemoveErase();
    
    return 0;
}