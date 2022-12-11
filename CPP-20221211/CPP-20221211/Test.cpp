#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//int globalVar = 1;
//static int staticGlobalVar = 1;
//void Test()
//{
//	static int staticVar = 1;
//	int localVar = 1;
//	int num1[10] = { 1, 2, 3, 4 };
//	char char2[] = "abcd";
//	const char* pChar3 = "abcd";
//	int* ptr1 = (int*)malloc(sizeof(int) * 4);
//	int* ptr2 = (int*)calloc(4, sizeof(int));
//	int* ptr3 = (int*)realloc(ptr2, sizeof(int) * 4);
//	free(ptr1);
//	free(ptr3);
//}
//1. ѡ���⣺
//ѡ�� : A.ջ  B.��  C.���ݶ�(��̬��)  D.�����(������)
//globalVar�����____   staticGlobalVar�����____
//staticVar�����____   localVar�����____
//num1 �����____
//
//char2�����____ * char2�����___
//pChar3�����____ * pChar3�����____
//ptr1�����____ * ptr1�����____
//2. ����⣺
//sizeof(num1) = ____;
//void Test()
//{
//	int* p1 = (int*)malloc(sizeof(int));
//	free(p1);
//	// 1.malloc/calloc/realloc��������ʲô��
//	int* p2 = (int*)calloc(4, sizeof(int));
//	int* p3 = (int*)realloc(p2, sizeof(int) * 10);
//	// ������Ҫfree(p2)��
//	free(p3);
//}

//int main()
//{
//	int* p1 = new int;
//	delete p1;
//
//	//��ʼ��
//	int* p2 = new int(0);
//	delete p2;
//
//	//�����
//	int* p3 = new int[10]{1,2,3,4};
//	delete[] p3;
//	return 0;
//}

class A
{
public:
	A(int a = 0)
		: _a(a)
	{
		cout << "A():" << this << endl;
	}
	~A()
	{
		cout << "~A():" << this << endl;
	}
private:
	int _a;
};

struct ListNode
{
	ListNode* _next;
	int _val;

	ListNode(int val = 0)
		:_next(nullptr)
		,_val(val)
	{

	}
};


//int main()
//{
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
//int main()
//{
//	//A* p1 = new A;
//	//A* p2 = (A*)malloc(sizeof(A));
//	//delete p1;
//	//free(p2);
//
//	A* p3 = new A[10];
//	delete p3;
//	A* p4 = new A;
//	delete[] p4;
//	return 0;
//}
//int main()
//{
//	while (1)
//	{
//		//mallocʧ�� ���ؿ�ָ��
//		int* p1 = (int*)malloc(1024*100);
//		if (p1)
//		{
//			cout << p1 << endl;
//		}
//		else
//		{
//			cout << "����ʧ��" << endl;
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	while (1)
//	{
//		//mallocʧ�� ���ؿ�ָ��
//		int* p1 = new int[1024*100];
//		if (p1)
//		{
//			cout << p1 << endl;
//		}
//		else
//		{
//			cout << "����ʧ��" << endl;
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	while (1)
//	{
//		//mallocʧ�� ���ؿ�ָ��
//		int* p1 = new char[1024 * 1024 * 1024];
//		if (p1)
//		{
//			cout <<(void*)p1 << endl;
//		}
//		else
//		{
//			cout << "����ʧ��" << endl;
//			break;
//		}
//	}
//	catch (exception& e)
//	{
//		cout << e.what() << endl;
//	}
//	return 0;
//}
void* __CRTDECL operator new(size_t size) _THROW1(_STD bad_alloc)
{
	// try to allocate size bytes
	void* p;
	while ((p = malloc(size)) == 0)
if (_callnewh(size) == 0)
{
	// report no memory
	// ��������ڴ�ʧ���ˣ�������׳�bad_alloc �����쳣
	static const std::bad_alloc nomem;
	_RAISE(nomem);
}
return (p);
}
