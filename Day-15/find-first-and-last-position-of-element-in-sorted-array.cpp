//TC: O(logn)
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> v ;
        v.push_back(first(nums, target));
        v.push_back(last(nums, target));
        
        return v;
    }
    int first(vector<int>& nums, int target){
        int mid ;
        int l=0;
        int r = nums.size()-1;
        int index = -1;
        while(l<=r){
            mid = (l+r)/2;
            if(nums[mid] == target){
                index =mid;
                r = mid -1;
            }else if(nums[mid] < target){
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
        return index;
    }
    int last(vector<int>& nums, int target){
        int mid ;
        int l=0;
        int r =nums.size()-1;
        int index = -1;
        while(l<=r){
            mid = (l+r)/2;
            if(nums[mid] == target){
                index =mid;
                l = mid+1;
            }else if(nums[mid] < target){
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
        return index;
    }
};