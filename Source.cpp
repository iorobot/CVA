#include <iostream>
#include <ostream>
#include <ctime>
#include <cstring>
#include <vector>
#include "Bootstrap.h"
#include "Date.h"
#include "MarketData.h"

using namespace std;

int main(){
	//vector<double>* Data = Curve.GetRates(3);
	// It's missing a function that read from excell so the data is put manually
	
	std::vector<Date> Dates = { Date(14, 9, 2012),Date(24,9, 2012),Date(17, 10, 2012),Date(19, 11, 2012),Date(17, 12, 2012),Date(17, 1, 2013),Date(18, 2, 2013) ,Date(18, 3, 2013),Date(17,4,2013), Date(20, 5, 2013), Date(17, 6, 2013), Date(17, 7, 2013), Date(19, 8, 2013), Date(18, 9, 2013), Date(17, 10, 2013), Date(18, 11, 2013) };
	std::vector<double>  Rates = {0.00035,0.00087,0.0012,0.00172,0.00252,0.00325,0.00416,0.00493,0.004590,0.00440,0.004310,0.004250,0.004250,0.004240,0.004310,0.004390};
	MarketData DATA(5, 6, 0, 8, 8, 0, Dates, Rates);
	/*
	Dates[0].display1();
	Dates[1].display1();
	cout << "data zero : " << Dates[0].Dayfrom0() << endl;
	cout << "data zero2 : " << Dates[0].Dayfrom0() << endl;
	cout << "data zero3 : " << Dates[0].Dayfrom0() << endl;
	cout << "data uno : " << Dates[1].Dayfrom0() << endl;
	cout << "data uno2: " << Dates[1].Dayfrom0() << endl;
	cout << "data uno3 : " << Dates[1].Dayfrom0() << endl;
	*/
	Bootstrap Curve6M(DATA);

	for (std::vector<double>::iterator iter = Curve6M.ORates.begin(); iter != Curve6M.ORates.end(); iter++) {
			cout << "Tassi : " << *iter;
			std::cout << '\n';
	}


	//cout << ' ' << size(Dates) << endl;
	//cout << ' ' << size(Rates) << endl;
	/*
	cout << "Numero Depo :" << (*Data)[0] << endl;
	cout << "Numero Fra  :" << (*Data)[1] << endl;
	cout << "Numero Swap :" << (*Data)[2] << endl;
	*/
	getchar();
	return 0;
}
