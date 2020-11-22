#pragma once
#include <iomanip>
#include "Menu.h"
using namespace std;

void menu();

char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int player = 1, turn = 0;

void returnToMenu();
void reset();

void board()    //print out game board
{

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

void checkToWin(char arr[])     //check for a winning combination
{
    if ((square[1] == 'X' && square[4] == 'X' && square[7] == 'X') || (square[1] == 'O' && square[4] == 'O' && square[7] == 'O'))
    {
        cout << "Player" << player << " won!" << endl << endl;
        reset();
        returnToMenu();
    }
    if ((square[1] == 'X' && square[2] == 'X' && square[3] == 'X') || (square[1] == 'O' && square[2] == 'O' && square[3] == 'O'))
    {
        cout << "Player" << player << " won!" << endl << endl;
        reset();
        returnToMenu();
    }
    if ((square[2] == 'X' && square[5] == 'X' && square[8] == 'X') || (square[2] == 'O' && square[5] == 'O' && square[8] == 'O'))
    {
        cout << "Player" << player << " won!" << endl << endl;
        reset();
        returnToMenu();
    }
    if ((square[3] == 'X' && square[6] == 'X' && square[9] == 'X') || (square[3] == 'O' && square[6] == 'O' && square[9] == 'O'))
    {
        cout << "Player" << player << " won!" << endl << endl;
        reset();
        returnToMenu();
    }
    if ((square[4] == 'X' && square[5] == 'X' && square[6] == 'X') || (square[4] == 'O' && square[5] == 'O' && square[6] == 'O'))
    {
        cout << "Player" << player << " won!" << endl << endl;
        reset();
        returnToMenu();
    }
    if ((square[7] == 'X' && square[8] == 'X' && square[9] == 'X') || (square[7] == 'O' && square[8] == 'O' && square[9] == 'O'))
    {
        cout << "Player" << player << " won!" << endl << endl;
        reset();
        returnToMenu();
    }
    if ((square[3] == 'X' && square[6] == 'X' && square[9] == 'X') || (square[3] == 'O' && square[6] == 'O' && square[9] == 'O'))
    {
        cout << "Player" << player << " won!" << endl << endl;
        reset();
        returnToMenu();
    }
    if ((square[1] == 'X' && square[5] == 'X' && square[9] == 'X') || (square[1] == 'O' && square[5] == 'O' && square[9] == 'O'))
    {
        cout << "Player" << player << " won!" << endl << endl;
        reset();
        returnToMenu();
    }
    if ((square[3] == 'X' && square[5] == 'X' && square[7] == 'X') || (square[3] == 'O' && square[5] == 'O' && square[7] == 'O'))
    {
        cout << "Player" << player << " won!" << endl << endl;
        reset();
        returnToMenu();
    }
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

            if (number > 9 || number < 1 || square[number] == 'X' || square[number] == 'O')     //invalid input
            {
                cout << "Invalid number. Please enter a valid number." << endl << endl;
                checkNum = false;
            }

            else    //valid input
            {
                checkNum = true;
            }
        }

        //player1's turn
        if (player == 1)    
        {
            square[number] = 'X';   //fills the number on the board with the player's sign
            board();
            checkToWin(square);     //check if there is a winning combination
            player = 2;     //switch to the player
        }

        //player2's turn
        else if (player == 2)    
        {
            square[number] = 'O';   //fills the number on the board with the player's sign
            board();
            checkToWin(square);     //check if there is a winning combination
            player = 1;     //switch to the player
        }
        turn++;
        
    }
    
    if (turn == 9)
    {
        cout << "Nobody won. It's a draw!" << endl << endl;
        reset();
        returnToMenu();
    }
}

void returnToMenu()     //sends the user back to the menu
{
    cout << "Want to go back to the menu? - Y/N" << endl;   //asks the user if they want to go back to the menu

    char answer;
    bool valid = false;

    while (valid == false)
    {
        cin >> answer;

        if (answer == 'Y' || answer == 'y')     //go back to menu
        {
            menu();
            valid = true;
        }

        else if (answer == 'N' || answer == 'n')    //exit the programme
        {
            exit(0);
            valid = true;
        }

        else    //Invalid input
        {
            cout << "You entered an invalid statement. Please try again." << endl;
            valid = false;
        }
    }
}

void reset()    //resets all variables, so the players can play again
{
    square[1] = '1';
    square[2] = '2';
    square[3] = '3';
    square[4] = '4';
    square[5] = '5';
    square[6] = '6';
    square[7] = '7';
    square[8] = '8';
    square[9] = '9';
    turn = 0;
    player = 1;
}