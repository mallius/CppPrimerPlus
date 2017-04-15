#include "emp.h"
#include <string>

using namespace std;

abstr_emp::abstr_emp(): fname("none"), lname("none"), job("MoneyOwner")
{

}

abstr_emp::abstr_emp(const std::string & fn, const std::string & ln, const std::string & j)
	: fname(fn), lname(ln), job(j)
{

}


void abstr_emp::ShowAll() const	
{
	cout << "(abstr_emp ShowAll)FirstName: " << fname << endl;
	cout << "(abstr_emp ShowAll)LastName: " << lname << endl;
	cout << "(abstr_emp ShowAll)Job: " << job << endl;
}

void abstr_emp::SetAll()
{
	string fn, ln, j;
	cout << "(abstr_emp SetAll)Enter first name: ";
	getline(cin, fn);
	cout << "(abstr_emp SetAll)Enter last name: ";
	getline(cin, ln);
	cout << "(abstr_emp SetAll)Enter job: ";
	getline(cin, j);

	fname = fn;
	lname = ln;
	job = j;
}

//friend
std::ostream & operator<<(std::ostream & os, const abstr_emp & e)
{
	os << "(abstr_emp operator<<)firstName: " << e.fname << endl;
	os << "(abstr_emp operator<<)lastName: " << e.lname << endl;
	os << "(abstr_emp operator<<)Job: " << e.job << endl;
}
	
abstr_emp::~abstr_emp()
{

}

//继承类
//employee: public abstr_emp
employee::employee():abstr_emp()
{
	
}

employee::employee(const std::string & fn, const std::string & ln, const std::string & j)
	: abstr_emp(fn,ln,j)
{

}

void employee::ShowAll()const
{
	abstr_emp::ShowAll();	
}

void employee::SetAll()
{
	abstr_emp::SetAll();
}



//manager: virtual public abstr_emp
manager::manager(): abstr_emp()
{
	
}



manager::manager(const std::string & fn, const std::string & ln, const std::string & j, int ico )
	: abstr_emp(fn, ln, j), inchargeof(ico)
{

}

manager::manager(const abstr_emp & e, int ico): abstr_emp(e), inchargeof(ico)
{
	
}

manager::manager(const manager & m): abstr_emp(m), inchargeof(m.inchargeof)
{

}

void manager::ShowAll() const
{
	abstr_emp::ShowAll();
	cout << "(manager ShowAll)Inchargerof: " << inchargeof << endl;
}

void manager::SetAll()
{
	abstr_emp::SetAll();
	cout << "(manager SetAll)Enter incharge of Num: ";
	int num;
	cin >> num;
	while(cin.get() != '\n')	// 丢弃'\n'  ?
		continue;
	inchargeof = num;
}


//fink: virtual public abstr_emp
fink::fink(): abstr_emp()
{
	
}

fink::fink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo)
	: abstr_emp(fn,ln,j), reportsto(rpo)
{

}

fink::fink(const abstr_emp & e, const std::string & rpo)
	: abstr_emp(e), reportsto(rpo)
{
	
}

fink::fink(const fink & e): abstr_emp(e), reportsto(e.reportsto)
{

}

void fink::ShowAll() const
{
	abstr_emp::ShowAll();
	cout << "Reportsto: " << reportsto << endl;	
}

void fink::SetAll()
{
	abstr_emp::SetAll();
	cout << "(fink SetAll)Enter incharge of Num: ";
	string rep;
	getline(cin, rep);
	reportsto = rep;
}



// highfink: public manager, public fink

highfink::highfink()
	: manager(), fink()
{
	
}

highfink::highfink(const std::string & fn, const std::string & ln, 
					const std::string & j, const std::string & rpo, 
					int ico)
	: manager(fn, ln, j, ico), fink(fn, ln, j, rpo)
{

}

highfink::highfink(const abstr_emp & e, const std::string & rpo, int ico)
	: manager(e, ico), fink(e, rpo)
{
	
}

highfink::highfink(const fink & f, int ico)
	: fink(f), manager(f, ico) 
{

}

highfink::highfink(const manager & m, const std::string & rpo)
	: abstr_emp(m), manager(m), fink(m, rpo)  //祖先类也要初始化？abstr_emp(abstr_emp & e) 没有这个构造
{

}

highfink::highfink(const highfink & h)
	: manager(h), fink(h)
{

}

void highfink::ShowAll() const
{
	manager::ShowAll();
	/////fink::ShowAll();	
	cout << "(highfink ShowAll)reportsto: " << fink::ReportsTo() << endl;
}

void highfink::SetAll()
{
	string temp;

	manager::SetAll();
	/////fink::SetAll();
	cout << "(highfink SetAll)Enter Reportsto: ";
	getline(cin, temp);
	fink::SetReportsto(temp);
}

