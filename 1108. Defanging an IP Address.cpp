// 1108. Defanging an IP Address : https://leetcode.com/problems/defanging-an-ip-address/description/

class Solution {
public:
    string defangIPaddr(string address) {
        string txt;
        for (int i = 0; i < address.size(); i++) {
            if (address[i] == '.') {
                txt += "[.]";
            } else {
                txt += address[i];
            }
        }
        return txt;
    }
};