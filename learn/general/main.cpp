#include <iostream>
// using namespace std; //using directive
// using std::cout; //using declaration

int main()
{
    std::cout << "hello World" << std::endl;
    int slices, j; //variable declaration
    slices = 5; //variable initialization(assignment) //variable type=literal
    int i = 5 + 1; //expression variable
    std::cout<<slices << '\n';
    std::cout << i << '\n';
    std::cin >> j;
    std::cout << j << "\n";
    return 0;
}