class Solution {
public:
    bool rotateString(string s, string goal) {

        int n1 = s.size(), n2 = goal.size();
        if(n1 != n2) return false;
        string s1 = s;

        for(int i = 1; i <= n1; i++)
        {

            reverse(s.begin(), s.end());
            reverse(s.begin(), s.end() - i);
            reverse(s.end() - i, s.end());

            if(s == goal)
                return true;
            else
            {
                s = s1;
            }

        }

        return false;


        
    }
};