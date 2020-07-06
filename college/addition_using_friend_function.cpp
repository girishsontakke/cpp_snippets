#include <iostream>
using namespace std;
class A;
class B
{
    int numB;

public:
    B() : numB(1) {}
    friend int add(A, B);
}; 
class A
{
    int numA;

public:
 
    A() : numA(12) {}
    friend int add(A, B);
};

int add(A objectA, B objectB)
{
    return (objectA.numA + objectB.numB);
}
int main()
{
    A objectA;
    B objectB;
    cout << "Sum: " << add(objectA, objectB);
    return 0;
}

