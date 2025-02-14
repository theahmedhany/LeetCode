// 1352. Product of the Last K Numbers : https://leetcode.com/problems/product-of-the-last-k-numbers/

class ProductOfNumbers {
    public:
        vector<int> v{1};
        ProductOfNumbers() {}
    
        void add(int num) {
            if (!num) {
                v.resize(1);
            } else {
                v.push_back(num * v.back());
            }
        }
    
        int getProduct(int k) {
            return v.size() <= k ? 0 : v.back() / v[v.size() - 1 - k];
        }
    };