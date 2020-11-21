#pragma once
#include <iomanip>
#include "Menu.h"
using namespace std;

void menu();

char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int player = 1, turn = 0;

void board()
{
    // print out game board

    //first row
    cout << setw(50) << "    TIC TAC TOE    " << endl;
    cout << setw(57) << "    Player1 - X | Player2 - O    " << endl;
    cout << setw(52) << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << setw(29) << "{" << setw(8) << "}" << setw(8) << "{" << setw(8) << "}" << endl;
    cout << setw(29) << "{" << setw(4) << square[1] << setw(4) << "}" << setw(4) << square[2] << setw(4) << "{" << setw(4) << square[3] << setw(4) << "}" << endl;
    cout << setw(29) << "{" << setw(8) << "}" << setw(8) << "{" << setw(8) << "}" << endl;
    cout << setw(53) << "{~~~~~~~}~~~~~~~{~~~~~~~}" << endl;

    //second row
    cout << setw(29) << "{" << setw(8) << "}" << setw(8) << "{" << setw(8) << "}" << endl;
    cout << setw(29) << "{" << setw(4) << square[4] << setw(4) << "}" << setw(4) << square[5] << setw(4) << "{" << setw(4) << square[6] << setw(4) << "}" << endl;
    cout << setw(29) << "{" << setw(8) << "}" << setw(8) << "{" << setw(8) << "}" << endl;
    cout << setw(53) << "{~~~~~~~}~~~~~~~{~~~~~~~}" << endl;

    //third row
    cout << setw(29) << "{" << setw(8) << "}" << setw(8) << "{" << setw(8) << "}" << endl;
    cout << setw(29) << "{" << setw(4) << square[7] << setw(4) << "}" << setw(4) << square[8] << setw(4) << "{" << setw(4) << square[9] << setw(4) << "}" << endl;
    cout << setw(29) << "{" << setw(8) << "}" << setw(8) << "{" << setw(8) << "}" << endl;
    cout << setw(52) << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

void game()
{
    board();
    int turn = 0;
    while (turn < 9)
    {
        int number;     //player's move
        bool checkNum = false;

        cout << "Player" << player << "'s turn" << endl << endl;

        while (checkNum == false)   //check if the user input is valid
        {
            cin >> number;

            if (number > 9 || number < 1 || square[number] == 'X' || square[number] == 'O')     //tell the user they gave invalid input
            {
                cout << "Invalid number. Please enter a valid number." << endl;
                checkNum = false;
            }

            else    //the user gave valid input
            {
                checkNum = true;
            }
        }

        if (player == 1)
        {
            square[number] = 'X';
            player = 2;
        }

        else if (player == 2)
        {
            square[number] = 'O';
            player = 1;
        }
        turn++;

        board();
    }
    
    if (turn == 9)
    {
        cout << "Nobody won. It's a draw!" << endl;
        cout << "Want to go back to the menu? - Y/N" << endl;

        char answer;
        bool valid = false;

       while (valid == false)
       {
            cin >> answer;

            if (answer == 'Y' || answer == 'y')
            {
                menu();
                valid = true;
            }

            else if (answer == 'N' || answer == 'n')
            {
                exit(0);
                valid = true;
            }

            else
            {
                cout << "You entered an invalid statement. Please try again." << endl;
                valid = false;
            }
        }
    }
}
