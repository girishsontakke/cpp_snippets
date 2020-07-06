#include<iostream>
#include<vector>
#include<algorithm>


int main(){
    std::vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(80);
    v.push_back(20);
    v.push_back(15);

    std::sort(v.begin(), v.end());
    std::vector<int>::reverse_iterator it = v.rbegin();

    std::cout<<"reverse traversal\n";
    for(;it!=v.rend(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl ;
    std::cout << "forward traversal\n";
    std::vector<int>::iterator it1 = v.begin();
    for(; it1!=v.end(); it1++){
        std::cout << *it1 << " ";
    }
    std::cout<< std::endl;
} 