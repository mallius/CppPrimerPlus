#ifndef PLORG_H
#define PLORG_H
#include <cstring>

class Plorg
{
private:
	static const int Len = 20;
	char name[Len];
	int ci;
public:
	Plorg(){}
	Plorg(const char *pname, int pci = 50);
	void SetCi(int pci);
	void ShowCi()const;
};

#endif
