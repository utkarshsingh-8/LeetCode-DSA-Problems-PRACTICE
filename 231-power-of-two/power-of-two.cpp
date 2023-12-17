class Solution {
public:
   
   long long isPower(int n)
   {
         if(n == 1) return 2;
         return 2 * isPower(n-1);
   }

    bool isPowerOfTwo(int n) {

        if(n == 1) return true;

       for(int i = 1; i < n; i++)
       {
           if(isPower(i) > n)
           {
               return false;
           }
           
           if(isPower(i) == n)
           {
               return true;
           }
       }

       return false;

    }
};