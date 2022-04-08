class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int l=1, r = INT_MAX;
        int res = 0;
        while(l<=r){
            int m = l+(r-l)/2;
            if(check(m, nums, maxOperations)){
                res = m;
                r = m-1;
        
            }else{
                l = m+1;
            }
        }
        return res;
    }
    bool check(int m, vector<int>& nums, int maxOperations) {
        for(int i=0; i<nums.size();i++){
            maxOperations -= (nums[i]/m);
            if(nums[i]%m ==0){
                maxOperations++;
            }
        }
        return maxOperations>=0;
    }
};