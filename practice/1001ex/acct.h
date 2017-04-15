#ifndef ACCT_H_
#define ACCT_H_

class Acct{
private:
	char name[20];
	char acctno[20];
	double bal;
public:
	Acct();
	Acct(char *name, char *acctno, double bal);
	~Acct();
	void show()const;
	void in(double m);
	void out(double m);
};

#endif
