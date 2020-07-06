#include <iostream>
#ifndef USER_H
#define USER_H
using namespace std;


class User
{
    static int user_count;
    string status;

public:
    static int show_user_count();
    string first_name;
    string last_name;

    User(); // default constructor

    User(string f, string l, string s);

    ~User();
    string getStatus();
    void set_status(string status);
    friend void output_status(User user);
    friend ostream &operator<< (ostream &output, User user);
    friend istream &operator>> (istream &input, User &user);
};

#endif