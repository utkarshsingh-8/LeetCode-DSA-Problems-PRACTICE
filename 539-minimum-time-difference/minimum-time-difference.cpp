class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {

       
        int n = timePoints.size();
        vector<int> minutes;

        int difference = 0;

        for(int i = 0; i < n; i++)
        {
            string str = timePoints[i];
            int hours = stoi(str.substr(0,2));
            int minute = stoi(str.substr(3,2));
            int totalMinute = hours * 60 + minute;
            minutes.push_back(totalMinute);
        }

        sort(minutes.begin(),minutes.end());
        int mini = INT_MAX;

        for(int i = 0; i < n - 1; i++)
        {
           int min1 = minutes[i + 1] - minutes[i];
           mini = min(mini,min1);
        }

        int lastDiff = (minutes[0] + 1440) - minutes[n-1];
        mini = min(mini,lastDiff);       

        return mini;
        
    }
};