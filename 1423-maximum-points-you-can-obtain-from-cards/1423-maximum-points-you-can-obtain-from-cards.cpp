class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
       long long int res=0,sum=0;
        // int sum=0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        long long int curr=sum;
        for(int i=k-1;i>=0;i--){
            curr-=cardPoints[i];
            curr+=cardPoints[n-k+i];
            sum=max(sum,curr);
        }
        return sum;
        
    }
};