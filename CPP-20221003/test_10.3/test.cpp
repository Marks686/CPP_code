#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//#include<stdlib.h>

//namespace bit
//{
//	int rand = 0;
//}
//int main()
//{
//	printf("hello world\n");
//	printf("%d\n", rand);
//	printf("%d\n", bit::rand);
//
//	return 0;
//}
//#include<iostream>
//int main()
//{
//	std::cout << "hello world" << std::endl;
//
//	return 0;
//}

//namespace bit
//{
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//
//	struct Node
//	{
//		struct Node* next;
//		int val;
//	};
//}
//
//namespace byte
//{
//	int Add(int left, int right)
//	{
//		return left*10 + right*10;
//	}
//
//	struct Node
//	{
//		struct Node* next;
//		struct Node* prev;
//		int val;
//	};
//}
//int main()
//{
//	printf("%d\n", bit::Add(1, 2));
//
//	struct bit::Node node;
//	struct byte::Node dnode;
//	return 0;
//}


//namespace N1
//{
//	int a;
//	int b;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//	namespace N2
//	{
//		int c;
//		int d;
//		int Sub(int left, int right)
//		{
//			return left - right;
//		}
//	}
//}

//int main()
//{
//	//访问a，c
//	N1::a = 1;
//	N1::N2::c = 2;
//	return 0;
//}

//#include<iostream>
////指定展开
//using std::cout;
//using std::endl;
//
//int main()
//{
//	cout << "hello world" << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//	int a;
//	double b;
//	char c;
//	cin >> a;
//	cin >> b >> c;
//
//	cout << a << endl;
//	cout << b <<" "<< c << endl;
//	return 0;
//}

#include <iostream>
using namespace std;
//void Func(int a = 0)
//{
//	cout << a << endl;
//}
//int main()
//{
//	Func();
//	Func(10);
//	return 0;
//}


//void Func(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//int main()
//{
//	Func();
//	Func(1,2);
//	Func(1, 2,3);
//	return 0;
//}


//void Func(int a, int b = 10, int c = 20)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//
//int main()
//{
//	Func(1);
//	Func(1,2);
//	Func(1,2,3);
//	return 0;
//}

int add(int x, int y)
{
	return x + y;
}

double add(double x, double y)
{
	return x + y;
}

//void swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//void swap(double* px, double* py)
//{
//	double tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	cout << add(1, 2) << endl;
//	cout << add(1.1, 2.2) << endl;
//
//	int a = 0, b = 1;
//	swap(&a, &b);
//	
//	double c = 1.1, d = 2.2;
//	swap(&c, &d);
//	return 0;
//}


void f()
{
	cout << "f()" << endl;
}
void f(int a)
{
	cout << "f(int a)" << endl;
}

void f(int a, char b)
{
	cout << "f(int a,char b)" << endl;
}
void f(char b, int a)
{
	cout << "f(char b, int a)" << endl;
}

int main()
{
	f();
	f(1);

	f(0, 'a');

	return 0;
}


