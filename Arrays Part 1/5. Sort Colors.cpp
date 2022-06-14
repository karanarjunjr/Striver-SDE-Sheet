//https://leetcode.com/problems/sort-colors/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l, m, h;
        l = m = 0;
        h = nums.size() - 1;
        
        while (m <= h) {
            switch (nums[m]) {
                case 0:
                    swap(nums[l++], nums[m++]);
                    break;
                case 1:
                    m++;
                    break;
                case 2:
                    swap(nums[h--], nums[m]);
                    break;
            }
        }
    }
};
