#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

//typedef char* pstring;
////int main1()
////{
////	const pstring p1;    
////	const pstring* p2;   
////	return 0;
////}
//
//int TestAuto()
//{
//	return 10;
//}
//int main2()
//{
//	int a = 10;
//	auto b = a;
//	auto c = 'a';
//	auto d = TestAuto();
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//	//auto e; �޷�ͨ�����룬ʹ��auto�������ʱ���������г�ʼ��
//	return 0;
//}
//
//int main3()
//{
//    int x = 10;
//    auto a = &x;
//    auto* b = &x;
//    auto& c = x;
//    cout << typeid(a).name() << endl;
//    cout << typeid(b).name() << endl;
//    cout << typeid(c).name() << endl;
//    *a = 20;
//    *b = 30;
//    c = 40;
//    cout << a << endl;
//    cout << b << endl;
//    cout << x << endl;
//    return 0;
//}


//int TestFor()
//{
//    int array[] = { 1, 2, 3, 4, 5 };
//    for (auto& e : array)
//        e *= 2;
//    for (auto e : array)
//        cout << e << " ";
//    cour << endl;
//    return 0;
//}

//int main()
//{
//
//    int ret = e;
//    cout << e << endl;
//    return 0;
//}

//struct ���� 
//1.����c��struct���е��÷�
//2.����������

//typedef int DataType;
//struct Stack
//{
//	��Ա����/��Ա����
//	void Init(size_t capacity)
//	{
//		_array = (DataType*)malloc(sizeof(DataType) * capacity);
//		if (nullptr == _array)
//		{
//			perror("malloc����ռ�ʧ��");
//			return;
//		}
//		_capacity = capacity;
//		_size = 0;
//	}
//
//	void Push(const DataType& data)
//	{
//		 ����
//		_array[_size] = data;
//		++_size;
//	}
//
//	DataType Top()
//	{
//		return _array[_size - 1];
//	}
//
//	void Destroy()
//	{
//		if (_array)
//		{
//			free(_array);
//			_array = nullptr;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//
//	��Ա����/��Ա����
//	DataType* _array;
//	size_t _capacity;
//	size_t _size;
//};
//int main()
//{
//	Stack s;
//	s.Init(10);
//	s.Push(1);
//	s.Push(2);
//	s.Push(3);
//	cout << s.Top() << endl;
//	s.Destroy();
//	return 0;
//
//}

//class Stack
//{
//public:
//	void Init(int N = 4)
//	{
//		//...
//	}
//
//	void Push(int x)
//	{
//		//...
//	}
//
//	int* a;
//	int top;
//public:
//	int capacity;
//};
//
//int main()
//{
//	Stack st;
//	st.a = 0;
//	return 0;
//}

//#include"Stack.h"
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
	int _year;
	int _month;
	int _day;

};
int main()
{
	Date d1;
	d1.Init(2022, 9, 19);
	return 0;
}