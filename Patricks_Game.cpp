// File Name: Patricks_Game.cpp
// Created By: Stuart Wagner
// Completed On: 01/22/2017
// Description: Patrick wants you to guess his number, if you do, you win.

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    int guess;                          // guess is the variable that will hold the user's input
    srand (time(0));                    // sets up the "random" number generator based on a time seed
    int answer = (1+rand()%10);         // generates a random integer between 1 and 10
    while (guess != answer){            // While the users guess is incorrect
        cout << "Meowsis, guess a number between 1 and 10" "\n";
        cin >> guess;                   // Take a new guess

        if (guess >10 || guess <1){     // Checks that the guess is between 1 and 10
            cout << endl << "MEOWSIS!!! LISTEN TO DIRECTIONS!!!" << endl << endl;
        }

        else if (guess != answer){      // Informs the user if the answer was wrong
            cout << "Meowsis! Patrick Wins Again!" << endl << endl;
        }
    }
    // Congratulates the user
    cout << endl << "Meowsis! You WIN!" << endl << endl;
return 0;
}
