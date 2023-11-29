class Solution {
public:

    bool checkPalindrome(string str,int index)
    {
        str.erase(index,1);

        int start = 0, end = str.size() - 1;

        while(start <= end)
        {
            if(str[start++] != str[end--])
            {
                return false;
            }
        }

        return true;
                
    }

    bool validPalindrome(string s) {

        int start = 0, end = s.size() - 1;

        while(start <= end)
        {
            if(s[start] != s[end])
            {
                char ch1 = s[start], ch2 = s[end];

                if(checkPalindrome(s,start))
                {
                    return true;  
                }
                else
                {
                    s[start] = ch1;
                }

                if(checkPalindrome(s,end))
                {
                    return true;  
                }
                else
                {
                    s[end] = ch2;
                }

                return false;           

                
            }
            
            start++;
            end--;
        }

        return true;
        
    }
};