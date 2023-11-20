class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        int n = s.size();

        string ans(n,' ');

        for(int  i = 0; i < n; i++)
        {
            int val = indices[i];
            ans[val] = s[i];
        }

        return ans;

    }
};