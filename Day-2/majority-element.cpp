class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int , int>m;
        int n = nums.size(); 
        int res = 0;
        for(int i=0; i<nums.size();i++){
            if(m.find(nums[i]) != m.end()){
                m.find(nums[i])->second++;
            }
            else{
                m.insert(pair<int, int>(nums[i],1));
            }                   
        }
        for(auto i:m){
            if(i.second > n/2 ){
                res = i.first;
            }
        }
        return res;
    }
};