#include <iostream>
#include <iomanip>
using namespace std;

char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int player = 1, count = 0;

void board();
void game();

void menu()
{
    int num;
    cout << setw(4) << endl;
    cout << setw(4) << endl;
    cout << setw(4) << endl;
    cout << setw(4) << endl;

    cout << setw(50) << " ~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << setw(50) << "        MENU        " << endl;
    cout << setw(50) << " ~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << setw(51) << "{                    }" << endl;
    cout << setw(51) << "{      PLAY (1)      }" << endl;
    cout << setw(51) << "{      RULES (2)     }" << endl;
    cout << setw(51) << "{      INFO (3)      }" << endl;
    cout << setw(51) << "{      EXIT (4)      }" << endl;
    cout << setw(51) << "{                    }" << endl;
    cout << setw(4) << endl;

    cout << setw(51) << "    Enter number:    " << endl;

    cin >> num;

    cout << setw(4) << endl;
    cout << setw(4) << endl;
    cout << setw(4) << endl;

    if (num == 1) { game(); }
    if (num == 2) { game(); }
    if (num == 3) { game(); }
    if (num == 4) { game(); }
}

void StartingPoint()
{
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
}
void board()
{
    using namespace std;

    //first row
    cout << setw(50) << "    TIC TAC TOE    " << endl;
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
    int count = 0;
    while (count < 9)
    {
        int number;

        cin >> number;

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
        count++;

        board();
    }
}

int main()
{
    StartingPoint();
    menu();
    board();
}