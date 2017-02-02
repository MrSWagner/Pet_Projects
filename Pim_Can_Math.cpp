// File Name: Pim_Can_Math.cpp
// Created By: Stuart Wagner
// Description: Users input a number between 1 and 10 to have a puppy repeat back (incorrectly) that number. He gets mad if you ask the same number many times.



#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// Replaces a positive integer between 1 and 9 with a color or noun, and any larger integer with a random integer
// Input is the positive integer to be replaced
void PimMath (int Input){
    if (Input < 1) {
            cout << "NO!!!!!";
    }

    switch (Input){
        case 1:
            cout << "RED!!!";
            break;
        case 2:
            cout << "ORANGE!!!";
            break;
        case 3:
            cout << "HOUSE!!!";
            break;
        case 4:
            cout << "HORSE!!!";
            break;
        case 5:
            cout << "YELLOW!!!";
            break;
        case 6:
            cout << "GREEN!!!";
            break;
        case 7:
            cout << "BLUE!!!";
            break;
        case 8:
            cout << "PORKUPINE!!!";
            break;
        case 9:
            cout << "PURPLE!!!";
            break;
        default:
            cout << (1 + rand()%100);
    }
}

// Calculates the number of times an answer has been repeated and responds with a corresponding response
// Calls the function PimMath() to determine part of the response
// i is the index location of the current user input
// answers is the array of answers the user has given thus far
void Anger(const int i, const int answers[]){
    int angerLevel = 0;
    for (int j(0); j < 10; j++){
        if (answers[j] == 0){break;}
        else if (answers[i] == answers[j]){
            angerLevel++;
        }
    }
    switch (angerLevel){
        
        // Current answer has been repeated once
    case 2:
        cout << "You Already Asked That! The Answer Is ";
        PimMath(answers[i]);
        cout << endl << "Try Again!";
        break;
        
        // Current answer has been repeated twice
    case 3:
        cout << "You're really dumb..... Obviously the answer hasn't changed.................." << endl;
        cout << "But because I am a gracious Pim. The answer is ";
        PimMath(answers[i]);
        cout << endl << endl;
        break;
        
        // Current answer has been repeated three times
    case 4:
        cout << "YOU THINK THIS IS A GAME?!?!?!?!" << endl << endl << endl;
        cout << "DO YOU?!?!" << endl << endl;
        cout << "For the last" << endl;
        cout << "FREAKING" << endl;
        cout << "TIME" << endl;
        cout << "YOUR. ANSWER. IS. ";
        PimMath(answers[i]);
        cout << "!!!!!!" << endl << endl << endl << endl;
        break;
        
        // Current answer has been repeated four times
    case 5:
        cout << "I" << endl << "sMeLl" << endl << "ToAsT" << endl << endl << "aNd ThAt ToAsT?" << endl;
        cout << "tHaT tOaSt Is So FrEaKiNg ";
        PimMath(answers[i]);
        cout << " THAT I'M LEAVING!!!!";
        exit(12345);
        
        // Current answer is unique in the array of answers
    default:
        cout << endl << "The number you pressed is ";
        PimMath(answers[i]);
        cout << endl << endl << "I'm good at this :-P" << endl;
        cout << "Let's play some more!" << endl << endl;
        break;
    }
return;
}

int main(){
    // answers will hold all of the user's input
    int answers[10] = {};

    // allows for a maximum of 10 user inputs
    // Uses function Anger() to determine the response
    for(int i(0); i < 10; i++){
    cout << "Pim Commands You Press A NUMBER!!!" << endl;
    cin >> answers[i];
    Anger(i, answers);
    cout << endl << endl << endl;
    }

return 0;
}
