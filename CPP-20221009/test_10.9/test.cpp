#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
//struct A {
//
//	long a1;
//
//	short a2;
//
//	int a3;
//
//	int* a4;
//
//};
//int main()
//{
//	int a = sizeof(struct A);
//	cout << a << endl;
//	return 0;
//}
//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//Date()
//	//{
//	//	_year = 1;
//	//	_month = 1;
//	//	_day = 1;
//	//}
//	void print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//class Stack
//{
//	Stack(int capacity = 4)
//	{
//		_a = (int*)malloc(sizeof(int) * capacity);
//		if (_a == nullptr)
//		{
//			perror("malloc fail");
//			exit(-1);
//		}
//
//		_top = 0;
//		_capacity = capacity;
//	}
//	~Stack()
//	{
//		free(_a);
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};
//int main()
//{
//	Date d1(2022, 9, 21);
//	Date d2(2022, 9, 21);
//	Date d3;
//	d1.print();
//	d2.print();
//	d3.print();
//
//	return 0;
//}



//lass Time
//{
//public:
// Time()
// {
// cout << "Time()" << endl;
// _hour = 0;
// _minute = 0;
// _second = 0;
// }
//private:
// int _hour;
// int _minute;
// int _second;
//};
//class Date
//{
//private:
//	// ��������(��������)
//	int _year;
//	int _month;
//	int _day;
//	// �Զ�������
//	Time _t;
//};
//int main()
//{
//	Date d;
//	return 0;
//}

//class Date
//{
//public:
//	//Date(int year = 1, int month = 1, int day = 1)
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//	void print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//
//	d1.print();
//
//	return 0;
//}

//class Date
//{
//public:
//    
//    // ����û���ʽ�����˹��캯��������������������
//    Date(int year, int month, int day)
//    {
//    _year = year;
//    _month = month;
//    _day = day;
//    }
//    
//
//    void Print()
//    {
//        cout << _year << "-" << _month << "-" << _day << endl;
//    }
//
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//
//int main()
//{
//    // ��Date���й��캯�����κ󣬴������ͨ�����룬��Ϊ������������һ���޲ε�Ĭ�Ϲ��캯
//    //��
//        // ��Date���й��캯���ſ����������ʧ�ܣ���Ϊһ����ʽ�����κι��캯����������������
//        //����
//        // �޲ι��캯�����ſ��󱨴�error C2512: ��Date��: û�к��ʵ�Ĭ�Ϲ��캯������
//        Date d1;
//    return 0;
//}

class Time
{
public:
	Time()
	{
		cout << "Time()" << endl;
		_hour = 0;
		_minute = 0;
		_second = 0;
	}
private:
	int _hour;
	int _minute;
	int _second;
};
class Date
{
private:
	// ��������(��������)
	int _year;
	int _month;
	int _day;
	// �Զ�������
	Time _t;
};
int main()
{
	Date d;
	return 0;
}
