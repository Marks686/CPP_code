#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;

//https://leetcode.cn/problems/add-strings/
//415. ×Ö·û´®Ïà¼Ó
class Solution {
public:
    string addStrings(string num1, string num2) {
        int end1 = num1.size() - 1, end2 = num2.size() - 1;
        int carry = 0;
        string retStr;
        while (end1 >= 0 || end2 >= 0)
        {
            int val1 = 0, val2 = 0;
            if (end1 >= 0)
            {
                val1 = num1[end1] - '0';
            }
            if (end2 >= 0)
            {
                val2 = num2[end2] - '0';
            }
            int ret = val1 + val2 + carry;

            if (ret > 9)
            {
                ret -= 10;
                carry = 1;
            }
            else
            {
                carry = 0;
            }
            retStr.insert(0, 1, '0' + ret);
            --end1;
            --end2;


        }

        if (carry == 1)
        {
            retStr.insert(0, 1, '1');
        }
        return retStr;
    }
};