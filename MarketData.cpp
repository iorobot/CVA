#include "MarketData.h"


MarketData::MarketData(){}
MarketData::MarketData(int ND, int NF, int NS, int TD, int TF, int TS, std::vector<Date> Dt, std::vector<double> Rt) {
	NDepo = ND;
	NFra  = NF;
	NSwap = NS;
	TDepo = TD;
	TFra  = TF;
	TSwap = TS;
	Dates = Dt;
	Rates = Rt;
	Datesptr = &Dates;
	Ratesptr = &Rates;
}
MarketData::~MarketData(){}
