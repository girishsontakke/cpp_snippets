#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

bool f(int x, int y)
{
    return x > y;
}

void vector_demo()
{
    vector<int> A={ 11,2,3,14};

    cout << A[1] << endl;
    sort(A.begin(), A.end()); //o(NlogN)
    bool present = binary_search(A.begin(), A.end(), 3);

    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
    //2,3,11,14,100,100,100,100,100
    
    vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100); //>=
    //use of auto keyword
    auto it2 = upper_bound(A.begin(), A.end(), 100);// >
    cout << *it << " " << *it2 << endl;
    cout << it2 - it << endl;
    
    //sorting array in descending order
    sort(A.begin(), A.end(), f);
    vector<int>::iterator it3;
    // for (auto it3 = A.begin(); it3 != A.end(); it3++)
    // {
    //     cout << *it3 << " ";
    // }
    for (int &x:A)//by reference to change value
    {
        x++;
        cout << x << " ";
    }
    
    cout << endl; 
    cout << *A.end() << endl;
}

void set_demo(){
    set<int> S;
    S.insert(1);
    S.insert(2);
    S.insert(-1);
    S.insert(-10);
    
    for (int x:S )
        cout << x << " ";
    
    cout << endl;

    // -10,-1,1,2
    auto it = S.find(-1);
    if (it == S.end())
    {
        cout << "not present" << endl;  
    }
    else 
        cout << "present\n";
        cout << *it << endl;
    
    auto it2 = S.lower_bound(-1);
    auto it3 = S.upper_bound(-1);
    
    cout << *it2 << " "<< *it3 << endl;
    
    S.erase(1);
}
void mapDemo(){
    map<int, int> A;
    A[1] = 100;
    A[2] = -1;
    A[3] = 200;
    A[100000012] = 1;


    map<char, int> cnt;
    string x = "Girish Sontakke";

    for (char c:x){
        cnt[c]++;
    }
    cout << cnt['a'] << " " << cnt['z'] << endl;
}
int main() {
    mapDemo();
}