#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    int base, exponent;
    cout << "Enter a base:";
    cin >> base;
    cout << "Enter a exponent:";
    cin >> exponent;
    double power = pow(base, exponent);
    cout << power;
    return 0;
}
