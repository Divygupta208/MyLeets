class Solution {
public:
    bool detectCapitalUse(string word) {
        
        bool isCap = false;
        
        if(word[0] >= 'A' && word[0] <= 'Z'){
            isCap = true;
        }
        
        int countCap = 0;
        
        for(int i = 1 ; i<word.length() ; i++){
            
            if(word[i] >= 'A' && word[i]<='Z'){
                countCap++;
            }
            
        }
        
        if(isCap && (countCap == word.length()-1 || countCap == 0)){
            return true;
        }
        
        if(!isCap && countCap == 0){
            return true;
        }
        
        
        
        return false;
        
        
    }
};