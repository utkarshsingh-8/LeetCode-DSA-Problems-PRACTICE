class Solution {
public:
    bool isAnagram(string s, string t) {

        int n1 = s.size(); 
        int n2 = t.size(); 

        if(n1 != n2) return false;

        unordered_map<char,int> m;
        for(int i = 0; i < n1; i++)
        {
            m[s[i]]++;
        }

        for(int i = 0; i < n2; i++)
        {
           if(m.find(t[i]) != m.end() && m[t[i]] > 0 )
           {
               m[t[i]]--;
           } 
           else
           {
               return false;
           }
        }

        return true;
        
    }
};