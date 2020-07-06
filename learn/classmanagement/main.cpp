#include <iostream>
#include <vector>
#include "user.h"
using namespace std;

int main()
{
    User user("Girish", "Sontakke", "red");
    cout << user.first_name << endl;
    cout << user.getStatus() << endl;
    cout << User::show_user_count() << endl;
    user.~User();
    cout << User::show_user_count() << endl;
    return 0;
}