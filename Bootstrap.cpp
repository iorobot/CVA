#include "Bootstrap.h"
#include <iostream>

Bootstrap::Bootstrap(){}
Bootstrap::Bootstrap(const int NDepo, const int NFra, const int NSwap) {
	//Instruments[0]= NDepo;
	//Instruments[1] = NFra;
	//Instruments[2] = NSwap;
	ND = NDepo;
}
Bootstrap::~Bootstrap(){}

void Bootstrap::GetInfo() {
	std::cout << ND;
}


//void Dataimport(const int ND, const);