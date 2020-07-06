#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int var = 5;
    int *ip;
    ip = &var;
    cout << *ip << endl;
    cout << ip << endl;    
    cout << typeid(*ip).name() << endl;   
    
    return 0;
}