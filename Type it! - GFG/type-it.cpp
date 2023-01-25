//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int minOperation(string s) {
        // code here
        int n=s.size();
        int ans=0;
        for(int i=0;i<=n/2;i++){
            int j=i+1;
            string s1=s.substr(0,j);
            string s2=s.substr(j,j);
            if(s1==s2) ans=j-1;
        }
        return n-ans;
    }
    // abca  
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.minOperation(s) << "\n";
    }
    return 0;
}

// } Driver Code Ends