#include <iostream>
#include <string>
#include <limits>
using namespace std;

void processPlaying()
{
    string Name; // value for user's name
    int age = 0; // value for user's age
    int catChoose = 0; // value for choosing category
    cout << "What is your name?" << endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(cin,Name);

    cout << "How old are you (in years) " << Name << "?"
    << "\n [1] 3-5" // Toddler
    << "\n [2] 6-8" // Child
    << "\n [3] 9-11" // Tween
    << "\n [4] 12-17" // Teenager
    << "\n [5] 18+" << endl; // Adult
    cin >> age;
    switch (age)
    {
    case 1: // if user chooses 1
        cout << "Wow! You're a toddler!" << endl;
        break;
    case 2: // user chooses 2
        cout << "Wow! You're a child!" << endl;
        break;
    case 3: // user chooses 3
        cout << "Wow! You're a tween!" << endl;
        break;
    case 4: // user chooses 4
        cout << "Wow! You're a teenager!" << endl;
        break;
    case 5: // user chooses 5
        cout << "Wow! You're an adult!" << endl;
        break;
    }

    cout << "So what what type of questions  do you want to answer, " << Name << "?"
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






