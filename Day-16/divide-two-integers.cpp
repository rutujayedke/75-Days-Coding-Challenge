class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == 1<<31 && divisor == -1){
            return INT_MAX;
        }
        bool sign = false;
        if(dividend >= 0 && divisor >=0){
            sign = true;
        }
        
        dividend = abs(dividend);
        divisor = abs(divisor);
        int res = 0;
        while(dividend - divisor >=0){
            int count =0;
            while(dividend - (divisor << 1 << count) >= 0){
                count++;
            }
            res += 1<<count;
            dividend -=divisor <<count;
        }
        return sign ? res: -res;
    }
};