class Solution {
public:
    int missingNumber(vector<int>& A) {

    int N= A.size();
    int sum1 = 0;
    int sum2 = (N*(N+1)/2);
    
    for(int i = 0; i < N; i++)
        sum1 += A[i];
 
    return sum2 - sum1;
    }

};