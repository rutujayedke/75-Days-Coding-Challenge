class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> v;
        for(auto i: intervals){
            if(v.empty() || v.back()[1] < i[0]) {
                v.push_back(i);
            } else {
                v.back()[1] = max(v.back()[1], i[1]);
            }
            
        }
        return v;
        
    }