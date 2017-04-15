#include <iostream>
#include <cstring>
#include "stock2.h"
Stock::Stock()
{
	std::cout << "Default constructor called\n";
	company = new char[1];
	company[0] = '\0';
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const char *co, int n, double pr)
{
	std::cout << "Constructor using " << co << "called\n";
	int len = std::strlen(co);
	company = new char[len+1];
	std::strncpy(company,co,len);
	company[len+1] = '\0';

	if(n < 0)
	{
		std::cerr << "Number of shares can't be negative;"
			<< company << " shares set to 0.\n";
		shares = 0;
	}
	else 
		shares = n;
	share_val = pr;
	set_tot();
}

/*
Stock::Stock(Stock &st)
{
	int len = std::strlen(st.company);

	company = new char[len+1];
	std::strcpy(company, st.company);
	shares = st.shares;
	share_val = st.share_val;
	total_val = st.total_val;
}
*/



Stock::~Stock()
{
	delete [] company;
	//std::cout << "Bye, " << company << "!\n";
}


void Stock::buy(int num, double price)
{
	if(num < 0)
	{
		std::cerr << "Number of shares purchased can't be negative."
			<< "Transactoin is aborted.\n";
	}
	else
	{
		shares +=num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(int num, double price)
{
	using std::cerr;
	if(num < 0)
	{
		cerr << "Number of shares sold can't be negative."
			<< "Transactions is aborted.\n";
	}
	else if(num > shares)
	{
		cerr << "You can't sell more than you have!"
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void Stock::show()
{
	using std::cout;
	using std::endl;

	cout << "Company: " << company
		<< " Shares: " << shares << endl
		<< " Share Price: $" << share_val
		<< " Total Worth: $" << total_val << endl;
}

const Stock & Stock::topval(const Stock & s)const
{
	if(s.total_val > total_val)
		return s;
	else
		return *this;
}

Stock & Stock::operator=(const Stock & st)
{
	delete [] company;

	int len = std::strlen(st.company);
	company = new char[len+1];
	std::strncpy(company, st.company, len);
	company[len+1]='\0';

	shares = st.shares;
	share_val = st.share_val;
	total_val = st.total_val;
}

std::ostream & operator<<(std::ostream & os, const Stock & st)
{
	std::cout << "company: " << st.company << std::endl;
	std::cout << "shares: " << st.shares<< std::endl;
	std::cout << "share_val: " << st.share_val<< std::endl;
	std::cout << "total_val: " << st.total_val<< std::endl;
}
