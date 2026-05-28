//Time Complexity: O(log n)
//Space Complexity: O(1)
class Solution {
  public:
    int setBit(int n) {
        int mask=1;
        while(n&mask){
            mask=mask<<1;
        }
        return n|mask;
    }
};
