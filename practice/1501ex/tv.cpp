// tv.cpp -- methods for the Tv class (Remote methods are inline)
#include <iostream>
#include "tv.h"

bool Tv::volup()
{
	if(volume < MaxVal)
	{
		volume++;
		return true;
	}
	else
		return false;
}
bool Tv::voldown()
{
	if(volume < MinVal)
	{
		volume--;
		return true;
	}
	else
		return false;
}

void Tv::chanup()
{
	if(channel < maxchannel)
		channel++;
	else
		channel--;
}

void Tv::chandown()
{
	if(channel > 1)
		channel--;
	else
		channel = maxchannel;
}

void Tv::settings()const
{
	using std::cout;
	using std::endl;
	cout << "TV is " << (state == Off ? "Off":"On") << endl;
	if(state == On)
	{
		cout << "Volume setting = " << volume << endl;
		cout << "Channel setting = " << channel << endl;
		cout << "Mode = " 
			<< (mode == Antenna ? "antenna": "cable") << endl;
		cout << "Input = " 
			<< (input == TV ? "TV" : "VCR") << endl;
	}
}


int Tv::change_remote_state(Remote & r)
{
	if(Off==state)
	{
		return 0;
	}	
	if(r.state==Ineraction)
	{
		r.state = Normal;
		return 0;
	}
	if(r.state==Normal)
	{
		r.state = Ineraction;
		return 0;
	}
}
