#include "Date.h"

int main()
{
	Date d1(32, 3, 2024);
	Date d2;
	
	cout << d1;	

	cout << "Give date with 1 space between inputs (Ex. 13 1 2024) : ";
	cin >> d2;
	
	cout << "\nDay is " << d2 << endl;
	return 0;
}
