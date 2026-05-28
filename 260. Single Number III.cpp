//Time Complexity: O(n)
//Space Complexity: O(1)
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xorr = 0;

        for (int num : nums) {
            xorr = xorr ^ num;
        }

        long long mask = xorr & (-xorr);

        int x1 = 0, x2 = 0;

        for (int num : nums) {
            if (mask & num)
                x1 = x1 ^ num;
            else
                x2 = x2 ^ num;
        }

        return {x1, x2};
    }
};
