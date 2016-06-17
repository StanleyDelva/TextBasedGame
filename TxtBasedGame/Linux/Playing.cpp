#include <iostream>
#include <string>
#include <limits>
using namespace std;

void processPlaying()
{   
    string Name; 
    int catChoose;
    cout << "What is your name? " << endl;
    cin >> Name;
    cout << "What what type of questions  do you want to answer, " << Name << "?"
    << "\n [1] Trivial"
    << "\n [2] Weird"
    << "\n [3] Personal"
    << "\n [4] Misc." << endl;
    cin >> catChoose;

    switch(catChoose)
    {
    case 1:
        cout << "OK, you're answering Trivial questions now..." << endl;
        break;
    case 2:
        cout << "OK, you're answering Weird questions now..." << endl;
        void WeirdQs();
        WeirdQs();
        break;
    case 3:
        cout << "OK, you're answering Personal questions now..." << endl;
        break;
    case 4:
        cout << "OK, you're answering Miscellaneous questions now..." << endl;
        break;
    }

cin.ignore();
cin.get();
}

void WeirdQs()
{
    
    cout << "Question 1: Do you like chicken?"
    << "\n [1] Yes"
    << "\n [2] No" << endl;
    int Choice1 = 0;
    cin >> Choice1;
    switch(Choice1)
    {
    case 1:
        cout << "cool!" << endl;
        break;
    case 2:
        cout << "That's sad." << endl;
        break;
    }
}






