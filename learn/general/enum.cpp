#include <iostream>
using namespace std;

int main() {
    enum class season{summer, spring, fall, winter};
    season now = season::winter;
    switch (now)
    {
    case season::summer:
        /* code */
        break;
    case season::spring:
        /* code */
        break;
    case season::fall:
        /* code */
        break;
    case season::winter:
        cout << "stay warm " << endl;
        break; 
    
    }
    return 0;
}