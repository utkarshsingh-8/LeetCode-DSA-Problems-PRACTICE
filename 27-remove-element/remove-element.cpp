class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {

            if (nums[start] != val) {
                start++;
            } else if (nums[end] == val) {
                end--;
            } else if (nums[start] == val && nums[end] != val) {
                swap(nums[start++], nums[end--]);
            }
        }

        int count = 0;

        for (int num : nums) {
            if (num == val) {
                return count;
            }
            count++;
        }

        return count;
    }
};