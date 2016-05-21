#include <iostream>
using namespace std;

void How2play()
{
    cout << "\n         HELP                          " << endl;
    cout << " Type the number shown in the Brackets[] to choose an option on the main menu or in-game. " << endl; // How To Play
    cout << "                   Press enter to go back to Main Menu              "; // Asks user whether he wants to go back or not.
    cin.ignore();
    cin.get();
    cout << "\033[2J\033[1;1H";
}
