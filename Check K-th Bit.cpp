// Time Complexity: O(1)
// Space Complexity: O(1)

class Solution {
  public:
    bool checkKthBit(int n, int k) {
        int mask = 1 << k;
        //return n & mask ? true : false;
        return (n & mask) != 0;
    }
};
