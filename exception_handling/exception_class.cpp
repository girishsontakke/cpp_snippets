#include<iostream>
#include<exception>
#include<stdexcept>

using namespace std;

int main(){
    int a=10, b=0, c;

    try{
        if(b==0){
            throw runtime_error("divide by zero");
        }
        c = a/b;
        printf("%d\n",c);
    }
    catch(runtime_error &e){
        cout << "exception occured: " <<  e.what() << endl;
    }
}