#include <iostream>
using namespace std;

int main() {
    int number = 30;
    int hexa_decimal = 0x30;
    int octa_decimal = 030;
    cout << number << endl ;
    cout << hexa_decimal << endl ;
    cout << octa_decimal << endl ;
    cout << hex << number << endl ; //e = 14
    cout << oct << number << endl ;
    cout << dec << hexa_decimal << endl ;

    return 0;
}