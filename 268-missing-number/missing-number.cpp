class Solution {
public:
    int missingNumber(vector<int>& A) {

    int N= A.size();    
    unordered_set<int> s;

    for(int i=0; i < N; i++)
        s.insert(A[i]);

    
    for(int i = 1; i<=N; i++)
    {
        if(s.find(i) == s.end())
            return i;
    }
    
    return 0;
    }

};