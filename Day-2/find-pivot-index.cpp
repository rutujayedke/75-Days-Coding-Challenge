class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum =0;
        int rightsum =0;
        
        for(int i=1; i<nums.size();i++){
            rightsum += nums[i];
        }
        
        for(int i=0; i<nums.size();i++){
            if(leftsum == rightsum){
                return i;
            }
            if(i == nums.size()-1){
                rightsum = 0;
            }else{
                leftsum += nums[i];
                rightsum -= nums[i+1];
            }
        }
        return -1;
    }
};