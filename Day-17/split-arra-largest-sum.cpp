class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int nums_min = INT_MIN;
        int nums_max = 0;
        
        
        for(int i=0; i<nums.size(); i++){
            nums_max += nums[i];
            nums_min = max(nums_min, nums[i]);
            
        }
        int res = nums_min;
        while(nums_min <= nums_max){
            int mid = (nums_min+nums_max)/2;
            int n = checkSplit(nums, mid);
            if(n>m){
                nums_min = mid+1;
            }else{
                res = mid;
                nums_max  =mid-1;
            }
        }
        return res;
        
    }
    
    int checkSplit(vector<int>& nums, int m){
        int count = 1;
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            if(sum+nums[i] > m){
                sum = nums[i];
                count++;
            }else{
                sum += nums[i];
            }
        }
        return count;
    }
};