#ifndef _PERSON_H_
#define _PERSON_H_

#include <string>
using namespace std;

class Person
{
private:
	string firstname;
	string lastname;
public:
	Person():firstname("noneFirstname"), lastname("noneLastname"){ }
	Person(string f, string l): firstname(f), lastname(l){ }
	virtual ~Person() = 0;
	virtual void Show()const = 0;
};

class Gunslinger: virtual public Person
{
private:
	double gunDrawTime;
	int gunScores;
public:
	Gunslinger(): Person(), gunDrawTime(0.0), gunScores(0){ }
	Gunslinger(string first, string last, double drawTime, int scores)
				: Person(first, last), gunDrawTime(drawTime), gunScores(scores){ }
	
	double Draw()const {return gunDrawTime; } 
	void Show()const;
};

class PokerPlayer: virtual public Person
{
public:
	PokerPlayer(): Person(){ }	
	PokerPlayer(string first, string last): Person(first, last){ }

	int Draw()const{return 52; }
	void Show()const;
};



class BadDude: public Gunslinger,public PokerPlayer
{
public:
	BadDude(): Gunslinger(), PokerPlayer(){ }
	BadDude(string first, string last, double drawTime, int scores)
				: Gunslinger(first, last, drawTime, scores), PokerPlayer(){ } 

	double Gdraw()const {return Gunslinger::Draw(); }
	int Cdraw()const {return PokerPlayer::Draw()+1; }
	void Show()const;
};

#endif
