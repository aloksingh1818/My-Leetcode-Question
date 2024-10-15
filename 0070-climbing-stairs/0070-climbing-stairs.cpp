class Solution {
public:
    int climbStairs(int n) {
        if(n == 0 || n == 1) {
            return 1;  // Base cases: 0 or 1 stair
        }
        
        vector<int> dp(n + 1);  // Array to store results for each step count
        dp[0] = 1;  // One way to stay on the ground (0 steps)
        dp[1] = 1;  // One way to reach the first step
        
        // Fill the dp array from step 2 to step n
        for(int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];  // The recurrence relation
        }
        
        return dp[n];  // Return the number of ways to reach step n
    }
};
