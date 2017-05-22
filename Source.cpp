#include <iostream>
#include <ostream>
#include <ctime>
#include <cstring>


#include "Bootstrap.h"
#include "Date.h"

using namespace std;

int main(){
	vector<Date> Datas = { Date(14, 9, 2012),Date(18, 9, 2012),Date(24, 9, 2012),Date(17, 10, 2012),Date(19, 11, 2012),Date(17, 12, 2012) };
	Datas[4].display1();

	Bootstrap Curve(5, 6, 7);
	vector<double>* Data = Curve.GetInfo(5);
	// It's missing a function that read from excell so the data is put manually
	vector<string> Dates = {};
	vector<double> Rates = { 0.00035,0,0.00087,0.0012,0.00172,0.00252,0.00241,0.00235,0.00226,0.002475,0.002275,0.002375,0.002675,0.002975,0.003525,0.004125,0.004925,0.00248,0.00321,0.00449,0.00637,0.00852,0.01062,0.01254,0.01424,0.01571,0.01702,0.01924,0.02141,0.0226,0.02305,0.02336,0,0.02441,0.02528,0.00274};
	
	/*
	cout << "Numero Depo :" << (*Data)[0] << endl;
	cout << "Numero Fra  :" << (*Data)[1] << endl;
	cout << "Numero Swap :" << (*Data)[2] << endl;
	*/
	getchar();
	return 0;
}

