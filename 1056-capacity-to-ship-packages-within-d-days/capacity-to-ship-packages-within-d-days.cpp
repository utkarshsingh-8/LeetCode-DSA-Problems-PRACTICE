class Solution {
public:

    int findDays(vector<int> &weights,int capacity)
    {
        int days = 1, load = 0;

        for(int i = 0; i < weights.size(); i++)
        {

            if(load + weights[i] > capacity)
            {
                days += 1;
                load = weights[i];  
            }
            else
            {
                load += weights[i];
            }
            
        }

        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int n  = weights.size();
        int sum = 0;
        int maxi = INT_MIN;

        for(int i = 0; i < n; i++)
        {
            sum += weights[i];
            maxi = max(maxi,weights[i]);
        }

        int start = maxi;
        int end = sum;
        
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            int reqDays = findDays(weights,mid);

            if( reqDays <= days)
                end = mid - 1;

            else
                start = mid + 1;

        }

        return start;
        
    }
};