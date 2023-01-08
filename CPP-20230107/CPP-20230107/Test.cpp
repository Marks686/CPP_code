#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
////https://leetcode.cn/problems/first-unique-character-in-a-string/
////387. 字符串中的第一个唯一字符
//class Solution {
//public:
//    int firstUniqChar(string s) {
//        int count[26] = { 0 };
//        for (auto ch : s)
//        {
//            count[ch - 'a']++;
//        }
//        for (size_t i = 0; i < s.size(); ++i)
//        {
//            if (count[s[i] - 'a'] == 1)
//            {
//                return i;
//            }
//        }
//        return -1;
//    }
//};
////https://www.nowcoder.com/practice/8c949ea5f36f422594b306a2300315da
////HJ1 字符串最后一个单词的长度
//
//int main() 
//{
//    string str;
//    getline(cin, str);
//    size_t pos = str.rfind(' ');
//    cout << str.size() - pos - 1 << endl;
//}

#include "string.h"

int main()
{
	bit::test_string2();

	return 0;
}



