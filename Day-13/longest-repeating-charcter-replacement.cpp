class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxcount = 0;
        int n = s.size();
        int res = 0;
        vector <int> v(26);
        int j=0;
        for(int i=0; i<n; i++){
           v[s[i] - 'A']++; 
            maxcount = max(maxcount, v[s[i] - 'A']);
            while(j <= i && i - j + 1 - maxcount > k){
                --v[s[j] - 'A'];
            j++;
         }
         res = max(res, i - j + 1);
      }
      return res;
        }
};