class Solution {
public:

    int uniqueMorseRepresentations(vector<string>& words) {

        vector <string> morseCode = {".-","-...","-.-.",
        "-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.",
        "---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--",
        "--.."};

        unordered_set< string > uniqueTransformation;
        
       for(auto word : words)
       {
           string transformation = "";

           for(char ch : word)
           {
               transformation += morseCode[ch - 'a'];
           }

           uniqueTransformation.insert(transformation);
       }

        return uniqueTransformation.size();
                
    }
};