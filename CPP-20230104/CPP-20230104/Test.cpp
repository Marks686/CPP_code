#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;

//917. 仅仅反转字母
//https://leetcode.cn/problems/reverse-only-letters/
class Solution {
public:
    string reverseOnlyLetters(string s) {
        size_t begin = 0, end = s.size() - 1;
        while (begin < end)
        {
            while (begin < end && !isalpha(s[begin]))
            {
                ++begin;
            }

            while (begin < end && !isalpha(s[end]))
            {
                --end;
            }
            swap(s[begin], s[end]);
            ++begin;
            --end;
        }
        return s;
    }
};