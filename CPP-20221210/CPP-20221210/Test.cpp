#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class A
{
public:
	A(int a = 0)
		: _a(a)
	{
		cout << "A():" << this << endl;
	}

	//~A()
	//{
	//	cout << "~A():" << this << endl;
	//}

private:
	int _a;
};

struct ListNode
{
	ListNode* _next;
	int _val;

	ListNode(int val = 0)
		:_next(nullptr)
		, _val(val)
	{}
};


//int main()
//{
//	// 自定义类型
//	// new和delete相比malloc，除了空间管理，还会调用构造函数和析构函数
//	A* p1 = new A;
//	A* p2 = (A*)malloc(sizeof(A));
//
//	delete p1;
//	free(p2);
//
//	ListNode* n1 = new ListNode(1);
//	ListNode* n2 = new ListNode(2);
//	ListNode* n3 = new ListNode(3);
//	ListNode* n4 = new ListNode(4);
//	n1->_next = n2;
//	//...
//
//	return 0;
//}

// 21：13继续
//int main()
//{
//	// 一定要匹配使用，否则可能会出现各种情况
//	//A* p3 = new A[10];
//	//delete p3;
//
//	A* p4 = new A;
//	delete[] p4;
//
//	return 0;
//}

void Test()
{
	while (1)
	{
		// new失败 抛异常 -- 不需要检查返回值
		char* p1 = new char[1024 * 1024 * 1024];
		//char* p1 = (char*)operator new(1024 * 1024 * 1024);
		cout << (void*)p1 << endl;
	}
}

int main()
{
	//while (1)
	//{
	//	// malloc失败 返回空指针
	//	int* p1 = (int*)malloc(1024*100);
	//	if (p1)
	//	{
	//		cout << p1 << endl;
	//	}
	//	else
	//	{
	//		cout << "申请失败" << endl;
	//		break;
	//	}
	//}

	//try
	//{
	//	Test();	
	//}
	//catch (exception& e)
	//{
	//	cout << e.what() << endl;
	//}

	A* p1 = new A[10];
	//delete[] p1;

	free(p1);

	return 0;
}

//int main()
//{
//	ListNode* p = new ListNode;
//
//	return 0;
//}
//int main()
//{
//
//	return 0;
//}