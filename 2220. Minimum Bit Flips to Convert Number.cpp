//approach -1 
// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xorr = start ^ goal;
        int cnt = 0;

        while (xorr > 0) {
            cnt += (xorr & 1);
            xorr = xorr >> 1;
        }

        return cnt;
    }
};


//approach - 2
// Time Complexity: O(number of set bits)
// Space Complexity: O(1)

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xorr = start ^ goal;
        int cnt = 0;

        while (xorr > 0) {
            xorr = xorr & (xorr - 1);
            cnt++;
        }

        return cnt;
    }
};
