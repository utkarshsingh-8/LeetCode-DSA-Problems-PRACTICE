class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        int countOfJewels = 0;
        unordered_set<char> s1;

        for(int j = 0; j < jewels.size(); j++)
            s1.insert(jewels[j]);

        for(int i =0; i < stones.size(); i++)
        {
            if(s1.find(stones[i]) != s1.end())
                countOfJewels++;
        }

        return countOfJewels;
        
    }
};