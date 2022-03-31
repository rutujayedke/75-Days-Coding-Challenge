class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int first = 0;
        int last = 0;
        int far =0;
        int jump = 0;
        
        for(int i =0; i< n-1; i++){
           far = max(far, i+nums[i]); 
            
            if(i == last){
                jump++;
                last = far;
            }
        }
        return jump;
        
    }
};