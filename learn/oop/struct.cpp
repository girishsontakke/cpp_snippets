#include <iostream>
using namespace std;

struct User
{
    string first_name;
    string last_name;
    string SayStatus()
    {
        return status;
    }
    private:
        string status = "good";
};


int main() {
    User user;
    user.first_name = "Girish";
    user.last_name = "Sontakke";
    cout << user.first_name << endl;
    cout << user.SayStatus() << endl;
    return 0;
}
