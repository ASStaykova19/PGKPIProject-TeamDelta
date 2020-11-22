#pragma once
#include <iomanip>
#include "Menu.h"
using namespace std;

void rules()
{
    //print out the game rules

    cout << setw(50) << " ~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << setw(50) << "        RULES        " << endl;
    cout << setw(50) << " ~~~~~~~~~~~~~~~~~~~~" << endl << endl << endl;

	cout << "The rules of this game are simple:" << endl;
	cout << "	1. You need two players to play this game." << endl;
	cout << "	2. The players take turns when playing." << endl;
	cout << "	3. Players must plays X's or O's on the three by three board." << endl;
	cout << "	4. If a player manages to place their symbol three times in a row (horizontally, vertically or diagonally) that player wins." << endl;
	cout << "	5. Start a new game and have fun!" << endl << endl;

    cout << "Want to go back to the menu? - Y/N" << endl;   //check if user wants to go back to the menu

    char answer;
    bool valid = false;

    while (valid == false)
    {
        cin >> answer;

        if (answer == 'Y' || answer == 'y')     //go back to the menu
        {
            menu();
            valid = true;
        }

        else if (answer == 'N' || answer == 'n')    //exit the programme
        {
            exit(0);
            valid = true;
        }

        else    //invalid user input
        {
            cout << "You entered an invalid statement. Please try again." << endl;
            valid = false;
        }
    }
}