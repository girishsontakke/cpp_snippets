#include <iostream>
#include <vector>

using namespace std;

class User
{
    static int user_count;
    string status="Gold";

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
    friend void output_status(User user);
    friend ostream &operator<< (ostream &output, User user);
    friend istream &operator>> (istream &input, User &user);
};
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


int main()
{
    User user;
    output_status(user);
    cin >> user ;
    cout << user << endl;
    return 0;
}