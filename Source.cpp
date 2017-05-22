#include <iostream>
#include "Bootstrap.h"

using namespace std;

int main(){
	string file = "MarketData_Crab.csv";
	Bootstrap Curve(5, 6, 7);
	Curve.GetInfo();
	
	//cout << "Numero Depo" << Data << endl;
	//cout << "Numero Fra" << Data[1] << endl;
	//cout << "Numero Swap" << Data[2] << endl;
	getchar();
	return 0;
}