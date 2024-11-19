// 1189. Maximum Number of Balloons : https://leetcode.com/problems/maximum-number-of-balloons/description/

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char, int> balloons;

        for (int i = 0; i < text.size(); i++) {
            balloons[text[i]]++;
        }

        int b = balloons['b'];
        int a = balloons['a'];
        int l = balloons['l'] / 2;
        int o = balloons['o'] / 2;
        int n = balloons['n'];

        return min({b, a, l, o, n});
    }
};