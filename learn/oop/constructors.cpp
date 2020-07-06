#include <iostream>
#include <vector>

using namespace std;

class User
{
    string status;

public:
    string first_name;
    string last_name;
    User(){} // default constructor
    User(string f, string l, string s) //custom constructor
    {
        this->first_name = f;
        this->last_name = l;
        this->status = s;
    }
    ~User()
    {
        cout << "Destruct" << endl;
       
    }
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
    User user("Girish", "Sontakke", "red");
    cout << user.first_name << endl;
    cout << user.getStatus() << endl;
    return 0;
}