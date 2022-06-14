//https://leetcode.com/problems/next-permutation/submissions/
// Can be optimized even more with Binary Search
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        for (int i = n - 2; i >= 0; i--) {
            int mini = INT_MAX;
            int index = -1;
            
            if (nums[i] < nums[i + 1]) {
                for (int j = n - 1 ; j > i; j--) {
                    if (nums[j] > nums[i]) {
                        index = j;
                        break;
                    }
                }

                swap(nums[i], nums[index]); 
                sort(nums.begin() + i + 1, nums.end());
                return;
            }
        }
        
        sort(nums.begin(), nums.end());
    }
};
