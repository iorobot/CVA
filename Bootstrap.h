
#include <vector>

class Bootstrap
{
private:
	std::vector<int> Dates;
	std::vector<double> Rates; 
	//std::vector<int> Instruments;
	int ND;
public:
	Bootstrap();
	Bootstrap(const int NDepo, const int NFra, const int NSwap);
	~Bootstrap();
	void GetInfo();
	//void Dataimport();
};

