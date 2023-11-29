class Solution {
public:
    string removeOccurrences(string s, string part) {

        int n1 = part.size();
        int n2 = s.size();

        if(n2 < n1)
            return s;


        while(1)
        {
            size_t index = s.find(part);
            if(index != string :: npos)
            {
                s.erase(index,n1);
            }
            else
            {
                break;
            }
        }

        return s;

        
    }
};