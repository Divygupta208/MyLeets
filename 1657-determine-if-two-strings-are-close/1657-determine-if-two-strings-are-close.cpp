class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        if(word1.length() != word2.length()) return false;
        
        vector<int> freq1(26);
        vector<int> freq2(26);
        
        for(int i = 0 ; i<word1.length() ; i++){
            
            freq1[word1[i]-'a']++;
            freq2[word2[i]-'a']++;
            
        }
        
        for(auto &c : word1){
            
            if(freq1[c-'a'] != 0 && freq2[c-'a']!=0){
                continue;
            }else if(freq1[c-'a'] == 0 && freq2[c-'a'] == 0){
              continue;   
            }else{
                return false;
            }
            
        }
        
        sort(freq1.begin() , freq1.end());
        sort(freq2.begin() , freq2.end());
        
        
        for(int i = 0 ; i< freq1.size() ; i++){
            
            if(freq1[i] != freq2[i]){
                return false ;
            }
        }
        
        return true;
    }
};