// Ex0408.cpp : Defines the entry point for the console application.
//
// Chapter 4, Project 4
// Word Jumble - with functions

#include <iostream>
#include <string>
//#include <cstdlib>
#include <time.h>

using namespace std;

string randomWord();                        //return a random word
string mixUp(const string& aWord);          //return a jumbled version of aWord
void welcomePlayer(const string& aJumble);  //welcome player and explain game
void play(const string& aWord);             //play the game


int main()
{
	srand(static_cast<unsigned int>(time(0)));

	string word = randomWord();
	string jumble = mixUp(word);
	welcomePlayer(jumble);
	play(word);

	system("pause");

	return 0;
}

string randomWord()
{
	return string();
}

string mixUp(const string& aWord)
{
	return string();
}

void welcomePlayer(const string& aJumble)
{

}

void play(const string& aWord)
{

}
