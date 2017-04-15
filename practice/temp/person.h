#ifndef ACCT_H_
#define ACCT_H_


class Person{
private:
	static const LIMIT = 25;
	string lname;
	char fname[LIMIT];
public:
	Person(){lname = ""; fname[0] '\0';}
	Person(const string & ln, const char *fn = "heyyou");
	void Show() const;
	void FormatShow() const;
};

#endif
