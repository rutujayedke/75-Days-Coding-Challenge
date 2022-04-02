class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        
        int last = n-1;
        int first = 0;
        int result = 0;
        
        while(first < last){
            result = max(result, min(height[first], height[last]) * (last-first));
           
                         
            if (height[first] < height[last])
                first += 1;
                 
            else
                last -= 1;
        }
        return result;
    }
};