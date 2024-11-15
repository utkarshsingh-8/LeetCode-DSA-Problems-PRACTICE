class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (int num: nums) {
            mp[num]++;
        }

        nums.clear();

        for(const auto& pair: mp) {
            if(pair.second == 2 ) {
                nums.push_back(pair.first);
            }
        }

        return nums;
    }
};