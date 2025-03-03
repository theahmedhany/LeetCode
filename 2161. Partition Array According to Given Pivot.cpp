// 2161. Partition Array According to Given Pivot : https://leetcode.com/problems/partition-array-according-to-given-pivot/

class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
            int n = nums.size();
            vector<int> v;
            v.reserve(n);
    
            for (int i = 0; i < n; i++) {
                if (nums[i] < pivot) {
                    v.push_back(nums[i]);
                }
            }
    
            for (int i = 0; i < n; i++) {
                if (nums[i] == pivot) {
                    v.push_back(nums[i]);
                }
            }
    
            for (int i = 0; i < n; i++) {
                if (nums[i] > pivot) {
                    v.push_back(nums[i]);
                }
            }
    
            return v;
        }
    };