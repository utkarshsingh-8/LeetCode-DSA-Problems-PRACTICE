class Solution {
public:

    bool daysRequired(vector<int>& bloomDay, int day, int m, int k)
    {
        int count = 0, totalDay = 0, n = bloomDay.size();

        for(int  i = 0; i < n; i++)
        {
            if(bloomDay[i] <= day)
                count++;

            else{
                totalDay += (count/k);
                count = 0;
            }
            
        }
        
        totalDay += (count/k);
        return totalDay >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        int n = bloomDay.size();

        long long value = (m * 1LL) * (k * 1LL);
        if(value > n) 
            return -1;

        int mini = INT_MAX, maxi = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            mini = min(mini, bloomDay[i]);
            maxi = max(maxi, bloomDay[i]);
        }

        int start = mini, end = maxi;

        while(start <= end)
        { 
            int mid = start + (end - start)/2;

            if( daysRequired(bloomDay,mid,m,k) )
                end = mid - 1;

            else
                start = mid + 1;
    
        }

        return start;

    }
};