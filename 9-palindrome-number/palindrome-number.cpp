class Solution {
public:
    bool isPalindrome(int n) {

        if(n<0)
        {
            return false;
        }

        bool reverseNumber = false;
        long long int rNumber=0;
        long long int num = n;

        while(n)
        {
            int rem = n%10;
            rNumber =  rNumber * 10 + rem;
            n /= 10;
        }

        if(num == rNumber)
        {
            reverseNumber = true;
        }

        return reverseNumber;

    }
};