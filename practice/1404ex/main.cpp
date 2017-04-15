#include "Person.h"
#include <iostream>

using namespace std;
int main(void)
{
	cout << "---Gunslinger---" << endl;
	Gunslinger gunslinger("Jack", "Spi", 1.23, 3);
	gunslinger.Show();
	cout << "draw: " << gunslinger.Draw() << endl;
	cout << endl;

	cout << "---PokerPlayer---" << endl;
	PokerPlayer pokerPlayer("Marry", "Snow");
	pokerPlayer.Show();
	cout << "draw: " << pokerPlayer.Draw() << endl;
	cout << endl;

	cout << "---BadDude---" << endl;
	BadDude badDude("John", "Whell", 2.58, 8);
	badDude.Show();
	cout << "Gdraw: " << badDude.Gdraw() << endl;
	cout << "Cdraw: " << badDude.Cdraw() << endl;
	cout << endl;


	cout << "---Person new---" << endl;
	cout << "===new Gunslinger===" << endl;
	Person * p = new Gunslinger("Ja", "sp", 0.23, 3);
	p->Show();

	cout << "===new PokerPlayer===" << endl;
	Person * pPoker = new PokerPlayer("Ma", "Sn");
	pPoker->Show();	

	cout << "===new BadDude===" << endl;
	Person *pBad = new BadDude("Jo", "Wh", 3.58, 9);
	pBad->Show();

	return 0;
}
