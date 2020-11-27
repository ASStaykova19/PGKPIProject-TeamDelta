#pragma once
#include <iomanip>
#include "Menu.h"
using namespace std;

void startingPoint()
{
    //print out game title

    cout << "        __          __        _                                   " << endl;
    cout << "        \\ \\        / /       | |                                 " << endl;
    cout << "         \\ \\  /\\  / /   ___  | |   ___    ___    _ __ ___     ___ " << endl;
    cout << "          \\ \\/  \\/ /   / _ \\ | |  / __|  / _    | '_ ` _ \\   / _ \\" << endl;
    cout << "           \\  /\\  /   |  __/ | | | (__  | (_) | | | | | | | |  __/" << endl;
    cout << "            \\/  \\/     \\___| |_|  \\___|   ___/  |_| |_| |_|  \\___|" << endl;

    cout << setw(45) << "_         " << endl;
    cout << setw(45) << "| |        " << endl;
    cout << setw(49) << "__| |__     ___  " << endl;
    cout << setw(41) << "|__   __| " << setw(1) << "  / _   " << endl;
    cout << setw(40) << "| |_  " << setw(2) << "  | (_) |" << endl;
    cout << setw(49) << "\\___|     ___/ " << endl;

    cout << "  _______   _            _______                    _______                " << endl;
    cout << " |__   __| (_)          |__   __|                  |__   __|               " << endl;
    cout << "    | |     _    ___       | |      __ _    ___       | |      ___     ___ " << endl;
    cout << "    | |    | |  / __|      | |     / _` |  / __|      | |     / _     / _ \\" << endl;
    cout << "    | |    | | | (__       | |    | (_| | | (__       | |    | (_) | |  __/" << endl;
    cout << "    |_|    |_|  \\___|      |_|     \\__,_|  \\___|      |_|      ___/   \\___|" << endl;

    //go to menu
    menu();
}