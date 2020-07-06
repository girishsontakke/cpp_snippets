#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;

void print_vector(vector<int> vector)
{
    for (int i = 0; i < vector.size(); i++)
    {
        cout << vector[i] << "\t";
    }
    cout << "\n";
}

void play_game(){
    int random = rand() % 251;
    vector<int> guesses;
    cout << "Guess the number:" << endl;
    while (true)
    {
        int guess;
        cin >> guess ;

        guesses.push_back(guess);

        
        if(guess == random)
        {
            cout << "You win!" << endl;
            break;
        }
        else if (guess < random)
        {
            cout << "Too low" << endl;
        }
        else
        {
            cout << "Too high" << endl;
        }
        
    }
    print_vector(guesses);
}

int main() {
    srand(time(NULL));
    int choice;
    do
    {
        cout << "0. Quit the game. \n1. Play the game" << endl;
        cin >> choice ;

        switch (choice)
        {
        case 0:
            cout << "Thanks for nothing" << endl;
            return 0;
        
        case 1:
            play_game();
            break;
        }

    } while (choice != 0);
    
    
    return 0;
}