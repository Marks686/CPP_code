#pragma once

//声明和定义分离

class Stack//类型
{
public :
	void Push(int x);
	void Init(int N = 4);
private: 
	int* a;
	int top;
	int capacity;
};

class Queue//类型
{
public:
	void Init();
	void Push(int x);
private:
    //...
};