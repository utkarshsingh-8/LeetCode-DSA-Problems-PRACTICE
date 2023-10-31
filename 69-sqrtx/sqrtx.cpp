class Solution {
public:
    int mySqrt(int x) {

        if(x == 0 || x == 1)
            return x;

        long long int start = 1,end = x;
        long long int mid = -1;

        while(start <= end)
        {
            mid = start + (end - start)/2;
    
            if(mid * mid == x)
                return mid;

            else if(mid * mid < x)
                start = mid + 1;

            else
                end = mid - 1;

        }  

           return floor(end); 
    }
};