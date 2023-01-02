#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;
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

void TestPushBack()
{
	string s;
	s.reserve(1000);
	size_t sz = s.capacity();
	cout << "capacity changed: " << sz << '\n';

	cout << "making s grow:\n";
	for (int i = 0; i < 100; ++i)
	{
		s.push_back('c');
		if (sz != s.capacity())
		{
			sz = s.capacity();
			cout << "capacity changed: " << sz << '\n';
		}
	}
}

void test_string5()
{
	TestPushBack();
}


void test_string6()
{
	string s1("hello world");
	s1.resize(5);
	cout << s1.size() << endl;
	cout << s1.capacity() << endl;
	cout << s1 << endl << endl;

	string s2("hello world");
	s2.resize(15,'x');//在后面补齐
	cout << s2.size() << endl;
	cout << s2.capacity() << endl;
	cout << s2 << endl << endl;

	string s3("hello world");
	s3.resize(20,'x');
	cout << s3.size() << endl;
	cout << s3.capacity() << endl;
	cout << s3 << endl << endl;

}




void test_string7()
{
	string s1("hello world");
	s1.push_back(' ');
	s1.push_back('!');
	s1.append("hello world");
	cout << s1 << endl;

	string s2("!!!!!!!");
	s1.append(s2);
	cout << s1 << endl;
}



void test_string8()
{
	string s1("hello world");
	s1 += ' ';
	s1 += '!';
	s1 += "hello world";
	cout << s1 << endl;

	string s2("!!!!!!!");
	s1 += s2;
	cout << s1 << endl;
}

int main()
{
	test_string8();
	return 0;
}
