#define _CRT_SECURE_NO_WARNINGS


#include "Date.h"

/*void TestDate1()
{
	Date d1;
	Date d2(2022,10,8);
	//Date d3();��������֪���Ǻ������������Ǵ�������
	Date d3(2022,2,40);
	Date d4(2022, 2, 29);
	d3.Print();
	d4.Print();

	Date d5(d2);
	d5.Print();

	//d5 + 100;//d5.operator(100)
	//d5.AddDay(100);
	
}


void TestDate2()
{
	Date d0;
	Date d1;
	Date d2(2022, 10, 8);

	Date d3(d2);//������ʼ��   һ����ʼ����һ������Ҫ�����Ķ���
	Date d4 = d2;//��������
	d1.Print();

	d0 = d1 = d2;    //��ֵ���أ����ƿ�����  �Ѿ�������������֮��Ŀ���
	d1.Print();
}

void TestStack()
{
	//Stack����Ĭ������operator= ����Ҫ�Լ�ʵ��

	//Stack st1(10000);
	Stack st1;
	st1.Push(1);
	st1.Push(2);

	Stack st2(10);
	st2.Push(10);
	st2.Push(20);
	st2.Push(30);
	st2.Push(40);

	st1 = st2;

	st1 = st1;



}

void TestQueue()
{
	//MyQueue��Date Ĭ������operator= MyQueue�������ռ��Stack�ı���
	MyQueue q1;
	MyQueue q2;
	q1.push(1);
	q1.push(2);
	q1.push(3);

	q2.push(10);
	q2.push(20);
	q2.push(30);

	q1 = q2;
}

int main()
{

	//TestDate1();

	//TestDate2();

	//TestStack();

	TestQueue();

	return 0;
}*/


void TestDate1()
{
	Date d1(2022, 10, 8);
	Date d3(d1);
	Date d4(d1);

	d1 -= 10000;
	d1.Print();

	Date d2(d1);
	/*Date d3 = d2 - 10000;
	d3.Print();*/
	(d2 - 10000).Print();

	d2.Print();

	d3 -= -10000;
	d3.Print();

	d4 += -10000;
	d4.Print();
}

void TestDate2()
{
	Date d1(2022, 10, 8);
	Date d2(d1);
	//Date d3(d1);
	//Date d4(d1);

	(++d1).Print();//d1.operator++()
	//d1.Print();
	(d2++).Print();//d1.operator++(1)
	//d2.Print();

}

int main()
{
	//TestDate1();
	TestDate2();
	return 0;
}


