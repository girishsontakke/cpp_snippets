#include<iostream>
using namespace std;
#define X 10 // defining constants by macros

int main() {
    const int x = 5; //symbolic constant
    enum { y = 100}; //enum constant

    auto s = 4; // -std=c++11
    cout << s << endl ;
    return 0;
}