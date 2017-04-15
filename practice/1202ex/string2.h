#include <iostream>
using std::ostream;
using std::istream;

#ifndef STRING2_H_
#define STRING2_H_

class String
{
private:
	char *str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;
public:
	String(const char *s);
	String();
	String(const String &);
	~String();
	int length()const{ return len; }
	
	// 新加
	void Stringlow();						// 字符串转换为小写
	void Stringup();							// 字符串转换为大写
	int StringCount(char ch);				// ch在字符串中的个数
	String & operator+(const String & s);	// 拼接字符串


	String & operator=(const String &);
	String & operator=(const char *);
	char & operator[] (int i);
	const char & operator[] (int i)const;

	friend bool operator<(const String &st, const String &st2);
	friend bool operator>(const String &st1, const String &st2);
	friend bool operator==(const String &st1, const String &st2);
	friend ostream & operator<<(ostream &os, const String &st);
	friend istream & operator>>(istream &is, const String &st);

	static int HowMany();
};

#endif
