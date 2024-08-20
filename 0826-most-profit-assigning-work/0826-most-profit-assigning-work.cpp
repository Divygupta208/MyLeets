class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        
    int n = difficulty.size();
    int m = worker.size();

    vector<pair<int, int>> vec;

    // Pair difficulty with corresponding profit
    for (int i = 0; i < n; i++) {
        vec.push_back({difficulty[i], profit[i]});
    }

    // Sort pairs by difficulty (first element of the pair)
    sort(begin(vec), end(vec));

    // Update profits so that for each difficulty, it stores the max possible profit up to that difficulty
    for (int i = 1; i < vec.size(); i++) {
        vec[i].second = max(vec[i].second, vec[i - 1].second);
    }

    int totalProfit = 0;

    // Iterate through each worker's ability
    for (int i = 0; i < m; i++) {
        int diffiWorker = worker[i];
        int l = 0, r = vec.size() - 1;
        int maxProf = 0;

        // Binary search for the maximum profit the worker can achieve
        while (l <= r) {
            int mid = (l + r) / 2;

            if (vec[mid].first <= diffiWorker) {
                maxProf = vec[mid].second;  // Candidate for maximum profit
                l = mid + 1;  // Move to the right half
            } else {
                r = mid - 1;  // Move to the left half
            }
        }

        totalProfit += maxProf;
    }

    return totalProfit;
}

};