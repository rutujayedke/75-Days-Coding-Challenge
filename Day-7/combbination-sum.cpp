class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>> result;
        vector<int> r;
        sort(candidates.begin(), candidates.end());
        candidates.erase(unique(candidates.begin(),candidates.end()), candidates.end());

        findcombinationSum(candidates,target, result, r, 0);
 
    return result;
    }
    
    void findcombinationSum(vector<int>& candidates, int target,
                 vector<vector<int> >& result, vector<int>& r,
                 int i){
    if (target == 0) {
        result.push_back(r);
        return;
    }
    while (i < candidates.size() && target - candidates[i] >= 0) {
 
        r.push_back(candidates[i]); 
        findcombinationSum(candidates, target - candidates[i], result, r, i);
        i++;
        r.pop_back();
    }
}

};