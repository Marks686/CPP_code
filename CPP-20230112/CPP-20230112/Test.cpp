#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>

//136. 只出现一次的数字
//https://leetcode.cn/problems/single-number/
//class Solution {
//public:
//    int singleNumber(vector<int>& nums) {
//        int ret = 0;
//        for (auto e : nums)
//            ret ^= e;
//        return ret;
//    }
//};
//118. 杨辉三角
//https://leetcode.cn/problems/pascals-triangle/
//class Solution {
//public:
//    vector<vector<int>> generate(int numRows) {
//        vector<vector<int>> vv;
//        vv.resize(numRows);
//        for (size_t i = 0; i < vv.size(); ++i)
//        {
//            vv[i].resize(i + 1, 0);
//            vv[i][0] = vv[i][vv[i].size() - 1] = 1;
//        }
//        for (size_t i = 0; i < vv.size(); ++i)
//        {
//            for (size_t j = 0; j < vv[i].size(); ++j)
//            {
//                if (vv[i][j] == 0)
//                {
//                    vv[i][j] = vv[i - 1][j] + vv[i - 1][j - 1];
//                }
//            }
//        }
//        return vv;
//    }
//};