class Solution {
public:
    int firstUniqChar(string s) {

        unordered_map<char,int> mp;
        for(char ch : s)
        {
            mp[ch]++;
        }

        int n = s.size();

        for(int i = 0; i < n; i++)
        {
            int ele = s[i];
            if(mp[ele] == 1)
            {
                return i;
            }
        }

        return -1;
        
    }
};