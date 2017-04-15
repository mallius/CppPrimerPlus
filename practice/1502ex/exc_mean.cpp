#include "exc_mean.h"

bad_hmean::bad_hmean(const char * s)
	: std::logic_error(s)
{
	std::cout << s;
}

bad_gmean::bad_gmean(const char *s)
	: std::logic_error(s)
{
	std::cout << s;
}
