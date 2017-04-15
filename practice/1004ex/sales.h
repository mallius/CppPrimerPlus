namespace SALES
{
const int QUARTERS = 4;

class Sales
{
private:
	double sales[QUARTERS];
	double average;
	double max;
	double min;
public:
	Sales();
	~Sales();
	void setSales(Sales & s, const double ar[], int n);
	void showSales(const Sales & s);	
};

} // end of namespace SALES
