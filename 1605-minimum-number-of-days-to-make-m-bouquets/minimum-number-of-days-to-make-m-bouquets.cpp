class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();

        if (n/k < m )
            return -1;

        int start = 1;
        int end = 0;

        for (int i = 0; i < n; i++) {
            end = max(end, bloomDay[i]);
        }

        while (start <= end) {

            int mid = start + (end - start) / 2;

            int consecutive = 0;
            int bouquets = 0;

            for (int i = 0; i < n; i++) {

                if (bloomDay[i] <= mid) {
                    consecutive++;

                    if (consecutive == k) {
                        bouquets++;
                        consecutive = 0;
                    }
                }
                else {
                    consecutive = 0;
                }
            }

            if (bouquets >= m) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return start;
    }
};
        
