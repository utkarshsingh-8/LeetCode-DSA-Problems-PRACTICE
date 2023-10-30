class Solution {
public:
    int findMin(vector<int>& arr) {
        
        int n = arr.size();      
        int start = 0;
        int end = n-1;
        
        while(start <= end) {
            
            if (arr[start] <= arr[end]) return arr[start];
            
            // Calculate mid
            int mid = start + (end-start)/2;
            
            // Calculate next and previous
            int next = (mid + 1) % n; 
            int prev = (mid + n - 1) % n; 
            
           
            if ((arr[mid] <= arr[next]) && (arr[mid] <= arr[prev])) {
                return arr[mid];
            }
           
            else if (arr[start] <= arr[mid]) {
                start = mid + 1;
            }
          
            else {
                end = mid - 1;
            }
        }
        return arr[start];
    }
};