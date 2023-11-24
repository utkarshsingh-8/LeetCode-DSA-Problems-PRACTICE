class Solution {
public:
    int titleToNumber(string columnTitle) {

        int n = columnTitle.size();
        int ans = 0, j = 0;

        for(int i = n - 1; i >= 0; i--)
        {
        
            ans += pow(26,j++) * (columnTitle[i] - 'A' + 1);;
        }

        return ans;
        
    }
};