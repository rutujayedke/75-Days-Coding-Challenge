class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size()-1;
        while (i > 0 && nums[i-1] >= nums[i])
            i--;
        for (int j = nums.size()-1; i > 0 && j >= 0; j--) {
            if (nums[j] > nums[i-1]) {
                swap(nums[j], nums[i-1]);
                break;
        }
      }
      reverse(nums.begin()+i, nums.end());
    }
};