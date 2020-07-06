#include <iostream>
#include <string>
using namespace std;

int main() {
    string greeting = "Hello";
    string complete_greeting = greeting + " there";
    complete_greeting += " !";
    cout << complete_greeting << endl ;
    cout << complete_greeting.length() << endl ;

    char name[] = "girish"; //c string == array of characters "girish\0"

    return 0;
}