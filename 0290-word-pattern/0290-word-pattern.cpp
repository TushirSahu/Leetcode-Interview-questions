class Solution {
public:
    bool wordPattern(string p, string s) {
          vector<string>str;
        string temp = "";
        
        unordered_map<char,int>mp;
        for(auto i:p) mp[i]++;
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z'){
                temp+=s[i];
                if(i == s.size()-1) str.push_back(temp);
            }
            else{
                if(temp.size()>0) str.push_back(temp);
                temp="";
            }
        }
        if(str.size() != p.size()) return false;
        vector<pair<string,char>>v;
        for(int i=0;i<str.size();i++){
            v.push_back(make_pair(str[i],p[i]));
        }
        unordered_map<string, int> m;
        for(auto i:v){
            string ss = i.first + "_" + i.second;
            m[ss]++;
        }
       unordered_map<string,int>count;
        for(int i=0;i<str.size();i++){
            count[str[i]]++;
        }
        if(mp.size() != count.size()) return false;
        if(mp.size() == m.size()) return true;
        else return false;
        return true;
    }
    
};