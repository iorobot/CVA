#include "Date.h" //includes the Date header file
#include <iostream>
#include <cassert> //lets us use assertions in C ++

using namespace std;

//default constructor with default values
Date::Date()
{
	month = 1;//default month value
	day = 1;//default day value
	year = 2000;//default year value
}
//postcondition: a Date with a month, day and year has been created

//precondition: Date will check if any of the conditions have been violated

Date::Date(int Day, int Month, int Year)
{
	if ((Month < 1 || Month > 12) || (Day < 1 || Day > 31) || (Year < 0 || Year > 2100))
	{
		std::cout << "Invalid" << std::endl;

	}
	else
	{
		month = Month;
		day = Day;
		year = Year;
	}
}
//postcondition: Date checked that the code does not violate any of the parameters

//precondition: Day will have been incremented by 1
void Date::increment()
{
	//month += 1;
	//assert(month >= 1 && month <= 12);
	day += 1;
	assert(day >= 1 && day <= 31);
	if (month == 2 && day == 28 || day == 29)
	{
		if (year % 4 || year % 400)
		{
			std::cout << "Thats a Leap Year" << std::endl;
			//month += 1;
			day += 1;
			//year++;
			assert(day >= 1 && day <= 31);
			assert(month >= 1 && month <= 12);
		}
	}

}
//postcondition: Day has been incremented by 1

void Date::display1()
{
	std::cout << day << '/' << month << '/' << year << std::endl;
}
//postcondition: Date has been displayed in number format

int Date::Dayfrom0() {
	int days_in_months[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int second_day=1;
	int second_month=1;
	int second_year=0;

	int years_difference=0, days_difference=0;
	int months_total=0;
	int reg_year = 365;
	//cout << "Si riparte " << endl;
	if (day > 31 || day <= 0)
	{
		std::cout << "Incorrect day entered" << endl;
		cin.ignore();
		return 0;
	}

	if (month > 12 || month <= 0)
	{
		std::cout << "Incorrect Month entered" << endl;
		cin.ignore();
		return 0;
	}

	if (year > 9999 || year < 0)
	{
		std::cout << "Incorrect Year Entered" << endl;
		cin.ignore();
		return 0;
	}

/////////////////////////////Years/////////////////////////////////


	if (year == second_year)
	{
		years_difference = 0;
	}
	else

	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			if (second_year % 4 == 0 && second_year % 100 != 0 || second_year % 400 == 0)
			{
				if (year > second_year)
				{
					years_difference = (year - second_year) * (reg_year)+2;
					//cout << "diff anni : " << years_difference << endl;
				}
				else
				{
					years_difference = (second_year - year) * (reg_year)+2;
				}
				if (second_month > month)
				{
					if (days_in_months[month - 1] > days_in_months[1])
					{
						--years_difference;
					}
				}
			}
			else
			{
				if (year > second_year)
				{
					years_difference = (year - second_year) * (reg_year)+1;
				}
				else
				{
					years_difference = (second_year - year) * (reg_year)+1;

				}
				if (month > second_month)
				{
					if (days_in_months[second_month - 1] > days_in_months[1])
					{
						--years_difference;
					}
				}
			}
		}
		else

		{
			if (year > second_year)
			{
				years_difference = (year - second_year) * (reg_year);
			}
			else
			{
				years_difference = (second_year - year) * (reg_year);
			}
		}
	}

	/////////////////////////////Months////////////////////////////////////


	if (month == second_month)
	{
		months_total = 0;
	}
	else
	{
		if (month > second_month)
		{
			int months_total_temp = 0;
			for (int i = (month - 1); i > (second_month - 1); i--)
			{
				//static int months_total_temp = 0;
				months_total_temp += days_in_months[i-1];
				//cout << "temp mese : "<< months_total_temp << endl; 
				months_total = months_total_temp;
			}
		}
		else
		{	
			int months_total_temp = 0;
			for (int i = (month - 1); i < (second_month - 1); i++)
			{
				//static int months_total_temp = 0;
				months_total_temp += days_in_months[i];
				months_total = months_total_temp;
			}
		}
	}

	////////////////////////////Days//////////////////////////////////

	int days_total;

	if (day == second_day)
	{
		days_difference = 0;
		days_total = (years_difference + months_total) - days_difference;
	}
	else
	{
		if (day > second_day)
		{
			days_difference = day - second_day;
			//std::cout << "giorni : " <<days_difference << endl;
			days_total = (years_difference + months_total) + days_difference;
		}
		else
		{
			days_difference = second_day - day;
			days_total = (years_difference + months_total) - days_difference;
		}
	}

	//////////////////////////In Between Leap Years///////////////////////////////

	if (year == second_year)
	{
	}
	else
	{
		if (year > second_year)
		{
			for (int i = (second_year + 1); i < year; i++)
			{
				if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
				{

					++days_total;
				}
			}
		}
		else
		{
			for (int i = (year + 1); i < second_year; i++)
			{
				if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
				{
					++days_total;
				}
			}
		}
	}
	return days_total;
}

