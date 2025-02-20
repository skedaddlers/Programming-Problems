class Solution {
    public:
        int numTilings(int n) {
            long long mod = 1000000007;
            vector<long long> dp;
            if(n == 1) return 1;
            if(n == 2) return 2;
            if(n == 3) return 5;
            dp.push_back(1);
            dp.push_back(2);
            dp.push_back(5);
            for(int i = 3; i < n; i++){
                dp.push_back(((dp[i-1] * 2) % mod + dp[i-3]) % mod);
            }
            return dp[n-1];
        }
    };