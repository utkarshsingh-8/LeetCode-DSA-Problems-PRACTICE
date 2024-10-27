class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> frequencyMap;

        int n = nums.size();

        for(int num: nums){
            frequencyMap[num]++;
        }

        for(const auto& num : frequencyMap){
            if ( num.second > n/2){
                return num.first;
            }
        }

        return -1;        
    }
};