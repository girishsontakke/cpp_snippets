#include <iostream>
#include <string>
using namespace std;

int main() {
    string greeting = "Helo there";
    cout << greeting.size() << endl;
    greeting.append("!");
    greeting.insert(2, "l"); //argument = index, word
    cout << greeting.length() << endl;
    cout << greeting << endl;
    greeting.erase(11, 1); // argument = index, word
    cout << greeting << endl;
    greeting.pop_back();
    cout << greeting << endl;
    greeting.replace(6, 4, "there"); //argument =index , length, word
    cout << greeting << endl;
    greeting.replace(greeting.find("Hello"), 5, "Hi");
    cout << greeting << endl;
    cout << "substring " << greeting.substr(0, 2) << endl ;
    cout << greeting.find_first_of("aeiou") << endl;
    if(greeting.compare("Hi there")== 0) cout << "Equals" << endl ;
    return 0;
}