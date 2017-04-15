#include <cstring>
#include <cctype>
#include "string2.h"

using std::cin;
using std::cout;

int String::num_strings = 0;

int String::HowMany()
{
	return num_strings;
}

String::String(const char *s)
{
	len = std::strlen(s);
	str = new char[len+1];
	std::strcpy(str,s);
	num_strings++;
}

String::String()
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}

String::String(const String & st)
{
	num_strings++;
	len = st.len;
	str = new char[len+1];
	std::strcpy(str, st.str);
}

String::~String()
{
	--num_strings;
	delete [] str;
}

void String::Stringlow()
{
	char *temp;
	temp = str;	
	for(int i = 0; i < len; i++)
	{
		if(isupper(*temp))
			tolower(*temp);
		temp++;
	}
}

void String::Stringup()
{
	char *temp;
	temp = str;
	for(int i = 0; i < len; i++)
	{
		if(islower(*temp))
			toupper(*temp);
		temp++;
	}
}

int String::StringCount(char ch)
{
	int cnt = 0;
	char *temp = str;
	for(int i = 0; i < len; i++)
	{
		if(*temp == ch)
			cnt++;
	}	
	return cnt;
}

String & String::operator+(const String & s)
{
	char *temp = new char [len+s.len+1];
	std::strcpy(temp, str);
	std::strcat(temp, s.str);
	len += s.len;		

	delete [] str;
	str = temp;
	return *this;
}

String & String::operator=(const String & st)
{
	if(this==&st)
		return *this;
	delete []str;
	len = st.len;
	str = new char[len+1];
	std::strcpy(str,st.str);
	return *this;
}

String & String::operator=(const char *s)
{
	delete []str;
	len = std::strlen(s);
	str = new char[len+1];
	std::strcpy(str,s);
	return *this;
}

char & String::operator[] (int i)
{
	return str[i];
}

const char & String::operator[](int i)const
{
	return str[i];
}

bool operator<(const String &st1, const String &st2)
{
	return(std::strcmp(st1.str, st2.str) < 0);
}


bool operator>(const String &st1, const String &st2)
{
	return st2.str < st1.str;
}

bool operator==(const String &st1, const String &st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}

ostream & operator<<(ostream & os, const String & st)
{
	os << st.str;
	return os;
}

istream & operator>>(istream & is, String & st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if(is)
		st = temp;
	while(is && is.get() != '\n')
		continue;
	return is;
}

