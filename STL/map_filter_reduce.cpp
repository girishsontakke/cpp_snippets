#include <iostream>
#include <forward_list>
#include <algorithm>
#include <numeric>
#include <vector>   

using namespace std;

//functional programming using map(), Filter() & Reduce()

int main(){
    vector<int> v{1,2,3,4,5,6,7};
    vector<int> vout(v.size());

    // ########   map    #########

    // transform(v.begin(), v.end(), back_inserter(vout), [](int &value){return 3*value;}); // back_inserter calls push_back internally but it works only with vector and do not work with d.s. not having push_back function;


    transform(v.begin(), v.end(), vout.begin(), [](int &value){return 3*value;});

    cout << "map" << endl;
    for (auto &val: vout){
        cout << val << " ";
    }
    cout << endl;

    cout << "filter" << endl;
    // #########      filter   ##########//

    vector<int>::iterator endfilter = remove_if(vout.begin(), vout.end(), [](int &value){
        return (value%2==0)? true: false;
    });

    for (auto itr=vout.begin(); itr!=endfilter; itr++ ){
        cout << *itr << " ";
    }
    cout << endl;

    //#######    Reduce      #########//

    int finalval = accumulate(vout.begin(), endfilter, 0, [](int first, int second){return first + second; });

    cout << "Final value: " << finalval << endl;
}