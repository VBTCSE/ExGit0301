// App0301.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "Hello World!\n\n";
	cout << "This is an addition made by a collaborator.\n\n";
	cout << "Enter a number: ";
	int x = 0;
	cin >> x;
	cout << "\nThe number is: " << x << endl << endl;

	system("pause");
	return 0;
}


//return a random word
string randomWord()
{
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS] =
	{
		"wall",
		"glasses",
		"labored",
		"persistent",
		"jumble"
	};

	int choice = (rand() % NUM_WORDS);
	string word = WORDS[choice];

	return word;
}

