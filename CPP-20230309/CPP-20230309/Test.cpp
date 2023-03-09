#include<iostream>
#include<vector>

using namespace std;
void TestPushklback()
{
	string s;
	s.resize(1000);
	size_t sz = s.capacity();
	cout << "capacity changed: " << sz << '\n';

	cout << "making s grow:\n";

	for (int i = 0; i < 100; i++)
	{
		s.push_back('c');
		if (sz != s.capacity())
		{
			sz = s.capacity();
			cout << "capacity changed: " << sz << '\n';
		}
	}
}

void test_vesctor1()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	for (size_t i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;


	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}

void test_vector2()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	/*for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;*/


	//v.assign(10, 1);
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;

	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);


	/*v.assign(v1.begin(), v1.end());
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;*/


	v1.assign(v.begin(), v.end());
	for (auto e : v1)
	{
		cout << e << " ";
	}
	cout << endl;

	string str("ab");
	v.assign(str.begin(), str.end());
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}

void test_vector3()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	vector<int>::iterator it = find(v.begin(), v.end(), 2);
	if (it != v.end())
	{
		v.insert(it, 30);
	}
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;

	
	
	v.insert(v.begin(), 900);
	
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}

int main()
{
	//TestPushklback();
	//test_vesctor1();
	//test_vector2();
	test_vector3();
	return 0;
}