//Time Complexity: O(n log log n)
//Space Complexity: O(n)
class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        vector<bool> sop(n, true);

        sop[0] = false;
        sop[1] = false;

        for (int i = 2; i * i < n; i++) {
            if (sop[i] == true) {
                for (int j = i * i; j < n; j += i) {
                    sop[j] = false;
                }
            }
        }

        int cnt = 0;

        for (int i = 2; i < n; i++) {
            if (sop[i] == true) {
                cnt++;
            }
        }

        return cnt;
    }
};
