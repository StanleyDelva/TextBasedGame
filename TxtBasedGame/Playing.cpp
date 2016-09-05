#include <iostream>
#include <string>
#include <limits>
using namespace std;

void processPlaying()
{
    string Name; // value for user's name
    int catChoose = 0; // value for choosing category
    cout << "What is your name?" << endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(cin,Name);

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
	void TrivialQs();
	TrivialQs();
        break;
    case 2:
        cout << "OK, you're answering Weird questions now..." << endl;
        void WeirdQs();
        WeirdQs();
        break;
    case 3:
        cout << "OK, you're answering Personal questions now..." << endl;
	void PersonalQs();
	PersonalQs();
        break;
    case 4:
        cout << "OK, you're answering Miscellaneous questions now..." << endl;
        break;
    }

   cin.ignore();
   cin.get();
   cout << "\033[2J\033[1;1H";
}








void WeirdQs() // Function for Weird questions
{
    int Wchoices = 0; // Value for for choosing answers to Weird questions

    cout << "Question 1: Do you like chicken?"
    << "\n [1] Yes"
    << "\n [2] No" << endl;

    cin >> Wchoices;
    switch(Wchoices)
    {
    case 1:
        cout << "cool!" << endl;
        break;
    case 2:
        cout << "Then get out of here." << endl;
        break;
    }
}







void TrivialQs()
{
    int Tchoices = 0; // Value for choosing answers to Trivial questions
    int Points = 0; // Points earned for correct answers

    cout << "Question 1: Which American President was assasinated in the 60s?"
       << "\n [1] President JFK"
       << "\n [2] President Lincoln"
       << "\n [3] President Johnson" << endl;

   cin >> Tchoices;
  switch(Tchoices)
  {
	  case 1:
	      Points = Points + 1;  
	      cout << "Good job! You now have " << Points << " point(s)." << endl;
	     break;
	  case 2:
	     Points = Points - 1;
	      cout << "Nope. The correct answer is: President JFK. You now have " << Points << " point(s)." << endl;
	     break;
	  case 3:
	     Points = Points - 1;
	      cout << "Nope. The correct answer is: President JFK. You now have " << Points << " point(s).";
	     break;
  }
  cin.ignore();
  cin.get();
  cout << "\033[2J\033[1;1H";

  cout << "Question 2: What is the date of Adolf Hitler's death?"
       << "\n [1] April 30, 1943"
       << "\n [2] July 30, 1960"
       << "\n [3] April 30, 1945" << endl;

    cin >> Tchoices;
   switch(Tchoices)
   {
           case 1:
              Points = Points - 1;
	      cout << "Nice try. The correct answer is: April 30, 1945. You now have " << Points << " point(s)." << endl;
	      break;

	   case 2:
	      Points = Points - 1;
	      cout << "Nope. The correct answer is: April 30, 1945. You now have " << Points << " point(s)." << endl;
	      break;

	   case 3:
	      Points = Points + 1;
	      cout << "Good job! You now have " << Points << " point(s)." << endl;
	      break;
   }


} 



void PersonalQs()
{
	cout << "Question 1: Who was/is your best friend? ";
	    std::string BFF; // string for best friend's name
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	    std::getline(cin,BFF);
	
	cout << "\nAh, so his/her name is: " << BFF << endl;
	
	
}	






