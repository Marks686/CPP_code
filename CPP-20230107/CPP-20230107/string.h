#pragma once
#include<assert.h>
namespace bit
{
	class string
	{
	public:
		typedef char* iterator;

		iterator begin()
		{
			return _str;
		}

		iterator end()
		{
			return _str + _size;
		}






		string(const char* str)
		{
			_size = strlen(str);
			_capacity = _size;
			_str = new char[_capacity + 1];

			strcpy(_str, str);
		}

		
		const char* c_str()
		{
			return _str;
		}

		//·µ»Ø_size
		size_t size()
		{
			return _size;
		}

		//·µ»ØposÎ»ÖÃ×Ö·û
		char& operator[](size_t pos)
		{
			assert(pos < _size);
			return _str[pos];
		}



		void reserve(size_t n)
		{
			char* tmp = new char[n + 1];
			strcpy(tmp, _str);
			delete[] _str;
			_str = tmp;
			_capacity = n;
		}

		void push_back(char ch)
		{
			if (_size == _capacity)
			{
				reserve(_capacity * 2); 
			} 
			_str[_size] = ch;
			++_size;
			_str[_size] = '\0';
		}

		void append(const char* str)
		{
			size_t len = strlen(str);
			if (_size + len > _capacity)
			{
				reserve(_size + len);
			}

		}


		string& operator+=(char ch)
		{
			push_back(ch);
			return *this;
		}

		string& operator+=(const char* str)
		{
			append(str);
			return *this;
		}


	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};

	void test_string1()
	{
		string s1("hello world");
		cout << s1.c_str() << endl;


		for (size_t i = 0; i < s1.size(); ++i)
		{
			s1[i]++;
		}
		cout << s1.c_str() << endl;


		//µü´úÆ÷
		string::iterator it1 = s1.begin();
		while (it1 != s1.end())
		{
			(*it1)--;
			++it1;
		}
		cout << s1.c_str() << endl;


		//·¶Î§for
		for (auto ch : s1)
		{
			cout << ch << " ";
		}
		cout << endl;
	} 


	void test_string2()
	{
		string s1("hello");
		s1 += ' ';
		s1 += '!';
		s1 += '!';

		//s1 += "world hello world";

		cout << s1.c_str() << endl;
	}
}
