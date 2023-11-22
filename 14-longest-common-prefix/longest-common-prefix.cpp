class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int n = strs.size();

        if( n == 1 )
            return strs[0];

        string ans = "";

        sort(strs.begin(),strs.end());

        string first = strs[0];
        string last = strs[n-1];
        int size1= first.size();
        int size2 = last.size();

        for(int i = 0; i < size1; i++)
        {
            if(first[i] == last[i])
            {
                ans.push_back(first[i]);
            }
            
            else{
                break;
            }
        }

        if(ans != "")
        {
            return ans;
        }

        return "";
        
    }
};