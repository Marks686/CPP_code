#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>

using namespace std;

void Func(const vector<int>& v)
{
	v.size();
	v[0];
	//v[0]++;

}

void test_vector1()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.size();
	v[0];
	v[0]++;

	Func(v);
}



void test_vector2()
{
	vector<int> v;
	v.reserve(10);
	for (size_t i = 0; i < 10; ++i)
	{
		v.at(i) = i;
	}
}

void test_vector3()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
	v.assign(10, 1);


	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;

	/// ///////////////////


	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v.assign(v1.begin(), v1.end());

	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
	
	/// ///////////////////
	
	string str("hello world");
	v.assign(str.begin(), str.end());
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}


void test_vector4()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	v.insert(v.begin(), 4);
	v.insert(v.begin()+2, 4);

	vector<int>::iterator it = find(v.begin(), v.end(), 3);
	if (it != v.end())
	{
		v.insert(it, 30);
	}


	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;

}




void test_vector()
{
	vector<int> v;
	v.reserve(10);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	cout << v.size() << endl;
	cout << v.capacity() << endl;

	v.reserve(5);
	cout << v.size() << endl;
	cout << v.capacity() << endl;

	v.resize(3);
	cout << v.size() << endl;
	cout << v.capacity() << endl;
}
int main()
{
	try
	{
		test_vector();
	}

	catch (const exception& e)
	{
		cout << e.what() << endl;
	}
	return 0;
}