//Approach - 1(TLE) (brute force)
//Time Complexity: O(n * log n)
//Space Complexity: O(1)

class Solution {
  public:
    int countSetBits(int n) {
        int cnt = 0;

        for (int N = 1; N <= n; N++) {
            int temp = N;

            while (temp != 0) {
                temp = temp & (temp - 1);  // removes rightmost set bit
                cnt++;
            }
        }

        return cnt;
    }
};


//Approach - 2 (tle) (brute force)
//Time Complexity: O(n * log n)
//Space Complexity: O(1)

class Solution {
  public:
    int countsetbit(int n) {
        int cnt = 0;

        while (n > 0) {
            cnt += (n & 1);
            n = n >> 1;
        }

        return cnt;
    }

    int countSetBits(int n) {
        int cnt = 0;

        for (int N = 1; N <= n; N++) {
            cnt += countsetbit(N);
        }

        return cnt;
    }
};


//Approach - 3
//Time Complexity: O(log n)
//Space Complexity: O(log n)
class Solution {
  public:
    int findpowerof2(int n) {
        int i = 0;

        while ((1LL << (i + 1)) <= n) {
            i++;
        }

        return i;
    }

    int countSetBits(int n) {
        if (n == 0 || n == 1) return n;

        int x = findpowerof2(n);

        int bitTillpowerof2 = x * (1LL << (x - 1));
        int msbbit = n - (1LL << x) + 1;
        int remaining = n - (1LL << x);

        return bitTillpowerof2 + msbbit + countSetBits(remaining);
    }
};
