#define _CRT_SECURE_NO_WARNINGS

//class Stack // 类型
//{
//public:
//	void Push(int x)
//	{
//		// Init();
//		//...
//	}
//
//	void Init(int N = 4)
//	{
//		// ...
//		top = 0;
//		capacity = 0;
//	}
//
//private:
//	int* a;  // 声明
//	int top;
//	int capacity;
//};
//
//struct Stack_C // 类型
//{
//	int* a;    // 声明 
//	int top;
//	int capacity;
//};
//
//int main()
//{
//	//Stack::a = 0;
//	//Stack_C::a = 0;
//
//	//Stack st;
//	//st.a = 0;
//
//	return 0;
//}

//#include "Stack.h"

//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		year = year;
//		month = month;
//		day = day;
//	}
//private:
//	int year;
//	int month;
//	int day;
//};

class Date
{
public:
	void Init(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year; // year_  m_year  mYear
	int _month;
	int _day;
};

int main()
{
	//Stack st1;
	//Stack st2;

	Date d1;
	d1.Init(2022, 9, 19);

	return 0;
}