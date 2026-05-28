//Time Complexity: O(log n)
//Space Complexity: O(1)
int maximizingXor(int l, int r) {
    int x = l ^ r;
    int ans = 0;

    while (x > 0) {
        x = x >> 1;
        ans = (ans << 1) | 1;
    }

    return ans;
}

//same logic
int maximizingXor(int l, int r) {
    int x = l ^ r;
    int ans = 1;

    while (x > 0) {
        ans = ans << 1;
        x = x >> 1;
    }

    return ans - 1;
}
