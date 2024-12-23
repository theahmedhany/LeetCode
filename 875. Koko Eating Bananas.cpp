// 875. Koko Eating Bananas : https://leetcode.com/problems/koko-eating-bananas/

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        long long right = 1e9 + 1;

        while (left < right) {
            int mid = (left + right) / 2;
            int total_h = 0;

            for (int i = 0; i < piles.size(); i++) {
                total_h += ceil((double)piles[i] / mid);
            }

            if (total_h > h) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        return right;
    }
};