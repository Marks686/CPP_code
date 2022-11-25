#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Stack
{
public:
	/*Stack(int capacity = 4)
		:_a((int*)malloc(sizeof(int)*capacity))
		, _top(0)
		, _capacity(capacity)
	{
		if (_a == nullptr)
		{
			perror("malloc fail");
			exit(-1);
		}
	}*/

	// ��ʼ���б�ͺ������ڳ�ʼ�����Ի�����
	Stack(int capacity = 4)
		: _top(0)
		, _capacity(capacity)
	{
		cout << "Stack(int capacity = 4)" << endl;

		_a = (int*)malloc(sizeof(int) * capacity);
		if (_a == nullptr)
		{
			perror("malloc fail");
			exit(-1);
		}
		memset(_a, 0, sizeof(int) * capacity);
	}

	~Stack()
	{
		cout << "~Stack()" << endl;

		free(_a);
		_a = nullptr;
		_top = _capacity = 0;
	}

	void Push(int x)
	{
		// ....
		// ����
		_a[_top++] = x;
	}

private:
	int* _a;  // ����
	int _top;
	int _capacity;
};

//class A
//{
//public:
//	A(int a)
//		:_a(a)
//	{}
//private:
//	int _a;
//};
//
//class B
//{
//public:
//	// ����ÿ����Աʲôʱ�����ʼ���أ�-- ��ʼ���б�
//	// ÿ����Ա��Ҫ�߳�ʼ���б����㲻��ʾ�ڳ�ʼ���б�д��Ҳ����
//	// ����ڳ�ʼ���б���ʾд�˾�����ʾд�ĳ�ʼ��
//	// ���û���ڳ�ʼ���б���ʾ��ʼ��
//	// 1���������ͣ���ȱʡֵ��ȱʡֵ��û�о������ֵ
//	// 2���Զ������ͣ�����Ĭ������Ĭ�Ϲ��캯�������û��Ĭ�Ϲ���ͱ���
//	B()
//		:_n(10)
//		, _m(2)
//		, _aa(11)
//	{
//		// _n = 10;
//	}
//
//private:
//	// const��Ա
//	const int _n;  // ����
//	int _m = 1;    // ȱʡֵ
//
//	A _aa;
//};
//
//
//class MyQueue {
//public:
//	MyQueue(int capacity)
//		:_popST(capacity)
//		, _pushST(capacity)
//	{}
//
//	void push(int x)
//	{
//		_pushST.Push(x);
//	}
//private:
//	Stack _pushST;
//	Stack _popST;
//	size_t _size = 0;
//};
//
//int main()
//{
//	B b;
//
//	// �����ʱ������ʼ��
//	// const int N;
//	//N = 20;
//
//	// ����ʵ���������嶨�� 
//	// ����ÿ����Աʲôʱ�����أ�-- ��ʼ���б�
//	Stack st1;
//	Stack st2;
//	Stack st3;
//
//	MyQueue q(10);
//
//	return 0;
//}

class A
{
public:
	A(int a)
		:_a1(a)
		, _a2(_a1)
	{}

	void Print()
	{
		cout << _a1 << " " << _a2 << endl;
	}
private:
	int _a2;
	int _a1;
};

int main() {
	A aa(1);
	aa.Print();
}