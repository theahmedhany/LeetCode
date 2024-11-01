// 1299. Replace Elements with Greatest Element on Right Side : https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max_number = -1;

        for (int i = arr.size() - 1; i >= 0; i--) {
            int selected_number = arr[i];
            arr[i] = max_number;
            max_number = max(selected_number, max_number);
        }

        return arr;
    }
};