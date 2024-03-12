class Solution {
public:
    void moveZeroes(vector<int>& a) {
        
        for(int i = 0, curr = 0; i < a.size(); ++i)
        {
            if(a[i])
            {
                swap(a[i],a[curr++]);
            }
        }


    }
};