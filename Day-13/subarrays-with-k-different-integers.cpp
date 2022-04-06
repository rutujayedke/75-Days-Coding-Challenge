class Solution {
public:
    int subarraysWithAtmost(vector<int>& nums, int k) {
        int n = nums.size();
        int i=0; int j=0;
        int count =0;
        map<int, int>m;
        
        while(i < n){
            m[nums[i]]++;
            while(m.size() > k){
                
                auto it = m.find(nums[j]);
                it->second --;
                if(it->second ==0){
                    m.erase(it);
                }
                j++;
                
            }
            count += i-j+1;
            i++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       return(subarraysWithAtmost(nums,k) - subarraysWithAtmost(nums, k-1));
    }
};