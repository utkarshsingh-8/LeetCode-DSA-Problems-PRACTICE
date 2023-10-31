class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        
        int n = arr.size();
        int start = 0, end = n-1;

        if(target > arr[end])
            return n;
    
        while(start < end)
        {
            int mid = start + (end - start)/2;

            if(arr[mid] == target)
                return mid;

            else if(arr[mid] < target)
                start = mid + 1;

            else
                end = mid;
        }

        return end;
    }
};