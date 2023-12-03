class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int index1 = 0, index2 = 0, n = nums.size();

        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    index1 = i;
                    index2 = j;
                    return {index1, index2};
                }
            }
        }

        return {index1, index2};
        
    }
};