#include <iostream>
#include <vector>
#include "user.h"
using namespace std;


    int User::show_user_count()
    {
        return user_count;
    }
    

    User::User(){ user_count++ ;} // default constructor

    User::User(string f, string l, string s)
    {
        this->first_name = f;
        this->last_name = l;
        this->status = s;
        user_count++;
    }

    User::~User()  // destructor
    {
        // cout << "Destruct" << endl;
        user_count--;
    }
    string User::getStatus()
    {
        return status;
    }
    void User::set_status(string status)
    {
        this->status = status;
    }

int User::user_count = 0;

void output_status(User user)
{
    cout << user.status << endl;
}

ostream &operator<< (ostream &output, User user){
    output << "First Name: " << user.first_name << "\nLast Name " << user.last_name << "\nstatus:" << user.status;
    return output;
}

istream &operator>> (istream &input, User &user){
    input >> user.first_name >> user.last_name >> user.status;
    return input;
}

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


