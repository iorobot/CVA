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
	void increment();
	int Dayfrom0();

};
#endif //DATE_DATE 