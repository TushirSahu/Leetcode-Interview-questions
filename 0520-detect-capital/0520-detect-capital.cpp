class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int uppercase=0,lowercase=0;
        bool flag=false;
        if(word[0]>='A' && word[0]<='Z') flag=true;
        for(int i=1;i<n;i++){
            
                
            if(word[i]>='A' && word[i]<='Z'){
                 uppercase++;
                if(flag==false|| lowercase>0) return false;
            }
            else {
                if(uppercase>0) return false;
                lowercase++;
            }
            
                             
        }
        return true;
        
    }
};