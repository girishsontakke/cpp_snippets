#include <iostream>
#include <vector>

using namespace std;

class User
{
    static int user_count;
    string status;

public:
    static int show_user_count()
    {
        return user_count;
    }
    string first_name;
    string last_name;

    User(){ user_count++ ;} // default constructor

    User(string f, string l, string s)
    {
        this->first_name = f;
        this->last_name = l;
        this->status = s;
        user_count++;
    }

    ~User()  // destructor
    {
        // cout << "Destruct" << endl;
        user_count--;
    }
    string getStatus()
    {
        return status;
    }
    void set_status(string status)
    {
        this->status = status;
    }
};
int User::user_count = 0;

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
    cout << User::show_user_count() << endl;
    user.~User();
    cout << User::show_user_count() << endl;
    return 0;
}