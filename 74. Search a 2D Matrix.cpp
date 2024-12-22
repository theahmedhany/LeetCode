// 74. Search a 2D Matrix : https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top = matrix.size();
        int bottom = matrix[0].size();

        int left = 0;
        int right = top * bottom - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int Position = matrix[mid / bottom][mid % bottom];

            if (Position == target) {
                return true;
            } else if (Position < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return false;
    }
};
