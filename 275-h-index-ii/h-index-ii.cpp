class Solution {
public:
    int hIndex(vector<int>& citations) {

        int n = citations.size();
        if(!n) return 0;
        int start = 0, end = n - 1;
        int ans = 0;

        while(start <= end)
        {
            int mid = start + (end - start)/2;
            if(citations[mid] >= n - mid)
            {
                ans = n- mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }

        }

        return ans;
        
    }
};