#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <conio.h>
using namespace std;

class Date
{
	private:
		int day, month, year;
		int checkDay(int) const;
		
	public: 
		Date(int = 1, int = 1, int = 1970);
		void setAll(int,int,int);
		void setDay(int);
		void setMonth(int);
		void setYear(int);
		int getDay() const;
		int getMonth() const;
		int getYear() const;
		
		friend ostream &operator << ( ostream &os, Date &date )
		{
    		os << date.day << '/' << date.month << '/' << date.year << "\n";
    		return os;
		}
		
		friend istream &operator >> ( istream &is, Date &date )
		{
			is >> date.day >> date.month >> date.year;
			date.setAll(date.day,date.month,date.year);
			return is;
		}	
};
#endif
