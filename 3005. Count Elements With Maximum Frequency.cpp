// 3005. Count Elements With Maximum Frequency : https://leetcode.com/problems/count-elements-with-maximum-frequency/

class Solution
{
public:
    int maxFrequencyElements(vector<int> &nums)
    {
        unordered_map<int, int> freq;

        for (int num : nums)
        {
            freq[num]++;
        }

        int maxFreq = 0;
        for (auto &[num, count] : freq)
        {
            maxFreq = max(maxFreq, count);
        }

        int total = 0;
        for (auto &[num, count] : freq)
        {
            if (count == maxFreq)
            {
                total += count;
            }
        }

        return total;
    }
};