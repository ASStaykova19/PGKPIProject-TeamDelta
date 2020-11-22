#pragma once
#include <iomanip>
#include "Menu.h"
using namespace std;

void info()
{
    //print out our team info

    cout << setw(50) << " ~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << setw(50) << "        TEAM INFO        " << endl;
    cout << setw(50) << " ~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl << endl;

	cout << "Hello we are team Delta!" << endl;
	cout << "We are 9th grade students from PGKPI." << endl << endl;
	cout << "Here are our names and positions in this project:" << endl;
	cout << "      Alexandra Staykova - Scrum Trainer" << endl;
	cout << "      Alexander Klingenberg - Front-end Developer" << endl;
	cout << "      Ivelin Vasilev - C++ Developer" << endl;
	cout << "      Miroslav Ivanov - Front-end Developer" << endl;
	cout << "      Tereza Opanska - Code Checker" << endl << endl;
	cout << "Thank you for playing our game! We hope you enjoy it!" << endl << endl;

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