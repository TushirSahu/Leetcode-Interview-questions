class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        // int l=0,r=0;
        vector<int> v(n,nums[0]);
        map<int,int> mpp;
        for(int i=1;i<n;i++){
            v[i]=v[i-1]+nums[i];
        }
        int ans=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==goal) ans++;
            ans+=mpp[v[i]-goal];
            mpp[v[i]]++;
        }
        return ans;
        }
    
};