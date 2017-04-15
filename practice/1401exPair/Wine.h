#ifndef __WINE_H__
#define __WINE_H__

#include "Pair.h"
#include <valarray>
#include <string>

using namespace std;

//Wine
class Wine
{
private:
	typedef std::valarray<int> ValArray;
	typedef Pair<ValArray, ValArray> PairValArray;

	string label;
	int yearsNum;
	//Pair< std::valarray<int>, std::valarray<int> >yearbotPair;
	PairValArray yearbotPair;	

	//valarray<int> yearList;
	//valarray<int> bottleList;

public:
	Wine(const char * l, int y);
	Wine(const char * l, int y, const int yr[], const int bot[]);
	std::string & Label();
	int Sum();
	void GetBottles();
	void Show();
};

#endif
