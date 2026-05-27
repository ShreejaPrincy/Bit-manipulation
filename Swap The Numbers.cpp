// Time Complexity: O(1)
// Space Complexity: O(1)

class Solution {
  public:
    void swapNumbers(int &a, int &b) {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }
};
