#define _CRT_SECURE_NO_WARNINGS
//https://leetcode.cn/problems/remove-duplicates-from-sorted-array/
//26. 删除有序数组中的重复项
//class Solution {
//    public int removeDuplicates(int[] nums) {
//        // 使用双指针
//        if (nums == null || nums.length == 1) {
//            return nums.length;
//        }
//        int i = 0, j = 1;
//        while (j < nums.length) {
//            if (nums[i] == nums[j]) {
//                j++;
//            }
//            else {
//                i++;
//                nums[i] = nums[j];
//                j++;
//            }
//        }
//        return i + 1;
//    }
//}