#include <iostream>
#include <vector>

class Bootstrap
{
private:
	std::vector<double> IDates;
	std::vector<double> IRates; 
	std::vector<double> ODates;
	std::vector<double> ORates;
	std::vector<double> Instruments;
public:
	Bootstrap();
	Bootstrap(const int NDepo, const int NFra, const int NSwap);
	~Bootstrap();
	std::vector<double>* GetInfo(int flag);
	
};

