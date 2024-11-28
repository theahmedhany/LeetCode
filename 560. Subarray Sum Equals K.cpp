// 560. Subarray Sum Equals K : https://leetcode.com/problems/subarray-sum-equals-k/description/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> subarray;

        subarray[0] = 1;
        int sum = 0;
        int answer = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int element = sum - k;

            if (subarray.find(element) != subarray.end()) {
                answer += subarray[element];
            }

            subarray[sum]++;
        }
        return answer;
    }
};