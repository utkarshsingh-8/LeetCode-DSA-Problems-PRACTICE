class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {

        int minDiv = 1;
        int maxDiv = INT_MIN;
        int  n = nums.size();

        for(int i = 0; i < n; i++)
        {
            maxDiv = max(maxDiv,nums[i]);
        }

        int target = -1;
        int sum = 0;

        while(minDiv <= maxDiv)
        {
            int mid = minDiv + (maxDiv - minDiv)/2;
            sum = 0;

            for(int i =0; i<n; i++)
            {
                sum += (ceil)((double)nums[i]/mid);
            }

            if(sum > threshold)
                minDiv = mid + 1;

            else{
                maxDiv = mid - 1;
                target = mid;
            }

        }

        return target;
        
    }
};