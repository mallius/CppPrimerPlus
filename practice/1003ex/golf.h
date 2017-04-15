#ifndef GOLF_H
#define GOLF_H

class Golf
{
private:
	static const int Len = 40;
	char fullname[Len];
	int handicap;
public:
	Golf(){ };
	void SetGolf(const char *fullname = "nameless", int hc = 1);
	void HandiCap(int hc);
	void ShowGolf(void)const;
};

#endif
