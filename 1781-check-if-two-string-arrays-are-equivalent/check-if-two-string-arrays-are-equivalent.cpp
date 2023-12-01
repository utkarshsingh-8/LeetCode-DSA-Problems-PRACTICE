class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {

        string str1 = "";
        string str2 = "";

        int size1 = word1.size();
        int size2 = word2.size();

        for(int i = 0; i < size1 ; i++)
        {
            str1 += word1[i];
        }

        for(int i = 0; i < size2 ; i++)
        {
            str2 += word2[i];
        }

        if(str1 == str2)
            return true;

        return false;
    }
};