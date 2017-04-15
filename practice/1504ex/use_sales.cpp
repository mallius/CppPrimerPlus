#include <iostream>
#include <stdexcept>
#include "sales.h"
#include <typeinfo>

int main(void)
{
	using std::cout;
	using std::cin;
	using std::endl;

	double vals1[12] = 
	{
		1220, 1100, 1122, 2212, 1232, 2334,
		2884, 2393, 3303, 2922, 3002, 3544
	};

	double vals2[12] = 
	{
		12, 11, 22, 21, 32, 34,
		28, 29, 33, 29, 32, 35
	};
	Sales sales1(2004, vals1, 12);
	LabeledSales sales2("Blogstar", 2005, vals2, 12);

	cout << "First try block:\n";
	try
	{
		int i;
		// 打印第一个,无异常
		cout << "------Sales sales1: ------" << endl;
		cout << "Year = " << sales1.Year() << endl;
		for(i = 0; i< 12; ++i)
		{
			cout << sales1[i] << ' ';
			if(i % 6 == 5)
				cout << endl;
		}


		// 打印第二个,抛异常
		cout << "------LabeledSales sales2: ------" << endl;
		cout << "Year = " << sales2.Year() << endl;
		cout << "Label = " << sales2.Label() << endl;
		for(i = 0; i <= 12; ++i)   // 异常
		{
			cout << sales2[i] << ' ';
			if(i % 6 == 5)
				cout << endl;
		}
		cout << "End of try block 1.\n";
	}
	catch(std::logic_error & e)		// 使用一个catch
	{
		if(typeid(e) == typeid(LabeledSales::nbad_index))
		{
			cout << "nbad_inde error--->" << endl;
			cout << e.what();
			//LabeledSales::nbad_index & bad = e;
			//cout << "[nbad_index]Company: " << bad.label_bal() << endl;
			//cout << "[nbad_index]bad index " << bad.bi_val() << endl;
		}
		else if(typeid(e) == typeid(Sales::bad_index))
		{
			cout << "bad_index error--->" << endl;	
			cout << e.what();
			//Sales::bad_index & bad = e;
			//cout << "[bad_index]bad_index: " << bad.bi_val() << endl;
		}
	}

	/**catch(LabeledSales::nbad_index & bad)
	{
		cout << bad.what();
		cout << "[nbad_index]Company: " << bad.label_val() << endl;
		cout << "[nbad_index]bad index: " << bad.bi_val() << endl;
	}
	catch(Sales::bad_index & bad)
	{
		cout << bad.what();
		cout << "[bad_index]bad index: " << bad.bi_val() << endl;
	}**/



	cout << "\n------Next try block: ------\n";
	try
	{
		sales2[2] = 37.5;		// 正常赋值
		sales1[20] = 23345;		// 赋值异常，越界
		cout << "End of try block 2. \n";
	}
	catch(std::logic_error & e)			// 使用一个catch
	{
		if(typeid(e) == typeid(LabeledSales::nbad_index))
		{
			cout << "nbad_inde error--->" << endl;
			cout << e.what();
			//LabeledSales::nbad_index & bad = e;
			//cout << "[nbad_index]Company: " << bad.label_bal() << endl;
			//cout << "[nbad_index]bad index " << bad.bi_val() << endl;
		}
		else if(typeid(e) == typeid(Sales::bad_index))
		{
			cout << "bad_index error--->" << endl;	
			cout << e.what();
			//Sales::bad_index & bad = e;
			//cout << "[bad_index]bad_index: " << bad.bi_val() << endl;
		}
	}

	/**catch(LabeledSales::nbad_index & bad)
	{
		cout << bad.what();
		cout << "[nbad_index]Company: " << bad.label_val() << endl;
		cout << "[nbad_index]bad index: " << bad.bi_val() << endl;
	}
	catch(Sales::bad_index & bad)
	{
		cout << bad.what();
		cout << "[bad_index]bad index: " << bad.bi_val() << endl;
	}**/
	cout << "done\n";

	return 0;
}
