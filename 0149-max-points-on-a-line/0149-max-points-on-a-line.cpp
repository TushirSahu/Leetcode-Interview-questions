class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n=points.size();
        int res=0;
        
        for(int i=0;i<n;i++){
            int smpnt=1;
        unordered_map<double,int >mpp;
            for(int j=i+1;j<n;j++){
                if(points[i][0]==points[j][0] && points[i][1]==points[j][1]) smpnt++;
                else if(points[i][0]==points[j][0]) mpp[INT_MAX]++;
                else {
                    double slope=(double)(points[i][1]-points[j][1])/(double)(points[i][0]-points[j][0]);
                    mpp[slope]++;
                }
                
            }
            int currMax=0;
            for(auto &i:mpp){
                currMax=max(currMax,i.second);
            }
            currMax+=smpnt;
            res=max(res,currMax);
            
        }
        return res;
    }
};