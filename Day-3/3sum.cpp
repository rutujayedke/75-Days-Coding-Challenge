class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v1;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i=0; i<n;i++){
            if(i > 0 && nums[i] ==nums[i-1]){
                continue;
            }
            int j = i+1;
            int k = n - 1;
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if( sum == 0){
                    v1.push_back({nums[i], nums[j], nums[k]});
                    while(j < k && nums[j] == nums[i+1]) j++;
                    while(k > j && nums[k] == nums[k - 1]) k--;
                }
                if(sum < 0){
                    j++;
                }else{
                    k--;
                }
            }  
        }
        return v1;
    }
};