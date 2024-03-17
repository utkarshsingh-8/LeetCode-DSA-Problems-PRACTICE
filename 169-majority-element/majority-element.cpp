class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        int size = nums.size();
        int rem = size/2;

        for(int i = 0; i < size; i++)
        {
            mp[nums[i]]++;
        }

        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            if(it->second > rem)
            {
                return it->first;
            }
        }

        return -1;
    }
};