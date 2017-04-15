#include "Person.h"
#include <iostream>

using namespace std;

Person::~Person() 
{

}

void Person::Show() const
{
	cout << "Firstname: " << firstname << endl;
	cout << "Lastname: " << lastname << endl;
}



void Gunslinger::Show()const
{
	Person::Show();
	cout << "gunDrawTime: " << gunDrawTime << endl;
	cout << "gunScores: " << gunScores << endl;
}


void PokerPlayer::Show()const
{
	Person::Show();
}

void BadDude::Show()const
{
	Gunslinger::Show();
	//PokerPlayer::Show();
}
