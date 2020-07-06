#include<iostream>
using namespace std;
class Person
{
    public:
    string profession;
    int age;
        Person():profession("unemployed"),age(16){}
    void display()
    {
        cout<<"My profession is :"<<profession<<endl;
        cout<<"My age is :"<<age<<endl;
        walk();
        talk();
    }
    void walk(){cout<<"I can walk."<<endl;}
    void talk(){cout<<"I can talk."<<endl;}
};
//Maths Teacher class is derived from base class person.
class MathsTeacher :public Person
{
    public:
    void teachMaths(){cout<<"I can teach Maths."<<endl;}
};
//Footballer class is derived from base class person.
class Footballer :public Person
{
    public:
    void playfootball(){cout<<"I can play Football."<<endl;}
};
int main()
{
    MathsTeacher teacher;
    teacher.profession="Teacher";
    teacher.age=23;
    teacher.display();
    teacher.teachMaths();
    Footballer footballer;
    footballer.profession="Footballer";
    footballer.age=26;
    footballer.display();
    footballer.playfootball();
    return 0;
}
