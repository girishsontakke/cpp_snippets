#include <bits/stdc++.h>
using namespace std;

void multiple_catch_demo(){
    int i;
    cin >> i;
    try{
        if(i==0){
            throw 0;
        }
        else if (i == 1)
        {
            throw "can-not enter 1";
        }
        throw runtime_error("runtime error");        
    }
    catch(const char *err){
        cout << err << endl;
    }
    catch(int err){
        cout << "can-not enter "<< err << endl;
    }
    catch(...){
        cout << "some exception occur" <<endl;
    }
}

int main(){
    

}