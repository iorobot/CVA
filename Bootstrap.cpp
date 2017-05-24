#include <iostream>
#include <fstream>
#include "Bootstrap.h"
#include "MarketData.h"
#include "VariousFunction.cpp"

using namespace std;

Bootstrap::Bootstrap() {};

Bootstrap::Bootstrap(MarketData Data) {
	Instruments.push_back(Data.NDepo);
	Instruments.push_back(Data.NFra);
	Instruments.push_back(Data.NSwap);
	
	// Putting rates togheter
	std::vector<double>::iterator it;
	it = IRates.begin();
	IRates.insert(it, Data.Rates.begin(), Data.Rates.begin() + Instruments[0]);
	it = IRates.end() ;
	IRates.insert(it, Data.Rates.begin() + Data.TDepo, Data.Rates.begin() + Data.TDepo + Instruments[1]);
	
	std::vector<Date>::iterator itD;
	itD = IDates.begin();
	IDates.insert(itD, Data.Dates.begin(), Data.Dates.begin() + Instruments[0]);
	itD = IDates.end();
	IDates.insert(itD, Data.Dates.begin() + Data.TDepo, Data.Dates.begin() + Data.TDepo + Instruments[1]);
	/*
	for (std::vector<double>::iterator iter = ORates.begin(); iter != ORates.end();iter++) {
		cout << ' ' << *iter;
		std::cout << '\n';
	}
	*/

	vector<Date> DatesDepo(Data.Dates.begin(), Data.Dates.begin()+Instruments[0]);
	vector<double> RatesDepo(Data.Rates.begin(), Data.Rates.begin() + Instruments[0]);
	vector<Date> DatesFra(Data.Dates.begin() + Data.TDepo, Data.Dates.begin() + Data.TDepo + Instruments[1]);
	vector<double> Ratesfra(Data.Rates.begin() + Data.TDepo, Data.Rates.begin() + Data.TDepo + Instruments[1]);

	vector<double> ORatesDepo = BootstrapDepo(RatesDepo, DatesDepo);
	ORates = ORatesDepo;
	//ODatesFra = BootstrapFra();
	}
	

Bootstrap::~Bootstrap() {


};

vector<double> Bootstrap::BootstrapDepo(vector<double> rates , vector<Date> dates) {
	vector<double> OutputRates;	
	for (int i = 0; i<size(rates);i++) {
		/*
		cout << "il tasso  : " << rates[i]<< endl;
		dates[i].display1();
		dates[i + 1].display1();
		cout << "la differenza : " << yearFrac(dates[i], dates[i + 1], 1) << endl;
		*/
		OutputRates.push_back (1/ (1 + rates[i] * yearFrac(Settlement, dates[i], 1)));
	}
	return OutputRates;
};

vector<double> Bootstrap::BootstrapFra(std::vector<double> rates, std::vector<Date> dates) {
	vector<double> OutputRates;
	for (int i = 0; i<size(rates); i++) {
		/*
		cout << "il tasso  : " << rates[i]<< endl;
		dates[i].display1();
		dates[i + 1].display1();
		cout << "la differenza : " << yearFrac(dates[i], dates[i + 1], 1) << endl;
		*/
		OutputRates.push_back(1 / (1 + rates[i] * yearFrac( Settlement , dates[i], 1)));
	}
	return OutputRates;


};

vector<double>* Bootstrap::GetRates(int flag) {
	switch (flag) {

	case 1: std::cout << "Input Rates" << endl;
		return &IRates;
	case 2: std::cout << "Outputs Rates" << endl;
		return &IRates;
	}
	std::cout << "Error" << endl;
	return nullptr;
}

vector<Date>* Bootstrap::GetDates(int flag) {
		switch (flag) {
		case 1: std::cout << "Input Dates" << endl;
			return &IDates;
		case 2: std::cout << "Output Dates" << endl;
			return &IDates;
		}
		std::cout << "Error" << endl;
		return nullptr;

}




