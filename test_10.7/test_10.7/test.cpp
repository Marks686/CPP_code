#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//	void Print()
//	{
//		cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
//	}
//	//˭���ô�˭�ĵ�ַ
//	//Print(&d1)
//	//Print(&d2)
//
//private:
//	int _year;     // ��
//	int _month;    // ��
//	int _day;      // ��
//};
//int main()
//{
//	Date d1;
//	d1.Init(2022, 9, 21);
//	d1.Print();
//
//	Date d2;
//	d2.Init(2022, 9, 22);
//	d2.Print();
//	return 0;
//}
class A
{
public:
    void Print()
    {
        cout << "Print()" << endl;
    }
private:
    int _a;
};
int main()
{
    A* p = nullptr;
    p->Print();
    return 0;
}
// 1.�������������н���ǣ� A�����뱨�� B�����б��� C����������
class A
{
public:
    void PrintA()
    {
        cout << _a << endl;
    }
private:
    int _a;
};
int main()
{
    A* p = nullptr;
    p->PrintA();
    return 0;
}