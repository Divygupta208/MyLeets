class Solution {
    public void rotate(int[][] arr) {
        
        int temp = 0 ;
      
      
        for(int i = 0 ; i < arr.length; i++){
            
            for(int j = 0 ; j <i; j++){
                
                temp = arr[i][j];
                 arr[i][j] = arr[j][i];
                arr[j][i] = temp ;
                
            }
        }
        
        
        for(int i =0 ;  i < arr.length ; i++){
            
            int li = 0 ;
            int ri = arr.length-1 ;
            
            while(li<ri){
                
                temp = arr[i][li];
                 arr[i][li] = arr[i][ri];
                arr[i][ri] = temp ;
                
                li++;
                ri--;
            }
        }
    }
}