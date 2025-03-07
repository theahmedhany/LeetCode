// 448. Find All Numbers Disappeared in an Array : https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> answer;

        for (int i = 0; i < nums.size(); i++) {
            int number = abs(nums[i]) - 1;

            if (nums[number] > 0) {
                nums[number] = -nums[number];
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                answer.push_back(i + 1);
            }
        }

        return answer;
    }
};