#include<iostream>
using namespace std;
double power(double base, int exponent){
    double result=1;
    for (int i = 0; i < exponent; i++)
    {
        result = result*base;
    }
    return result;
}
void print_pow(double base, int exponent)
{
    cout << base << " to the power " << exponent << " is " << power(base, exponent) << ".\n";
}

int main() {
    double base;
    int exponent;
    cout << "Enter a base:";
    cin >> base;
    cout << "Enter a exponent:";
    cin >> exponent;
    print_pow(base, exponent);
    return 0;
}
