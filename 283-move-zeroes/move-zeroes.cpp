class Solution {
public:
    void moveZeroes(vector<int>& a) {
        
        int i = 0, j = 0;
        int n = a.size();

        for(int i = 0; i < n; i++)
        {
            if(a[i] != 0 )
            {
                a[j++] = a[i];
            }
           
        }

        for( ; j<n; j++ )
        {
            a[j] = 0;
        }


    }
};