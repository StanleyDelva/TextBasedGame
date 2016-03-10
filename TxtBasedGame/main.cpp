#include <iostream>
#include <string>
#include <fstream>
#include "MainMenu.h"
#include "Playing.h"
#include "HowtoPlay.h"
enum class GameStates {MainMenu, Exit, Playing, HowtoPlay };

using namespace std;

int main()
{
    GameStates state = GameStates::MainMenu; //State starts as main menu
   while (state != GameStates::Exit)
   {
     switch (state)
     {
     case GameStates::MainMenu:
        processMainMenu();
        break;

     case GameStates::Playing:
        processPlaying();

     case GameStates::HowtoPlay:
        How2play();
        break;
        }
   }
   return 0;
}





