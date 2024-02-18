class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        
		// Sort the meetings list by [startTime_i]
        sort(begin(meetings), end(meetings));
        
		// Count of meets that are held in total inside each room from 0 to n-1
        vector<int> meetsCount(n, 0);
        
		// Min Heap to store ending time of meet held in some room. 
		// This will give room number with smallest ending time
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> occupied;
		
		// Min Heap to store empty/available room number
		// This will give smallest room number that is empty
        priority_queue<int, vector<int>, greater<int>> empty;
        
		// Initially all n rooms are empty
        for(int i=0; i<n; i++) empty.push(i);
        
        // Iterate over all sorted meetings, and try to allocate a room that is empty
		// And if not empty then wait till it gets available
        for(auto& meet : meetings) {
		
            // Clear all room in which meeting is ended
            // i.e ending time of meet is less than or eq to start time of current meet
            long long currTime = meet[0];
            while(occupied.size()) {
                if(currTime < occupied.top().first) break;
                auto [time, room] = occupied.top(); occupied.pop();
                empty.push(room);
            }
            
            // If room available then allocate that room to current meeting
            int roomNum = -1;
            if(empty.size()) {
                roomNum = empty.top(); empty.pop();
                occupied.push({ meet[1], roomNum });
            }
            
            // If no room is available, then wait till a meet ends and allocate that room
            else if(occupied.size()) {
                auto [time, room] = occupied.top(); occupied.pop();   
                roomNum = room;
                long long endTime = time + meet[1] - meet[0];
                occupied.push({endTime, roomNum});
            }
            
            // Once room is allocated for meet, increment count of meets held in that room
            if(roomNum != -1) meetsCount[roomNum]++;
        }
        
		// Get the index i.e room number with maximum meetings held
        int idx = -1, maxVal = 0;
        for(int i=0; i<n; i++) {
            if(meetsCount[i] > maxVal) {
                idx = i;
                maxVal = meetsCount[i];
            }    
        }
        
        return idx;
    }
};