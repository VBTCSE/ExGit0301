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

//return a jumbled version of aWord
string mixUp(const string& aWord)
{
	string aJumble = aWord;
	int length = static_cast<int>(aJumble.size());

	for (int i = 0; i<length; ++i)
	{
		int randomIndex = (rand() % length);
		char temp = aJumble[i];
		aJumble[i] = aJumble[randomIndex];
		aJumble[randomIndex] = temp;
	}

	return aJumble;
}
