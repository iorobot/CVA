#ifndef DATE_H
#define DATE_H
class Date
{
private:
	int month;
	int day;
	int year;

public:
	Date();
	Date(int day, int month, int year);
	void display1();
	void display2();
	void increment();
};
#endif //DATE_DATE 