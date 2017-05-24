#include "Date.h"
#include <iostream>
#include <ostream>
#include <vector>

#pragma once
static double yearFrac(Date first_date, Date second_date, int flag) {
	switch (flag) {
	case 1: /*std::cout << "prima: " << first_date.Dayfrom0() << std::endl;
			std::cout << "sec: " << second_date.Dayfrom0() << std::endl;
			diff_date = (second_date.Dayfrom0() - first_date.Dayfrom0()) / (double) 360.0;// act 360
			std::cout << "num: " << (second_date.Dayfrom0() - first_date.Dayfrom0()) << std::endl;
			std::cout << "tot: " << diff_date << std::endl;*/
		return (second_date.Dayfrom0() - first_date.Dayfrom0()) / (double) 360.0; // act 360
	case 2: return (second_date.Dayfrom0() - first_date.Dayfrom0()) / (double) 365.0;// act 365
	case 3: std::cout << "Error" << std::endl;
		return  -1000000;
	}
}
