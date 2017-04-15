#ifndef COW_H_
#define COW_H_
class Cow
{
private:
	char name[20];
	char * hobby;		//私有变量有指针
	double weight;
public:
	Cow();												// 默认构造函数
	Cow(const char *nm, const char * ho, double wt);    // 带参数构造函数
	Cow(const Cow & c);									// 自定义复制构造函数
	~Cow();												// 自定义析构函数
	Cow & operator=(const Cow & c);						// 自定义复制操作符
	void ShowCow()const;
};
#endif
