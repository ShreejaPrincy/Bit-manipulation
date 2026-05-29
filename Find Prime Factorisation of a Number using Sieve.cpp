//Sieve/SPF is useful when there are multiple queries.
// Time Complexity: O(N log log N) + O(log n)
// Space Complexity: O(N)
// Here N = 1000000

class Solution {
  public:
    vector<int> primeFac(int n) {
        // sieve
        vector<int> sop(1000000 + 1, 0);

        for (int i = 2; i < sop.size(); i++) {
            sop[i] = i;
        }

        for (int i = 2; i * i < sop.size(); i++) {
            if (sop[i] == i) {
                for (int j = i * i; j < sop.size(); j = j + i) {
                    if (sop[j] == j) {
                        sop[j] = i;
                    }
                }
            }
        }

        // factorization
        vector<int> ans;

        while (n > 1) {
            int factor = sop[n];
            ans.push_back(factor);

            while (n % factor == 0) {
                n = n / factor;
            }
        }

        return ans;
    }
};
