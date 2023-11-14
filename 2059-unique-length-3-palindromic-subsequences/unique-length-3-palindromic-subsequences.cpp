class Solution {
public:
    int countPalindromicSubsequence(string s) {
         int n = s.length(), ans = 0;
        
        vector <int> f(26,0);
        
        for (int i = 0; i < n; i++) // Frequency Calculation for each Lower-Case Letter
            f[s[i]-'a']++;
        
        // Only possibility of subsequence is XYX, where Y can be X.
        
        for (int i = 0; i < 26; i++){
            
            if (f[i] <= 1)// This character cannot be at the STARTING and the END ( cannot be X in XYX )
                continue;
            
            int first=-1, last=-1; // First occurence and Last occurence of character counter
            
            for(int j=0;j<n;j++){  // First occurence of character i
                if((s[j]-'a')==i){
                    first=j; break;
                }
            }
            
            for(int j=n-1;j>=0;j--){ // Last occurence of character i
                if((s[j]-'a')==i){
                    last=j; break;
                }
            }
            
            unordered_set<int> st; // To count the number of unique characters between the first occurence and last occurence
            
            for(int k=first+1;k<last;k++)
                st.insert((s[k]-'a'));
            // Number of unique characters = Number of Palindromic Subsequences possible with this charcter at the STARTING and the END
            ans+=st.size(); 
        }
        return ans;
    }
};