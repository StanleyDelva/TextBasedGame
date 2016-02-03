#include <iostream>
#include <string>

using namespace std;

int main()
{
    int UserInput = 0;//User's input
    cout << "            \n                                   Get a Life...                                                   " << endl; // Title
    cout << "     MAIN MENU      \n [1] How to Play  \n [2] Play \n "; // Main Menu I'm thinking of making a function for the main menu.
    cin >> UserInput; // Takes in user's input
    if (UserInput = 1) // If user chooses "How to Play"
    {
        cout << " Press the number in the Brackets[] to choose an option on the main menu or in-game. " << endl; // How To Play
        cout << "                   Do You want to go back to the Main Menu? \n [1] Yes \n [2] No              "; // Asks users whether he wants to go back or not.
        cin >> UserInput;
        if (UserInput = 1) // If user chooses option 1, I want to send them back to the main menu...
    }



    return 0;
}
