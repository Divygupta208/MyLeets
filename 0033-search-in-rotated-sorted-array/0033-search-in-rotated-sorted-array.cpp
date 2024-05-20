class Solution {
public:
    int search(vector<int>& nums, int x) {
        
        int low = 0 ;
        int h = nums.size()-1;
        
        while(low<=h){
           
            int mid = (low+h)/2;
            
            if(nums[mid] == x) return mid; 
            
            
            if(nums[low]<nums[mid]){
                
                if(x>=nums[low] && x<nums[mid]){
                    h=mid-1;
                }else{
                    low = mid+1;
                }
                
            }else{
                
                 if(x>nums[mid] && x<=nums[h]){
                     low = mid+1;
                }else if(x<nums[mid] && x>=nums[h]){
                    low = mid+1;
                }else{
                     h =mid-1;
                 }
                
            }
        }
        
        return -1;
        
    }
};