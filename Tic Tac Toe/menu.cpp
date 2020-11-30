#include <iostream>
#include <iomanip>
#include "menu.h"
#include "Functions.h"

using namespace std;

void title()
{
    // Print out game title

    cout << "  _______   _            _______                    _______                " << endl;
    cout << " |__   __| (_)          |__   __|                  |__   __|               " << endl;
    cout << "    | |     _    ___       | |      __ _    ___       | |      ___     ___ " << endl;
    cout << "    | |    | |  / __|      | |     / _` |  / __|      | |     / _     / _ \\" << endl;
    cout << "    | |    | | | (__       | |    | (_| | | (__       | |    | (_) | |  __/" << endl;
    cout << "    |_|    |_|  \\___|      |_|     \\__,_|  \\___|      |_|      ___/   \\___|" << endl;
}

void menu()
{
    title();

    // Print out game menu.

    cout << setw(4) << endl;
    cout << setw(4) << endl;
    cout << setw(4) << endl;
    cout << setw(4) << endl;

    cout << setw(50) << " ~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << setw(50) << "        MENU        " << endl;
    cout << setw(50) << " ~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << setw(51) << "{                    }" << endl;
    cout << setw(51) << "{      GAME  (1)     }" << endl;
    cout << setw(51) << "{      RULES (2)     }" << endl;
    cout << setw(51) << "{      INFO  (3)     }" << endl;
    cout << setw(51) << "{      EXIT  (4)     }" << endl;
    cout << setw(51) << "{                    }" << endl;
    cout << setw(4) << endl;

    cout << setw(49) << "    Enter your choice: ";  // Enter operation choice

    int num;
    bool checkNum = false;

    while (checkNum == false)   // Check if the user input is valid
    {
        cin >> num;

        if (num < 1 || num > 4) // Invalid input
        {
            cout << "Invalid number. Please enter a valid number." << endl << endl;
            checkNum = false;
        }

        else
        {
            checkNum = true;
        }
    }

    cout << setw(4) << endl;
    cout << setw(4) << endl;
    cout << setw(4) << endl;

    if (num == 1) {
        system("CLS");  // Clear the console
        game();         // Send user to the game
    }
    if (num == 2) {
        system("CLS");  // Clear the console
        rules();        // Send user to the rules
    }
    if (num == 3) {
        system("CLS");  //Clear the console
        info();         //Send user to info
    }
    if (num == 4) {
        system("CLS");  //Clear the console
        exit(0);        //End the programme
    }
}

void rules()
{
    title();

    // Print out the game rules

    cout << setw(4) << endl;
    cout << setw(4) << endl;
    cout << setw(4) << endl;
    cout << setw(4) << endl;

    cout << setw(50) << " ~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << setw(50) << "        RULES        " << endl;
    cout << setw(50) << " ~~~~~~~~~~~~~~~~~~~~" << endl << endl << endl;

    cout << "The rules of this game are simple:" << endl;
    cout << "	1. You need two players to play this game." << endl;
    cout << "	2. The players take turns when playing." << endl;
    cout << "	3. Players must plays X's or O's on the three by three board." << endl;
    cout << "	4. If a player manages to place their symbol three times in a row (horizontally, vertically or diagonally) that player wins." << endl;
    cout << "	5. Start a new game and have fun!" << endl << endl;

    cout << "Do you want to go back to the menu? - Y/N" << endl;   // Check if user wants to go back to the menu

    char answer;
    bool valid = false;

    while (valid == false)
    {
        cin >> answer;

        if (answer == 'Y' || answer == 'y') // Go back to the menu
        {
            system("CLS");  // Clear the console
            menu();         // Print out game menu
            valid = true;
        }

        else if (answer == 'N' || answer == 'n')    // Exit the programme
        {
            exit(0);
            valid = true;
        }

        else   // Invalid user input
        {
            cout << "You entered an invalid statement. Please try again." << endl;
            valid = false;
        }
    }
}

void info()
{
    title();

    // Print out our team info

    cout << setw(4) << endl;
    cout << setw(4) << endl;
    cout << setw(4) << endl;
    cout << setw(4) << endl;

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

    cout << "Do you want to go back to the menu? - Y/N" << endl;    // Check if user wants to go back to the menu

    char answer;
    bool valid = false;

    while (valid == false)
    {
        cin >> answer;

        if (answer == 'Y' || answer == 'y') // Go back to the menu
        {
            system("CLS");  // Clear the console
            menu();         // Print out menu
            valid = true;
        }

        else if (answer == 'N' || answer == 'n')    // Exit the programme
        {
            exit(0);
            valid = true;
        }

        else    // Invalid user input
        {
            cout << "You entered an invalid statement. Please try again." << endl;
            valid = false;
        }
    }
}