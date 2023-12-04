class Solution {
public:
    string largestGoodInteger(string num) {
        
        vector<string> str = {"999","888","777","666","555","444","333","222","111","000"};

        for(int i = 0; i < str.size();i++)
        {
            string s = str[i];

            if(num.find(s) != string :: npos)
            {
                return s;
            }
        }

        return "";
    }
};