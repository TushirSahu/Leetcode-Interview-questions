class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=INT_MIN,zero=0;
        int start=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)zero++;
            while(zero>k){
                if(nums[start]==0) zero--;
                start++;
            }
            maxi=max(maxi,i-start+1);
        }
        return maxi;
        
    }
};