#pragma once
#include <vector>
#include "Date.h"

class MarketData
{
public:

		int NDepo ;
		int NFra ;
		int NSwap =0 ;
		int TDepo ;
		int TFra ;
		int TSwap =0;
		std::vector<Date> Dates;
		std::vector<double> Rates;
		std::vector<Date>* Datesptr ;
		std::vector<double>* Ratesptr ;
		MarketData();
		MarketData(int ND, int NF, int NS, int TD, int TF, int TS, std::vector<Date> Dates, std::vector<double> Rates);
		~MarketData();
};

