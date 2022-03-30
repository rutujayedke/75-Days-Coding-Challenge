class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int> m;
        int n = nums.size();
        int result = 0;
        for(int i=0; i<n; i++){
            if(m.find(nums[i]) != m.end()){
                m.find(nums[i])->second++;
            }else{
                m.insert(pair<int,int>(nums[i], 1));
            }
        }
        for(auto i:m){
            if(i.second > 1){
                result = i.first;
            }
        }
    return result;
    }
};