#include "Bootstrap.h"
#include <iostream>
#include <fstream>

using namespace std;

Bootstrap::Bootstrap(){}
Bootstrap::Bootstrap( int NDepo, int NFra, int NSwap) {
	Instruments.push_back(NDepo) ;
	Instruments.push_back(NFra);
	Instruments.push_back(NSwap);

}
Bootstrap::~Bootstrap(){}

vector<double>* Bootstrap::GetInfo(int flag) {
	switch (flag) {
	case 1: std::cout << "Input Dates" << endl;
		return &IDates;
	case 2: std::cout << "Input Rates" << endl;
		return &IRates;
	case 3: std::cout << "Output Dates" << endl;
		return &ODates;
	case 4: std::cout << "Outputs Rates" << endl;
		return &ORates;
	case 5: std::cout << "Number of Instruments" << endl;
		return &Instruments;
	case 6: std::cout << "Error" << endl;
		return nullptr;
	}

}




