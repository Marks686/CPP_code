#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//void Swap(int& left, int& right)
//{
//	int tmp = left;
//	left = right;
//	right = tmp;
//}
//void Swap(double& left, double& right)
//{
//	double temp = left;
//	left = right;
//	right = temp;
//}
//void Swap(char& left, char& right)
//{
//	char temp = left;
//	left = right;
//	right = temp;
//}
////template<class T>
//
//template<typename T>
//void Swap(T& left, T& right)
//{
//		T tmp = left;
//		left = right;
//		right = tmp;
//}
//
//int main()
//{
//	int a, b;
//	a = 1;
//	b = 2;
//	Swap(a,b);
//
//	double c, d;
//	c = 1.1;
//	d = 2.2;
//	swap(c,d);
//
//
//	char e, f;
//	e = 'a';
//	f = 'b';
//
//	return 0;
//
//}
//template<class T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.0, d2 = 20.0;
//	Add(a1, a2);
//	Add(d1, d2);
//
//	/*
//	����䲻��ͨ�����룬��Ϊ�ڱ����ڼ䣬��������������ʵ����ʱ����Ҫ������ʵ������
//	ͨ��ʵ��a1��T����Ϊint��ͨ��ʵ��d1��T����Ϊdouble���ͣ���ģ������б���ֻ��һ��T��
//	�������޷�ȷ���˴����׸ý�Tȷ��Ϊint ���� double���Ͷ�����
//	ע�⣺��ģ���У�������һ�㲻���������ת����������Ϊһ��ת�������⣬����������Ҫ���ڹ�
//	Add(a1, d1);
//	*/
//
//	// ��ʱ�����ִ���ʽ��1. �û��Լ���ǿ��ת�� 2. ʹ����ʽʵ����
//	//Add(a, (int)d);
//	return 0;
//}
//int main(void)
//{
//	int a = 10;
//	double b = 20.0;
//
//	// ��ʽʵ����
//	Add<int>(a, b);
//	return 0;
//}

//// ר�Ŵ���int�ļӷ�����
//int Add(int left, int right)
//{
//	return left + right;
//}
//// ͨ�üӷ�����
//template<class T>
//T Add(T left, T right)
//{
//	return left + right;
//}
//int main()
//{
//	int a = 1, b = 2;
//	Add(a, b);//�����Ѿ�д�õ�
//
//	//ʵ����T��int�ĺ����ͱ�������int�ĺ�������ͬʱ����
//	Add<int>(a, b);
//
//	return 0;
//}
//typedef int STDataType;
//typedef double STDataType;

template<typename T>
class Stack
{
public:
	Stack(int capacity = 4)
	{
		cout << "Stack(int capacity = )" <<capacity<<endl;

		_a = (T*)malloc(sizeof(T)*capacity);
		if (_a == nullptr)
		{
			perror("malloc fail");
			exit(-1);
		}

		_top = 0;
		_capacity = capacity;
	}
	
	~Stack()
	{
		cout << "~Stack()" << endl;

		free(_a);
		_a = nullptr;
		_top = _capacity = 0;
	}

	void Push(const T& x)
	{
		// ....
		// ����
		_a[_top++] = x;
	}

private:
	T* _a;
	int _top;
	int _capacity;
};


int main()
{
	// ��ģ��һ��û������ʱ��������ģ��ʵ�δ����βΣ�����ģ�����
	// ��ʾʵ����
	// ������ͬһ����ģ��ʵ����������
	// ����ģ�������ͬ�����Ǿ��ǲ�ͬ����
	Stack<double> st1; // double
	st1.Push(1.1);

	Stack<int> st2; // int
	st2.Push(1);

	return 0;
}