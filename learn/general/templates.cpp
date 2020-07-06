#include <iostream>
// using namespace std;

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 3;
    int b = 4;
    std::cout << "a = "<< a <<"\nb = " << b << std::endl;
    swap(a, b);
    std::cout << "a = "<< a <<"\nb = " << b << std::endl;
    return 0;
}