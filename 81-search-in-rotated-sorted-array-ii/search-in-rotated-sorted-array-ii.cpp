class Solution {
public:
    bool search(vector<int>& arr, int target) {
        
        int start = 0;
        int end = arr.size() - 1;

        while(start <= end)
        {
            int mid = start + (end - start)/2;

            if(arr[mid] == target)
                return true;

            if (arr[start] == arr[mid] && arr[mid] == arr[end])
            {
                start = start + 1;
                end = end - 1;
                continue;
            }

            if(arr[start] <= arr[mid] )
            {
                if(target <= arr[mid] && target >= arr[start])
                    end = mid - 1;

                else 
                    start = mid + 1;
            }
            else
            {
                if(target <= arr[end] && target >= arr[mid])
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }

        return false;
    }
};