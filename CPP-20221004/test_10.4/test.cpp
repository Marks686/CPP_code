#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;


//void f()
//{
//	cout << "f()" << endl;
//}
//
//void f(int a = 0, char b = 1)
//{
//	cout << "f(int a,char b)" << endl;
//}
//int main()
//{
//	f(1);
//	f(10,20);
//
//	f();
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int& ra = a;//引用
//	int* p = &a;//取地址
//	return 0;
//}


//void swap(int& m, int& n)
//{
//	int tmp = m;
//	m = n;
//	n = tmp;
//}
//int main()
//{
//	//int a = 10;
//	//int& ra = a;
//	//int& x = a;
//	//int& y = x;
//
//	int cc = 1;
//	int dd = 2;
//	swap(cc, dd);
//	return 0;
//}


//void TestRef()
//{
//	int a = 10;
//	int& ra = a;
//	int& rra = a;
//	printf("%p %p %p %p\n", &a, &ra, &rra);
//
//	int b = 20;
//	ra = b;
//
//}
//
//
//void swap(int& left, int& right)
//{
//	int tmp = left;
//	left = right;
//	right = tmp;
//}

//int& Count()
//{
//	static int n = 0;
//	n++;
//	//...
//	return n;
//}
//
//int main()
//{
//	int ret = Count();
//	return 0;
//}

//int& Count1()
//{
//    static int n = 0;
//	n++;
//	//...
//	return n;
//}
//int Count2()
//{
//	int n = 0;
//	n++;
//	//...
//	return n;
//}
//
//void Func()
//{
//	int x = 100;
//}


//#include <time.h>
//struct A { int a[10000]; };
//A a;
//// 值返回
//A TestFunc1() { return a; }
//// 引用返回
//A& TestFunc2() { return a; }
//void TestReturnByRefOrValue()
//{
//	// 以值作为函数的返回值类型
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc1();
//	size_t end1 = clock();
//	// 以引用作为函数的返回值类型
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc2();
//	size_t end2 = clock();
//	// 计算两个函数运算完成之后的时间
//	cout << "TestFunc1 time:" << end1 - begin1 << endl;
//	cout << "TestFunc2 time:" << end2 - begin2 << endl;
//}
////int main()
////{
////	int& ret = Count1();
////	cout << ret << endl;
////	cout << ret << endl;
////
////	Func();
////	cout << ret << endl;
////	return 0;
////}
//
//int main()
//{
//	TestReturnByRefOrValue();
//	return 0;
//}

//struct SeqList
//{
//	int a[100];
//	int size;
//};
//
//void SeqInit()


//void TestConstRef()
//{
//    const int a = 10;
//    //int& ra = a;   // 该语句编译时会出错，a为常量
//    const int& ra = a;
//    // int& b = 10; // 该语句编译时会出错，b为常量
//    const int& b = 10;
//    double d = 12.34;
//    //int& rd = d; // 该语句编译时会出错，类型不同
//    const int& rd = d;
//}

int main() 
{
	int a = 0;
	int& ra = a;

	const int b = 1;
	const int& rb = b;
	//int& rb = b;

	const int& rra = a;

	return 0;
}