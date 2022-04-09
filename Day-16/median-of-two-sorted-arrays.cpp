class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int left_max = 0;
        int right_min = 0;
        
        if(n > m ){
            return findMedianSortedArrays(nums2, nums1);
        }
        
        int l = 0;
        int r = n;
        int mid = (n+m+1)/2;
        
        while(l<=r){
            int mid2 = (l+r) /2;
            int la = mid2;
            int lb = mid-mid2;
            double res = 0.0;
            int left1 = (la > 0)? nums1[la - 1]: INT_MIN; 
            int left2 = (lb > 0) ? nums2[lb - 1] : INT_MIN;
            int right1 = (la < n) ? nums1[la] : INT_MAX;
            int right2 = (lb < m) ? nums2[lb] : INT_MAX;
            
            if(left1 <=right2  and left2 <=right1){
                if((m+n)%2==0){
                    left_max = max(left1,left2);
                    right_min = min(right1,right2);
                    return (left_max + right_min) * 1.0 / 2;
                    
                }
                return max(left1, left2);
            }
            else if(left1 > right2){
                r = mid2-1;
            }else{
                l = mid2+1;
            }
        }
        return 0.0;
    }
};