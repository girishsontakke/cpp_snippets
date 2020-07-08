#include<iostream>
#include <stack>
#include <queue>

using namespace std;

void stack_demo(){

    cout << "stack\n";
    stack<int, deque<int>> cstk; //last in first out
    cstk.push(100);
    cstk.push(200);
    cstk.push(200);
    cstk.push(500);

    while(!cstk.empty()){
        cout << cstk.top() << endl;
        cstk.pop();
        cout << cstk.size() << endl;
    }
}

void queue_demo(){
    cout << "queue" << endl; //first in first out
    queue<int> cqu;
    cqu.push(100);
    cqu.push(200);
    cqu.push(200);
    cqu.push(500);
    
    while(!cqu.empty()){
        cout << cqu.front()<<endl;
        cqu.pop();
        cout<<cqu.size() << endl;
    }
}

void priorityqueue_demo(){
    cout << "priority queue" << endl; //first in first out
    priority_queue<int, vector<int>, std::greater<int>> cqu;
    cqu.push(500);
    cqu.push(200);
    cqu.push(100);
    cqu.push(300);
    
    while(!cqu.empty()){
        cout << cqu.top()<<endl;
        cqu.pop();
        cout<<cqu.size() << endl;
    }

}

int main(){
    priorityqueue_demo();    
}