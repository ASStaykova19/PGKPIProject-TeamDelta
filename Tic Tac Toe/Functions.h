#pragma once
#include "Function_names.h"
#include <iomanip>
using namespace std;

void title()
{
    //print out game title

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

    //print out game menu.

    int num;
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

    cout << setw(53) << "    Enter your choice:    " << endl;   //enter operation choice

    cin >> num;

    cout << setw(4) << endl;
    cout << setw(4) << endl;
    cout << setw(4) << endl;

    if (num == 1) {
        system("CLS");  //clear the console
        game();     //send user to the game
    }
    if (num == 2) {
        system("CLS");  //clear the console
        rules();   //send user to the rules
    }
    if (num == 3) {
        system("CLS");  //clear the console
        info();     //send user to info
    }
    if (num == 4) {
        system("CLS");  //clear the console
        exit(0);    //end the programme
    }
}

void rules()
{
    title();

    //print out the game rules

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

    cout << "Want to go back to the menu? - Y/N" << endl;   //check if user wants to go back to the menu

    char answer;
    bool valid = false;

    while (valid == false)
    {
        cin >> answer;

        if (answer == 'Y' || answer == 'y')     //go back to the menu
        {
            system("CLS");      //clear the console
            menu();     //print out game menu
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

void info()
{
    title();

    //print out our team info

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

    cout << "Want to go back to the menu? - Y/N" << endl;   //check if user wants to go back to the menu

    char answer;
    bool valid = false;

    while (valid == false)
    {
        cin >> answer;

        if (answer == 'Y' || answer == 'y')     //go back to the menu
        {
            system("CLS");      //clear the console
            menu();     //print out menu
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

void game()
{
    int player = 1;     //player 1 or player 2
    int turn = 0;       //counts the turns
    char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
    title();
    board(square);

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
            system("CLS");
            title();
            board(square);
            checkToWin(square, player);     //check if there is a winning combination
            player = 2;     //switch to the player
        }

        //player2's turn
        else if (player == 2)
        {
            square[number] = 'O';   //fills the number on the board with the player's sign
            system("CLS");      //clear the console
            title();
            board(square);
            checkToWin(square, player);     //check if there is a winning combination
            player = 1;     //switch to the next player
        }
        turn++;
    }

    if (turn == 9)
    {
        cout << "Nobody won. It's a draw!" << endl << endl;
        returnToMenu();     //return to the game menu
    }
}

void board(char square[])    //print out game board
{

    //first row

    cout << setw(4) << endl;
    cout << setw(4) << endl;
    cout << setw(4) << endl;
    cout << setw(4) << endl;

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

void checkToWin(char square[], int player)     //check for a winning combination
{
    if ((square[1] == 'X' && square[4] == 'X' && square[7] == 'X') || (square[1] == 'O' && square[4] == 'O' && square[7] == 'O'))
    {
        cout << "Player" << player << " won!" << endl << endl;
        returnToMenu();     //print out the menu
    }
    else if ((square[1] == 'X' && square[2] == 'X' && square[3] == 'X') || (square[1] == 'O' && square[2] == 'O' && square[3] == 'O'))
    {
        cout << "Player" << player << " won!" << endl << endl;
        returnToMenu();     //print out the menu
    }
    else if ((square[2] == 'X' && square[5] == 'X' && square[8] == 'X') || (square[2] == 'O' && square[5] == 'O' && square[8] == 'O'))
    {
        cout << "Player" << player << " won!" << endl << endl;
        returnToMenu();     //print out the menu
    }
    else if ((square[3] == 'X' && square[6] == 'X' && square[9] == 'X') || (square[3] == 'O' && square[6] == 'O' && square[9] == 'O'))
    {
        cout << "Player" << player << " won!" << endl << endl;
        returnToMenu();     //print out the menu
    }
    else if ((square[4] == 'X' && square[5] == 'X' && square[6] == 'X') || (square[4] == 'O' && square[5] == 'O' && square[6] == 'O'))
    {
        cout << "Player" << player << " won!" << endl << endl;
        returnToMenu();     //print out the menu
    }
    else if ((square[7] == 'X' && square[8] == 'X' && square[9] == 'X') || (square[7] == 'O' && square[8] == 'O' && square[9] == 'O'))
    {
        cout << "Player" << player << " won!" << endl << endl;
        returnToMenu();     //print out the menu
    }
    else if ((square[3] == 'X' && square[6] == 'X' && square[9] == 'X') || (square[3] == 'O' && square[6] == 'O' && square[9] == 'O'))
    {
        cout << "Player" << player << " won!" << endl << endl;
        returnToMenu();     //print out the menu
    }
    else if ((square[1] == 'X' && square[5] == 'X' && square[9] == 'X') || (square[1] == 'O' && square[5] == 'O' && square[9] == 'O'))
    {
        cout << "Player" << player << " won!" << endl << endl;
        returnToMenu();     //print out the menu
    }
    else if ((square[3] == 'X' && square[5] == 'X' && square[7] == 'X') || (square[3] == 'O' && square[5] == 'O' && square[7] == 'O'))
    {
        cout << "Player" << player << " won!" << endl << endl;
        returnToMenu();     //print out the menu
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
            system("CLS");      //clear console
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