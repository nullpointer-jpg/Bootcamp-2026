class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long currentTime = 0;
        long long totalWaiting = 0;

        for (auto customer : customers) {
            int arrival = customer[0];
            int time = customer[1];

            currentTime = max(currentTime, (long long)arrival);
            currentTime += time;

            totalWaiting += currentTime - arrival;
        }

        return (double)totalWaiting / customers.size();
    }
};