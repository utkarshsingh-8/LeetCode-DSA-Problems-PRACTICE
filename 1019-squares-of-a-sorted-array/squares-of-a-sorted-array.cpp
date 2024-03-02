class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        
       int n = arr.size();
       vector<int> ans(n);

        int start = 0;
        int end = n - 1;
        
        for(int i = n - 1; i >= 0; i--)
        {
           if( abs(arr[start]) < abs(arr[end]) )
           {
               ans[i] = arr[end] * arr[end--];
           }
           else
           {
               ans[i] = arr[start] * arr[start++];
           }
        }

        return ans;
    }
};