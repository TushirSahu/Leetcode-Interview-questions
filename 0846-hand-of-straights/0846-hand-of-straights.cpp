class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        sort(hand.begin(),hand.end());
        unordered_map<int,int> m;
        for(auto i:hand)m[i]++;
        for(int i=0;i<n;i++){
            if(m[hand[i]]==0) continue;
            int cnt=1;
            int st=hand[i];
            while(cnt<=groupSize){
                if(m[st]==0) return false;
                m[st]--;
                cnt++;
                    st++;
            }
            
                
        }
        return true;
        
    }
};