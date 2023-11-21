class Solution {
public:
    bool judgeCircle(string moves) {

        int countL = 0, countR = 0, countU = 0, countD = 0;

        for(int i = 0; i < moves.size(); i++)
        {
            if(moves[i] == 'L')  countL++;
            else if(moves[i] == 'R')  countR++;
            else if(moves[i] == 'U')  countU++;
            else countD++;
        }

        if( countL == countR && countU == countD)
        {
            return true;
        }

        return false;
        
    }
};