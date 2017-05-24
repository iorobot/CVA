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

	std::vector<Date> Dates = { Date(14, 9, 2012),Date(24,9, 2012),Date(17, 10, 2012),Date(19, 11, 2012),Date(17, 12, 2012),Date(17, 1, 2013),Date(18, 2, 2013),
								Date(18, 3, 2013),Date(17,4,2013), Date(20, 5, 2013), Date(17, 6, 2013), Date(17, 7, 2013), Date(19, 8, 2013), Date(18, 9, 2013),
								Date(17, 10, 2013), Date(18, 11, 2013),Date(17, 12, 2013) ,Date(17, 1, 2014) ,Date(19, 2, 2014) ,Date(17, 03, 2014),
								Date(17, 9, 2013) ,Date(17, 3, 2014) ,Date(17, 9, 2014) ,Date(17, 9, 2015) ,Date(19,9, 2016) ,Date(18, 9, 2017) ,Date(17, 9, 2018),
								Date(17, 9, 2019) ,Date(17, 9, 2020),Date(17, 9, 2021),Date(19, 9, 2022),Date(17, 9, 2024),Date(17, 9, 2027),Date(17, 9, 2032),
								Date(17, 9, 2037) ,Date(17, 9, 2042) ,Date(17, 9, 2047) ,Date(17, 9, 2052),Date(18, 9, 2062) };
	std::vector<double>  Rates = { 0.00035,0.00087,0.0012,0.00172,0.00252,0.00325,0.00416,0.00493,0.004590,0.00440,0.004310,0.004250,0.004250,0.004240,0.004310,0.004390,
								  0.00447,0.00462,0.00474,0.00484,0.00465,0.00473,0.00513,0.00632,0.008130,0.01021,0.01225,0.0141,0.01573,0.01714,0.01838,0.0205,
								  0.02253,0.02356,0.0239,0.02412,0.02454,0.02507,0.02558 };
	cout << ' ' << size(Dates)<< endl;
	cout << ' ' << size(Rates) << endl;
	MarketData DATA(5, 0, 19, 8, 12, 20, Dates, Rates);
	//MarketData(int ND, int NF, int NS, int TD, int TF, int TS, std::vector<Date> Dates, std::vector<double> Rates);

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

	for(std::vector<double>::iterator iter = Curve6M.ORates.begin(); iter != Curve6M.ORates.end(); iter++) {
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
