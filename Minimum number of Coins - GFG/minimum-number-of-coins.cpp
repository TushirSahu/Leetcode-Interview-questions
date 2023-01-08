//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int N)
    {
        // code here
        vector<int> v1;
   
   vector<int>v(10,0);
        v[0] = 1;
        v[1] = 2;
        v[2] = 5;
        v[3] = 10;
        v[4] = 20;
        v[5] = 50;
        v[6] = 100;
        v[7] = 200;
        v[8] = 500;
        v[9] = 2000;
        
        for(int i=9;i>=0;i--){
            while(N>=v[i]){
                N-=v[i];
                v1.push_back(v[i]);
            }
        }
        return v1;
  
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends