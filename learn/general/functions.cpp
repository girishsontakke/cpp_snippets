#include<iostream>
#include<cmath>
using namespace std;

// prototype or declaration
int add(int a, int b); //-> formal parameters

int main()
{
    int a=1, b=2;

    // function calling
    cout << add(1, 2) << endl; //-> actual parameters
}

// function definition
int add(int a, int b){
    return a + b;
}
