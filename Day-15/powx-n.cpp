class Solution {
//TC: O(log|n|)
public:
    double myPow(double x, int n) {
        if(n==0){
            return 1;
        }
        if(x == 0){
            return 0;
        }
        if(n < 0){
            n = abs(n);
            x= 1/x;
        }
        double temp = myPow(x, n/2);
        double result = 0.0;
           
        if(n%2 == 0){
            result = temp * temp;
        }else{
            result = x* temp * temp;
        }
       return result; 
    }
};