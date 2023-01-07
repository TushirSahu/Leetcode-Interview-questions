class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalg=0,totalc=0,curr=0;
        int starting_index=0;
        for(int i=0;i<gas.size();i++){
            totalg+=gas[i];
            totalc+=cost[i];
            
            curr+=gas[i]-cost[i];
            if(curr<0){
                curr=0;
                starting_index=i+1;
            }
            
        }
        if(totalg-totalc<0) return -1;
        else return starting_index;
    }
};