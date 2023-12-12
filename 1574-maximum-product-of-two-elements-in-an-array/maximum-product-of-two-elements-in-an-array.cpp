class Solution {
public:
    int maxProduct(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        int n = nums.size();

        int index1 = nums[n-2] - 1;
        int index2 = nums[n-1] - 1;

        return index1 * index2;
        
    }
};