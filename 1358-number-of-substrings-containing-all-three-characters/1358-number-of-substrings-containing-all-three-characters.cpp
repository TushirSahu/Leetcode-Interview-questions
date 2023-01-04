class Solution {
public:
    int numberOfSubstrings(string s) {
        int l=0,r=0;
        int n=s.size();
        unordered_map<char,int> m;
        int res=0;
        while(r<n){
            m[s[r]]++;
            while(m['a'] && m['b'] && m['c']){
                res+=s.size()-r;
                m[s[l]]--;
                l++;
            }
            r++;
        }
        return res;
    }
};