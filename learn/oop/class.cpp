#include <iostream>
#include <vector>

using namespace std;

class User
{
    string status = "good";

public:
    string first_name;
    string last_name;
    string getStatus()
    {
        return status;
    }
};

int create_user(vector<User> &users, User user)
{
    for (int i = 0; i < users.size(); i++)
    {
        if (users[i].first_name == user.first_name && users[i].last_name == user.last_name)
        {
            return i;
        }
    }
    users.push_back(user);
    return users.size() - 1;
}

int main()
{
    vector<User> users;
    User user1, user2;

    user1.first_name = "Girish";
    user1.last_name = "Sontakke";

    user2.first_name = "Ajay";
    user2.last_name = "shukla";

    users.push_back(user1);
    users.push_back(user2);

    User user;
    user.first_name = "Mahendra";
    user.last_name = "Sontakke";

    cout << create_user(users, user) << endl;

    cout << "First Name: " << user1.first_name << endl;
    cout << "Status: " << user1.getStatus() << endl;
    cout << users.size() << endl;

    return 0;
}