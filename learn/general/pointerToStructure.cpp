#include<bits/stdc++.h>
using namespace std;

typedef struct Rectangle{
    int length;
    int breadth;
} Rectangle;

int main(){
    Rectangle R={10,15};
    Rectangle *p = &R;
    cout << p->length << endl;


    // creating dynamic Structures in Heap memory
    Rectangle* q;
    q = (Rectangle*)new Rectangle();
    cout << q->length << endl;
}