#include <iostream>
#include <string>

using namespace std;

int MainMenu()
{
  cout << "            \n                                   Get a Life...                                                   " << endl; // Title
  cout << "     MAIN MENU      \n [1] How to Play  \n [2] Play \n "; // Main Menu I'm thinking of making a function for the main menu.
  return 0;
}

int HowtoPlay()
{
    cout << " Press the number in the Brackets[] to choose an option on the main menu or in-game. " << endl; // How To Play
    cout << "                   Do You want to go back to the Main Menu? \n [1] Go back to Main Menu              "; // Asks users whether he wants to go back or not.
}

int main()
{
    MainMenu();
    int UserInput = 0;
    cin >> UserInput; // Takes in user input
    if (UserInput = 1) // If user chooses "How to Play"
    {
       HowtoPlay();
        cin >> UserInput;
        if (UserInput = 1)  // If user chooses option 1 (How to play)
        {
            MainMenu();
        }
    }
    else if(UserInput = 2) // If user chooses option 2 (Play)
        {
            cout << "This game is a game of choices..." << endl;
        }


    return 0;
}
