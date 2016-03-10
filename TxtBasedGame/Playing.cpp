#include <iostream>
#include <string>
#include <limits>
using namespace std;

void processPlaying()
{
    string Name; // value for user's name
    int age = 0; // value for user's age

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

    cin.ignore();
    cin.get();
}
