class Solution {
public:
    int strStr(string haystack, string needle) {

        int x = haystack.size(), y = needle.size();

        if(y == 0) return -1;
        if(x == 1 && y == 1) return 0;

        int i = 0, j = 0;
  
        while( i < x )
        {
            j = 0;
            while(j < y)
            {
                if(haystack[i+j] != needle[j])
                    break;

                if(j == y - 1)
                    return i;

                j++;
            }

            i++;
        }

        return -1;
        
    }
};