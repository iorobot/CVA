#include "Date.h"
#include <vector>
#include "MarketData.h"

class Bootstrap
{
private:
	std::vector<Date> IDates;
	std::vector<double> IRates;
	std::vector<int> Instruments;
public:
	Date Settlement;
	std::vector<Date> ODates;
	std::vector<double> ORates;
	Bootstrap();
	Bootstrap(MarketData Data);
	~Bootstrap();
	std::vector<double> BootstrapDepo(std::vector<double> rates, std::vector<Date> dates);
	std::vector<double> BootstrapSwap(std::vector<double> rates, std::vector<Date> dates);
	//std::vector<double> BootstrapFra();
	std::vector<double>* GetRates(int flag);
	std::vector<Date>* GetDates(int flag);
	
};

