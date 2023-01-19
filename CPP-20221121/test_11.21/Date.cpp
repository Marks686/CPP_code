#define _CRT_SECURE_NO_WARNINGS

#include "Date.h"
bool Date::operator == (const Date & d)
{
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}

bool Date::operator>(const Date& d)
{
	if (_year > d._year)
	{
		return true;
	}
	else if (_year == d._year && _month > d._month)
	{
		return true;
	}
	else if (_year == d._year && _month == d._month && _day > d._day)
	{
		return true;
	}
	return false;
}

//d1 += 100
Date& Date::operator+=(int day)
{
	if (day < 0)
	{
		return *this -= -day;
	}
	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		_month++;
		if (_month == 13)
		{
			++_year;
			_month = 1;
		}
	}
	return *this;
}

//d1 + 100
Date Date::operator+(int day)
{
	Date ret(*this);
	ret += day;
	return ret;
}

//d1 -= 100
Date& Date::operator-=(int day)
{
	if (day < 0)
	{
		return *this += -day;
	}

	_day -= day;
	while (_day <= 0)
	{
		--_month;
		if (_month == 0)
		{
			--_year;
			_month = 12;
		}

		_day += GetMonthDay(_year, _month);
	}

	return *this;
}

//d1 - 100
Date Date::operator-(int day)
{
	Date ret(*this);
	ret -= day;
	return ret;
}

//前置
Date& Date::operator++()
{
	*this += 1;
	return *this;
}

//后置 --- 多一个int参数主要是为了跟前置区分构成函数重载
Date Date::operator++(int)
{
	Date tmp(*this);
	*this += 1;
	return tmp;
}


bool Date::operator>=(const Date& d)
{
	return *this > d || *this == d;
}
bool Date::operator<=(const Date& d)
{
	return !(*this > d);
}
bool Date::operator<(const Date& d)
{
	return !(*this >= d);
}
bool Date::operator!=(const Date& d)
{
	return !(*this == d);
}