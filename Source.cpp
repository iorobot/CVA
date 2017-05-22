#include <iostream>
#include "Bootstrap.h"

using namespace std;

int main(){
	string file = "MarketData_Crab.csv";
	vector<int> Prova;
	Bootstrap Curve(5, 6, 7);
	vector<double>* Data = Curve.GetInfo(5);
	
	cout << "Numero Depo :" << (*Data)[0] << endl;
	cout << "Numero Fra :" << (*Data)[1] << endl;
	cout << "Numero Swap :" << (*Data)[2] << endl;
	getchar();
	return 0;
}