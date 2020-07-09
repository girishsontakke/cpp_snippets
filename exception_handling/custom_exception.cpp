#include<iostream>
#include<exception>
using namespace std;

class Overspeed:public exception{
    int speed;
    public:
        const char *what(){
            return "chech out ur car speed \nyou are in car not in airplane";
        }
        void getspeed(){
            cout << "your car speed is " << speed << endl;
        }
        void setspeed(int speed){
            this->speed = speed;
        }
};

class Car{
    int speed;
    public:
        Car(){
            this->speed = 0;
            cout << "your car speed is" << speed << endl;
        }
        void accelerate(){
            while(true){
                speed += 10;
                cout << "your car speed is " << speed << endl;
                if(speed >= 100){
                    Overspeed s;
                    s.setspeed(speed);
                    throw s;
                }
            }
        }
};


int main(){
    Car car;
    try{
        car.accelerate();
    }
    catch(Overspeed s){
        cout << s.what() << endl;
        s.getspeed();
    }

}