#include "Date.h"

Date::Date(int day, int month, int year)
{
	setAll(day, month, year);
}

void Date::setAll(int day, int month, int year)
{
	setYear(year);
	setMonth(month);
	setDay( checkDay(day) );
}

int Date::getDay() const
{
	return day;
}

int Date::getMonth() const
{
	return month;
}

int Date::getYear() const
{
	return year;
}

void Date::setDay(int day)
{
	this->day = day;
}

void Date::setMonth(int month)
{
	if(month > 0 && month <= 12) 
		this->month = month;
	else
		this->month = 1;
}

void Date::setYear(int year)
{
	this->year = year;
}

int Date::checkDay(int d) const
{
	static const int daysPerMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	if (d > 0 && d <= daysPerMonth[getMonth()])
		return d;
	
	if ((getMonth() == 2) && d == 29 && ((getYear() % 400 == 0) || (getYear() % 4 == 0 && getYear() % 100 !=0)))
		return d;
	
	cout <<"Day " << d << " is invalid. Day set to 1.\n";
	return 1;
}
