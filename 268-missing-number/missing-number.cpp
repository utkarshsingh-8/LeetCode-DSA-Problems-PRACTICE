class Solution {
public:
    int missingNumber(vector<int>& A) {

    int N= A.size();
    int sum1 = 0, sum2 = 0;
    
    for(int i = 0; i < N; i++)
        sum1 += A[i];
        
    for(int i = 1; i <= N ; i++)
        sum2 += i;
        
    return sum2 - sum1;


    }

};