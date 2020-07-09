#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b;
    try
    {
        if(b==0){
            throw "divided by zero";
        }

        c = a/b;
        cout << c << endl;
    }
    catch(const char *e) //catch the exception thrown in try block
    {
        cout << "exception occur: " << e << endl;
    }
    
}