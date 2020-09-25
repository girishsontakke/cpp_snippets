#include <bits/stdc++.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

typedef struct Complex{
    float real;
    float img;
} complex;


int main(){
    struct Rectangle R={10,5};
    R.breadth = 4;
    printf("Area of Rectangle is %d\n", R.length * R.breadth);
    cout << sizeof(int) << endl;
    cout << sizeof(short int) << endl;
    cout << sizeof(Rectangle) << endl;
}