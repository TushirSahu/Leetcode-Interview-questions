class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int n=tasks.size();
        // sort(tasks.begin(),tasks.end());
        map<int,int> m;
        for(int i=0;i<n;i++){
           m[tasks[i]]++;
        }
        int res=0;
        for(auto i:m){
            if(i.second==1) return -1;
            if(i.second%3==0){
                res+=i.second/3;
            }
            else res+=i.second/3+1;
        }
        return res;
        
       
    }
};