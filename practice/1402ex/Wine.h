#ifndef __WINE_H__
#define __WINE_H__

#include "Pair.h"
#include <valarray>
#include <string>

using namespace std;

typedef std::valarray<int> ValArray;
typedef Pair<ValArray, ValArray> PairValArray;

//Wine
class Wine: private std::string, private PairValArray
{
private:
	//string label;
	int yearsNum;
	//PairValArray yearbotPair;	

public:
	Wine(const char * l, int y);
	Wine(const char * l, int y, const int yr[], const int bot[]);
	std::string & Label();
	int Sum();
	void GetBottles();
	void Show();
};

#endif
