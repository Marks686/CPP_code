#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	int year, month, day;
	cin >> year >> month >> day;
	int monthDat1_N[13] = { 0,31,59,120,151,181,212,243,273,304,334,364 };
	int n = monthDat1_N[month - 1] + day;
	if (month > 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
	{
		n += 1;
	}
	cout << n << endl;
	return 0;
}