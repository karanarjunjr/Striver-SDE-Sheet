//https://leetcode.com/problems/maximum-subarray/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0], prev = nums[0], n = nums.size();
        for (int i = 1; i < n; i++) {
            prev = max(nums[i], nums[i] + prev);
            ans = max(ans, prev);
        }
        return ans;
    }
};
