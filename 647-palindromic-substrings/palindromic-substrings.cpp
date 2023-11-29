class Solution {
public:

    bool checkPalindrome(string str)
    {
        int start = 0;
        int end = str.size() - 1;

        while(start <= end)
        {
            if(str[start] != str[end])
                return false;

            start++;
            end--;
        }

       

        return true;

    }

    int countSubstrings(string s) {

        int n = s.size();
        int count = 0;

        for(int i = 0; i < n; i++)
        {
            string str = "";

            for(int j = i; j < n; j++)
            {
                str += s[j];
                if(checkPalindrome(str))
                {
                    count++;
                }
            }

        }

        return count;
        
    }
};