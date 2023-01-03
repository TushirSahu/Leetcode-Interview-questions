class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int l=0,maxi=0,res=0;
        map<char,int> m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
            maxi=max(maxi,m[s[i]]);
            if(i-l+1-maxi>k){
                m[s[l]]--;
                l++;
            }
            else res=max(i-l+1,res);
        }
        return res;
        
    }
};