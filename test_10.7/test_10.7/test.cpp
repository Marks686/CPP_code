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
//	//谁调用传谁的地址
//	//Print(&d1)
//	//Print(&d2)
//
//private:
//	int _year;     // 年
//	int _month;    // 月
//	int _day;      // 日
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
// 1.下面程序编译运行结果是？ A、编译报错 B、运行崩溃 C、正常运行
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