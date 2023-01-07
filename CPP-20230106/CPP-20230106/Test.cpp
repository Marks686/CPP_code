#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;


void test_string8()
{
	string s("hello world");
	s.insert(0, "bit");
	cout << s << endl;
	s.insert(9, "bit");
	cout << s << endl;

	s.erase(9, 3);
	cout << s << endl;

	s.erase(0, 3);
	cout << s << endl;

	s.erase(5, 30);
	cout << s << endl;

}

int main()
{
	test_string8();

	return 0;
}