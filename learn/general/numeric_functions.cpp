#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << sqrt(25) << endl ;
    cout << remainder(10, 3.25) << endl ;
    cout << fmod(10, 3.25) << endl ;
    cout << fmax(10, 2) << endl ;
    cout << fmin(10, 2) << endl ;
    cout << "ceil " << ceil(2.3) << endl ;  
    cout << "floor " << floor(2.3) << endl ;  
    cout << "trunc " << trunc(2.3) << endl ;
    cout << "ceil " << ceil(-2.3) << endl ; 
    cout << "floor " << floor(-2.3) << endl ;  
    cout << "trunc " << trunc(-2.3) << endl ; 
    cout << "round" << round(-1.59) << endl ; 
    cout << nearbyint(2.43) << endl ;
    return 0;
}