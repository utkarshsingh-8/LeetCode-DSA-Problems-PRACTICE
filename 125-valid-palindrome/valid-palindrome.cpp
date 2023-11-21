class Solution {
public:
    bool isPalindrome(string s) {
        
        int n = s.size();
        string str = "";

        for (int i = 0; i < n; i++)
        {
            if (isalpha(s[i]))
            {
                if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    s[i] = s[i] - 'A' + 'a';
                    str.push_back(s[i]);
                }

                else
                {
                    str.push_back(s[i]);
                }
            }

            else if (isdigit(s[i]))
            {
                str.push_back(s[i]);
            }
        }

        int n1 = str.size();
        int start = 0;
        int end = n1 - 1;

        while (start <= end) {
            if (str[start] != str[end]) {
            return false;
            }

            start++;
            end--;
        }

        return true;
    }
};