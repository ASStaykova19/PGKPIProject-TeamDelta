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

    cout << "===================" << endl;
    cout << setw(15) << "TIC TAC TOE" << endl;
    cout << "===================" << endl;

    cout << "Menu" << endl << endl;

    cout << "PLAY (1)" << endl;
    cout << "RULES (2)" << endl;
    cout << "INFO (3)" << endl;
    cout << "EXIT (4)" << endl;

    cout << "Enter number" << endl;

    cin >> num;

    if (num == 1) { game(); }
    if (num == 2) { game(); }
    if (num == 3) { game(); }
    if (num == 4) { game(); }
}

void StartingPoint()
{
    cout << " __          __           _                                   " << endl;
    cout << " \\ \\        / /          | |                                 " << endl;
    cout << "  \\ \\  /\\  / /      ___  | |   ___    ___    _ __ ___     ___ " << endl;
    cout << "   \\ \\/  \\/ /      / _ \\ | |  / __|  / _ \\  | '_ ` _ \\   / _ \\" << endl;
    cout << "    \\  /\\  /      |  __/ | | | (__  | (_) | | | | | | | |  __/" << endl;
    cout << "     \\/  \\/        \\___| |_|  \\___|  \\___/  |_| |_| |_|  \\___|" << endl;

    cout << setw(40) << "  _______         " << endl;
    cout << setw(40) << " |__   __|        " << endl;
    cout << setw(40) << "    | |      ___  " << endl;
    cout << setw(40) << "    | |     / _   " << endl;
    cout << setw(40) << "    | |    | (_) |" << endl;
    cout << setw(40) << "    |_|      ___/ " << endl;

    cout << "  _______   _            _______                    _______                " << endl;
    cout << " |__   __| (_)          |__   __|                  |__   __|               " << endl;
    cout << "    | |     _    ___       | |      __ _    ___       | |      ___     ___ " << endl;
    cout << "    | |    | |  / __|      | |     / _` |  / __|      | |     / _ \\   / _ \\" << endl;
    cout << "    | |    | | | (__       | |    | (_| | | (__       | |    | (_) | |  __/" << endl;
    cout << "    |_|    |_|  \\___|     |_|     \\__,_|  \\___|    |_|     \\___/   \\___|" << endl;
}
void board()
{
    using namespace std;

    //first row
    cout << setw(38) << "{~~~~~~~~~~~~~~~~~}" << endl;
    cout << setw(20) << "{" << setw(6) << "}" << setw(6) << "{" << setw(6) << "}" << endl;
    cout << setw(20) << "{" << setw(3) << square[1] << setw(3) << "}" << setw(3) << square[2] << setw(3) << "{" << setw(3) << square[3] << setw(3) << "}" << endl;
    cout << setw(38) << "{~~~~~}~~~~~{~~~~~}" << endl;

    //second row
    cout << setw(20) << "{" << setw(6) << "}" << setw(6) << "{" << setw(6) << "}" << endl;
    cout << setw(20) << "{" << setw(3) << square[1] << setw(3) << "}" << setw(3) << square[2] << setw(3) << "{" << setw(3) << square[3] << setw(3) << "}" << endl;
    cout << setw(38) << "{~~~~~}~~~~~{~~~~~}" << endl;

    //third row
    cout << setw(20) << "{" << setw(6) << "}" << setw(6) << "{" << setw(6) << "}" << endl;
    cout << setw(20) << "{" << setw(3) << square[1] << setw(3) << "}" << setw(3) << square[2] << setw(3) << "{" << setw(3) << square[3] << setw(3) << "}" << endl;
    cout << setw(38) << "{~~~~~}~~~~~{~~~~~}" << endl;
}


void game()
{
    board();

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
}