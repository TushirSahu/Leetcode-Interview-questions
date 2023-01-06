class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> m;
        unordered_map<int,int> mpp;
        for(auto i:nums) mpp[i]++;
        for(auto it=mpp.begin();it!=mpp.end();it++){
            m.push({it->second,it->first});
            if(m.size()>k) m.pop();
        }
        vector<int> v;
        while(k--){
            v.push_back(m.top().second);
            m.pop();
        }
        return v;
    }
};