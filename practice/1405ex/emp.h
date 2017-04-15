// emp.h -- header file for abstr_emp class and children

#ifndef __abstr_emp__
#define __abstr_emp__

#include <iostream>
#include <string>

class abstr_emp
{
private:
	std::string fname;		
	std::string lname;	
	std::string job;
public:
	abstr_emp();
	abstr_emp(const std::string & fn, const std::string & ln,
			  const std::string & j);
	virtual void ShowAll() const;		// labels and shows all data
	virtual void SetAll();				//prompts user for values 提示用户输入值
	friend std::ostream & operator<<(std::ostream & os, const abstr_emp & e);
	
	virtual ~abstr_emp()=0;				// virtual base class
};

//继承类
class employee: public abstr_emp
{
public:
	employee();
	employee(const std::string & fn, const std::string & ln,
			 const std::string & j);
	virtual void ShowAll()const;
	virtual void SetAll();
};

//(虚)继承类
class manager: virtual public abstr_emp
{
private:
	int inchargeof;									// number of abstr_emp managed
protected:
	int InChargeOf() const { return inchargeof; }	// output
	int & InChargeOf() { return inchargeof; }		// input
public:
	manager();
	manager(const std::string & fn, const std::string & ln,
			const std::string & j, int ico = 0);
	manager(const abstr_emp & e, int ico);
	manager(const manager & m);
	virtual void ShowAll() const;
	virtual void SetAll();
};


//（虚）基类
class fink: virtual public abstr_emp
{
private:	
	std::string reportsto;						// to whom fink Report
protected:
	const std::string ReportsTo() const { return reportsto; }
	std::string & ReportsTo() {return reportsto; }
	void SetReportsto(std::string & rep){reportsto = rep; }  //增加一个设置reportsto
public:
	fink();
	fink(const std::string & fn, const std::string & ln,
			const std::string & j, const std::string & rpo);
	fink(const abstr_emp & e, const std::string & rpo);
	fink(const fink & e);
	virtual void ShowAll() const;
	virtual void SetAll();
};


class highfink: public manager, public fink		// management fink
{
public:		
	highfink();
	highfink(const std::string & fn, const std::string & ln, 
			 const std::string & j, const std::string & rpo, 
			 int ico);
	highfink(const abstr_emp & e, const std::string & rpo, int ico);
	highfink(const fink & f, int ico);
	highfink(const manager & m, const std::string & rpo);
	highfink(const highfink & h);
	virtual void ShowAll() const;
	virtual void SetAll();
};

#endif // end __abstr_emp__

