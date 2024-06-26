class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long  n = nums.size(); 
        long long  m = *max_element(nums.begin(), nums.end()); 
        long long i = 0, j = 0, count = 0, ans = 0; 
        while (j < n) { 
            if (nums[j] == m) count++ ; 
            if (count >= k) { 
                while (count >= k) { 
                    ans += n - j; 
                    if (nums[i] == m) { 
                        count--; 
                    } 
                    i++; 
                } 
            } 
            j++; 
        } 
        return ans; 
    }
};