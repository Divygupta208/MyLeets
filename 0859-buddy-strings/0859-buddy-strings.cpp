class Solution {

private :
    
    bool checkFreq(string &s){
        
        vector<char> v(26);
        
        for(auto &c : s){
             
            v[c-'a']++;
            
            if(v[c-'a'] > 1){
                return true;
            }
        }
        
        return false;
        
        
    }
    
public:
    bool buddyStrings(string s, string goal) {

        if(s.length() != goal.length()) return false;
        
        if(s == goal){
            
            return checkFreq(s);
        }
        
        vector<int> v ;
        
        
        for(int i = 0 ; i< s.length() ; i++){
            
            if(s[i] != goal[i]){
                
                v.push_back(i);
            }
        }
        
        if(v.size() != 2) return false;
        
        swap(s[v[0]] , s[v[1]]);
        
        return s == goal ;
        
    }
};