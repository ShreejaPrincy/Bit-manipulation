//Time Complexity: O(n * 2^n)
//Space Complexity: O(n * 2^n)
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();

        for (int mask = 0; mask < (1 << n); mask++) {
            vector<int> temp;

            for (int j = 0; j < n; j++) {
                if (mask & (1 << j)) {
                    temp.push_back(nums[j]);
                }
            }

            ans.push_back(temp);
        }

        return ans;
    }
};


//mycode
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        int range = (1 << n) - 1;

        for (int i = 0; i <= range; i++) {
            vector<int> temp;
            int mask = 1;

            for (int j = 0; j < n; j++) {
                if (mask & i) {
                    temp.push_back(nums[j]);
                }

                mask = mask << 1;
            }

            ans.push_back(temp);
        }

        return ans;
    }
};
