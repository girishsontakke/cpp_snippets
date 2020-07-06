#include<iostream>
using namespace std;
class Person
{
    public:
    string Profession;
    int age;
    Person():Profession("unemployed"),age(16){}
    void display()
    {
        cout <<"My profession is:"<<Profession<<endl;
        cout<<"My age is:"<<age<<endl;
        walk();
        talk();
    }
    void walk(){cout<<"I can walk"<<endl;}
    void talk(){cout<<"I can talk"<<endl;}

};
class MathsTeacher:public Person
{public:
    void teachMaths(){cout <<"I can teach Maths."<<endl;}
    };
    class Footballer:public Person
    {
        public:
        void playfootball(){cout <<"I can play football."<<endl;}
    };
    int main()
    {
        MathsTeacher teacher;
        teacher.Profession="Teacher";
        teacher.age=23;
        teacher.display();
        teacher.teachMaths();
        Footballer footballer;
        footballer.Profession="Footballer";
        footballer.age=19;
        footballer.display();
        footballer.playfootball();
        Person P;
        P.display();
        return 0;
    }