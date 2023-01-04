class Solution {
public:
    int atmost(vector<int> &nums,int k){
        int n=nums.size();
        int l=0,r=0;
        int size=0,cnt=0;
        unordered_map<int,int> mpp;
        while(r<n){
            mpp[nums[r]]++;
            if(mpp[nums[r]]==1) size++;
            while(size>k){
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0) size--;
                l++;
            }
            cnt+=r-l+1;
            r++;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
            
    }
};