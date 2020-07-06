#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Position
{
    int z;
public:
    int x = 10;
    int y = 20;
    Position operator+(Position pos)
    {
        Position new_pos;
        new_pos.x = x + pos.x;
        new_pos.y = y + pos.y;
        return new_pos;
    }
    bool operator==(Position pos)
    {
        if (x == pos.x &&y == pos.y)
        {
            return true;
        }
        return false;
    }
};

ostream &operator<< (ostream &output, const Position pos){
    output << "x = " << pos.x << "\ny = " << pos.y << endl;
    return output;
}

istream &operator>> (istream &input, Position &pos){
    input >> pos.x >> pos.y;
    return input;
}

int main()
{
    Position pos1, pos2, pos4;
    Position pos3 = pos1 + pos2;
    cout << pos3.x << "\t" << pos3.y << endl;
    cout << boolalpha << (pos1 == pos2) << endl;
    cout << pos2 << endl;
    cout << "Enter position:";
    cin >> pos4 ;
    cout << pos4 << endl;
    return 0;
}