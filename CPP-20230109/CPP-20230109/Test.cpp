#define _CRT_SECURE_NO_WARNINGS
//https://leetcode.cn/problems/remove-duplicates-from-sorted-array/
//26. ɾ�����������е��ظ���
//class Solution {
//    public int removeDuplicates(int[] nums) {
//        // ʹ��˫ָ��
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