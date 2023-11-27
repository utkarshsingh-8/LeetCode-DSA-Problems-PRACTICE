class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        unordered_map<char,int> mp;

        int count = 0, n1 = jewels.size(), n2 = stones.size();

        for(int i = 0; i < n2; i++)
        {
            mp[stones[i]]++;
        }

        for(int i = 0; i < n1; i++)
        {
            char ch = jewels[i];

            if( mp.find(ch)!= mp.end() )
            {
                 count += mp[ch];
            }
            
        }

        return count;
        
    }
};