class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int j = s.size()-1;
         
        if(s =="") return 0;
        
      
        int count = 0;
        while(j>=0){
            
            if(s[j] == ' '){
               if(count == 0)
                j--;
                else break;
            }else{
              count++;
                j--;
                
            }
        }
        
        return count;
        
    }
};