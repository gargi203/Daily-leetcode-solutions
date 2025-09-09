class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        const int MOD = 1e9 + 7;
        vector<long long> dp(n + 2, 0); // dp[i]: people who first learn the secret on day i
        dp[1] = 1;
        long long share = 0;

        for (int day = 2; day <= n; ++day) {
            // People who can start sharing today
            if (day - delay >= 1) share = (share + dp[day - delay]) % MOD;
            // People who forget today
            if (day - forget >= 1) share = (share - dp[day - forget] + MOD) % MOD;
            // New people who learn today
            dp[day] = share;
        }

        // Count people who still remember the secret at the end
        long long result = 0;
        for (int day = n - forget + 1; day <= n; ++day) {
            if (day >= 1) result = (result + dp[day]) % MOD;
        }
        return result;
    }
};
