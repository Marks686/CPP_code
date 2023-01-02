#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;
void test_test1()
{
	string s1;
	string s2("西安市高陵区");
	string s3 = "西安市高陵区";
	string s4(10, '*');

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;

	string s5(s2);
	string s6 = s2;
	cout << s5 << s6 << endl;
}
void test_test2()
{
	string s1("1234");
	//1.
	for (size_t i = 0; i < s1.size(); ++i)
	{
		s1[i]++;
	}
	cout << s1 << endl;

	//2.
	for (auto& ch : s1)
	{
		ch--;
	}
	cout << s1 << endl;
	//反转一下
	size_t begin = 0, end = s1.size() - 1;
	while (begin < end)
	{
		swap(s1[begin++], s1[end--]);
	}
	cout << s1 << endl;

	//迭代器
	string::iterator it1 = s1.begin();
	while (it1 != s1.end())
	{
		*it1 += 1;
		++it1;
	}

	it1 = s1.begin();
	while (it1 != s1.end())
	{
		cout << *it1 << " ";
		++it1;
	}
	cout << endl;

	vector<int> v;
	vector<int>::iterator vit = v.begin();
	while (vit != v.end())
	{
		cout << *vit << " ";
		vit++;
	}
	cout << endl;



	list<int> lt;
	list<int>::iterator ltit = lt.begin();
	while (ltit != lt.end())
	{
		cout << *ltit << " ";
		ltit++;
	}
	cout << endl;
}

void test_string3()
{
	string s1("1234");
	string::iterator it = s1.begin();
	while (it != s1.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	string::reverse_iterator rit = s1.rbegin();
	while (rit != s1.rend())
	{
		cout << *rit << " ";
		++rit;
	}
	cout << endl;
}

void test_string4()
{
	string s("hello world");
	cout << s.size() << endl;
	cout << s.length() << endl;
	cout << s.max_size() << endl;
	cout << s.capacity() << endl;
	cout << s << endl;
	s.clear();
	cout << s << endl;

	//空间不清
	cout << s << endl;
	cout << s.capacity() << endl;

}
int main()
{
	test_string4();
	return 0;
}