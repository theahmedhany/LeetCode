// 535. Encode and Decode TinyURL : https://leetcode.com/problems/encode-and-decode-tinyurl/description/

class Solution {
public:
    map<string, string> originalUrl;
    int start = 1;
    string base = "http://flkdsjfkl.com/4";

    string encode(string longUrl) {
        string result = base + to_string(start);
        start++;
        originalUrl[result] = longUrl;
        return result;
    }

    string decode(string shortUrl) { return originalUrl[shortUrl]; }
};