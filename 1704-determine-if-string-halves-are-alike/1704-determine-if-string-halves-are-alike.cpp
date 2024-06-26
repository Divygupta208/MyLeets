class Solution {
public:
    bool halvesAreAlike(string s) {
        
        unordered_set<int> st;
        st.insert('a');
        st.insert('e');
        st.insert('i');
        st.insert('o');
        st.insert('u');
        st.insert('A');
        st.insert('E');
        st.insert('I');
        st.insert('O');
        st.insert('U');
        
        int n = s.length();
        
        int i = 0;
        int j = n/2;
        int counti = 0;
        int countj = 0; 
        while(i<n/2 && j<n){
            
            if(st.find(s[i])!= st.end()){
                counti++;
            }
            
            if(st.find(s[j])!= st.end()){
                countj++;
            }
            
            i++;
            j++;
            
        }
        
        if(counti == countj){
            return true;
        }
        
        return false ;
    }
};