// exc_mean.h -- exception classes for hmean(), gmean()
#include <iostream>
#include <stdexcept>

class bad_hmean : public std::logic_error
{
public:
	explicit bad_hmean(const char * s = "bad_hmean error..");
};


class bad_gmean : public std::logic_error
{
public:
	explicit bad_gmean(const char * s = "Wrong: bad_gmean error..");
};
