class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0;
        int n=s.size();
        int len=0;
        vector<int> m(256,-1);
        while(right<n){
            if(m[s[right]]!=-1){
                left=max(left,m[s[right]]+1);
            }
                m[s[right]]=right;
                len=max(right-left+1,len);
                right++;  
        }
        return len;
    }
};