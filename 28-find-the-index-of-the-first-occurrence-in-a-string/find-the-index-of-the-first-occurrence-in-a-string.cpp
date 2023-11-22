class Solution {
public:
    int strStr(string haystack, string needle) {

        int x = haystack.size(), y = needle.size();
          
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