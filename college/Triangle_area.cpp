#include<iostream>
using namespace std;
class Area
{
    int length,breadth;
    public:
    //constructor
    Area():length(5),breadth(2){}
    void Getlength()
    {
        cout<<"Enter length and breadth respectively: "<<endl;
        cin>>length>>breadth;
    }
    int AreaCalculation(){return (length*breadth);}
    void DisplayArea(int area)
    {
        cout<<"Area="<<area;
    }
};
int main()
{
    Area A1,A2;
    int area;
    A1.Getlength();
    area=A1.AreaCalculation();
    A1.DisplayArea(area);
    cout<<"\n Default area when value is not taken from user"<<endl;
    area=A2.AreaCalculation();
    A2.DisplayArea(area);
    return 0;
}