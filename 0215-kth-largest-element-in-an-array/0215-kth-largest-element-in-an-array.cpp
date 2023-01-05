class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m.push(nums[i]);
        }
        while(m.size()!=k){
            m.pop();
        }
        return m.top();
    }
};