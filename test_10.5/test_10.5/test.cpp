#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//int main()
//{
//    const int a = 10;
//    //int& ra = a;   // ��������ʱ�����aΪ����
//    const int& ra = a;
//    // int& b = 10; // ��������ʱ�����bΪ����
//    const int& b = 10;
//    double d = 12.34;
//    int i = (int)d;
//    //int& ri = d;
//    //int& rd = d; // ��������ʱ��������Ͳ�ͬ
//    const int& rd = d;
//
//	return 0;
//}

//int Count()
//{
//    int n = 0;
//    n++;
//    // ...
//    return n;
//}
//int main()
//{
//    const int& ret = Count();
//    return 0;
//}
//�﷨��ra��a�ı����������ռ�
//�ײ�ʵ�֣�������ʹ��ָ��ʵ�ֵ�
//int main()
//{
//	int a = 10;
//	
//	int& ra = a;
//	ra = 20;
//
//	int* pa = &a;
//	*pa = 30;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	auto b = a;
//	return 0;
//}

#include <string>
#include <map>
//int main()
//{
//	std::map<std::string, std::string> m{ { "apple", "ƻ��" }, { "orange",
//   "����" },
//	  {"pear","��"} };
//	//std::map<std::string, std::string>::iterator it = m.begin();
//	auto it = m.begin();
//
//
//	int array[] = { 1, 2, 3, 4, 5 };
//	for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
//		cout << array[i] << endl;
//
//	for (auto e : array)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	return 0;
//}

//#define Add(a,b)((a)+(b))


//int main()
//{
//	//if (Add(1, 2))
//	//{
//
//	//}
//	/*Add(1, 2) * 3;*/
//
//	Add(1 | 3, 2 & 4);
//	return 0;
//}

//inline int Add(int x, int y)
//{
//	return x + y;
//}
//inline int func(int x, int y)
//{
//	int ret = x + y;
//	ret = x + y;
//	ret = x + y;
//	ret = x / y;
//	ret += x + y;
//	ret = x + y;
//	ret -= x + y;
//	ret = x + y;
//	ret = x * y;
//	ret = x + y; 
//	ret = x + y;
//	return ret;
//}
//int main()
//{
//	int ret = Add(1, 3);
//	cout << ret << endl;
//	ret = func(10,20);
//	cout << ret << endl;
//	return 0;
//}
//#include "Stack.h"
//
//
//
//int main()
//{
//	int ret = func1();
//	cout << ret << endl;
//	return 0;
//}

//int main()
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
//     c = 40;
//
//	return 0;
//}
void f(int)
{
	cout << "f(int)" << endl;
}
void f(int*)
{
	cout << "f(int*)" << endl;
}
int main()
{
	f(0);
	f(NULL);
	f((int*)NULL);
	return 0;
}
