class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        if(nums.size() == 1)
        {
            if(nums[0])
                return 1;
            else
                return 0;
        }

        int count = 0,maxCount = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i])
            {
                maxCount++;
            }
            else 
            {
                count = max(count,maxCount);
                maxCount = 0;
            }

        }

        count = max(count,maxCount);

        return count;
        
    }
};