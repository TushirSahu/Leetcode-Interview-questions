class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
       for(auto &i:nums){
           if(i%2==0) i=0;
           else i=1;
       }   
      
        unordered_map<int,int> mpp;
        int ans=0,prefix=0;
        for(auto it:nums){
            prefix+=it;
            if(prefix==k) ans++;
            if(mpp.find(prefix-k)!=mpp.end())ans+=mpp[prefix-k];
            mpp[prefix]++;
        }
        return  ans;
    }
};