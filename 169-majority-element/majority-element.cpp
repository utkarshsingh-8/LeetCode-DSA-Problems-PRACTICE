class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int,int> mp;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        return nums[n/2];
        
    }
};