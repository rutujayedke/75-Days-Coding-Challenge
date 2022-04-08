class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int sum = 0;
        int max =0;
        for(int i=0; i< n;i++){
            if(weights[i] > max){
                max = weights[i];
            }
            sum+=weights[i];
        }
        int l=max;
        int r = sum;
        int result;
        
        while(l<=r){
            int mid = (l+r)/2;
            if(fun_days(mid, weights,days )){
                result = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return result;
        
    }
    bool fun_days(int mid, vector<int>& weights, int days ){
        int sum =0;
        int d = 1;
        for(int i=0;i<weights.size();i++){
            if(sum+weights[i] <=mid){
                sum+=weights[i];
            }else{
                sum = weights[i];
                d++;
            }
        }
        if(d<=days){
            return true;
        }
        return false;
    }
};