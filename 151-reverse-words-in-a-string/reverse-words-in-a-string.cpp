class Solution {
public:
    string reverseWords(string str) {
        
        int n = str.size();

        stringstream ss(str);
        string token = "";
        string result = "";

        while(ss >> token)
        {
            result = token + " " + result;
        }
        result.pop_back();
        
        return result;

    }
};