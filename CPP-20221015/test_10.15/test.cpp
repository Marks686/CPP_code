#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main()
{
	int year, month, day;
	cin >> year >> month >> day;
	int monthDay1_N[13] = { 0,31,59,90,120,151,181,212,243,273,304,3344,365 };
	int n = monthDay1_N[month - 1] + day;
	if (month > 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
	{
		n += 1;
		cout << n << endl;
	}
	return 0;
}