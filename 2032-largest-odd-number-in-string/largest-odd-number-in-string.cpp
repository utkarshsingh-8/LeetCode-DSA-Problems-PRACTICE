class Solution {
public:
    string largestOddNumber(string num) {
 
        int n = num.size();
        string result = "";

        for(int i = n - 1; i >= 0; i--)
        {
            if( (num[i] - '0') % 2 == 1)
            {
                result = num.substr(0,i+1);
                break;
            }
        }

        return result;    
        
    }
};