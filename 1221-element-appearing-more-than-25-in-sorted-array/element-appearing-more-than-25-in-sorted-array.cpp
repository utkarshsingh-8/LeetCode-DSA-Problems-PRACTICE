class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {

        unordered_map<int,int> mp;

        int n = arr.size();
        int ans = -1;

        for(int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }

        int times = n/4;

        for(auto i : mp)
        {
            if(i.second > times)
            {
                ans = i.first;  
                break;
            }
        }

        return ans;
        
    }
};