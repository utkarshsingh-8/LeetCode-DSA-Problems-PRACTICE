class Solution {
public:
    int strStr(string haystack, string needle) {

        int x = haystack.size(), y = needle.size();

        if(y == 0) return -1;
        if(x == 1 && y == 1) return 0;

        for(int i = 0; i <= x-y; i++)
        {
            for(int j = 0; j < y; j++)
            {
                if(haystack[i+j] != needle[j]) 
                    break;

                if( j == y-1)
                    return i;
                
            }
        }

        return -1;
        
    }
};