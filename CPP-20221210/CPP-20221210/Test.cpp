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
//	// �Զ�������
//	// new��delete���malloc�����˿ռ����������ù��캯������������
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

// 21��13����
//int main()
//{
//	// һ��Ҫƥ��ʹ�ã�������ܻ���ָ������
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
		// newʧ�� ���쳣 -- ����Ҫ��鷵��ֵ
		char* p1 = new char[1024 * 1024 * 1024];
		//char* p1 = (char*)operator new(1024 * 1024 * 1024);
		cout << (void*)p1 << endl;
	}
}

int main()
{
	//while (1)
	//{
	//	// mallocʧ�� ���ؿ�ָ��
	//	int* p1 = (int*)malloc(1024*100);
	//	if (p1)
	//	{
	//		cout << p1 << endl;
	//	}
	//	else
	//	{
	//		cout << "����ʧ��" << endl;
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