#pragma once

//�����Ͷ������

class Stack//����
{
public :
	void Push(int x);
	void Init(int N = 4);
private: 
	int* a;
	int top;
	int capacity;
};

class Queue//����
{
public:
	void Init();
	void Push(int x);
private:
    //...
};