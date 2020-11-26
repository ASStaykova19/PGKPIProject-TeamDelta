#pragma once
#include <iomanip>
#include "Game.h"
#include "Info.h"
#include "Rules.h"
#include "Title.h"
using namespace std;

void menu()
{
    title();

    //print out game menu

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

    cout << setw(53) << "    Enter your choice:    " << endl;   //enter operation of choice

    cin >> num;

    cout << setw(4) << endl;
    cout << setw(4) << endl;
    cout << setw(4) << endl;

    if (num == 1) {
        system("CLS");  //clear console
        game();     //send user to the game
    }
    if (num == 2) {
        system("CLS");  //clear console
        rules();   //send user to the rules
    }
    if (num == 3) {
        system("CLS");  //clear console
        info();     //send user to info
    }
    if (num == 4) {
        system("CLS");  //clear console
        exit(0);    //end the program
    }
}