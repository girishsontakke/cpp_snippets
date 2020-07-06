#include <iostream>
#include <iomanip>
#include <climits>
#include <float.h>
using namespace std;

int main()
{   
    short a; //16 bit
    int b; // 16-32 bit
    long c; // 32-64 bit
    long long d; // 64 bit
    cout << SHRT_MAX << endl;
    cout << INT_MAX << endl;
    cout << LONG_MAX << endl;
    cout << USHRT_MAX << endl;
    char x = 'A' ; //8 bit //max value 127
    cout << (int) x << "\n"; // \n is escape character
    char y = 129; // find on ascii
    cout << y << endl;
    bool found = true;
    cout << found << endl;
    cout << boolalpha <<found << endl;
    cout << found << endl;
    
    //floating point numbers
    float p;
    double q;
    long double r; 
    cout << DBL_DIG << endl;
    cout << FLT_DIG << endl ;
    cout << LDBL_DIG << endl ;

    return 0;
}