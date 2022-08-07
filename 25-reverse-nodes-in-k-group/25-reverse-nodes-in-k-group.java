/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    
     
    public ListNode reverseKGroup(ListNode head, int k) {
        
    //step 1 - head null
         
         if(head == null || k==1){
             return head ;
         }
         
         //creating node 
       ListNode dummy = new ListNode(0); 
        dummy.next = head ;
         ListNode curr = dummy ;
         ListNode prev = dummy ;
         ListNode next = dummy ;
    
       
         int co = 0 ;
             
         while(curr.next!=null){
             curr = curr.next;
                 co++;
             }
         
      
         while (co>=k){
             curr = prev.next;
             next = curr.next;
        for(int i = 1 ; i<k ; i++){
            curr.next = next.next;
            next.next = prev.next;
            prev.next = next;
            next = curr.next;
        }
            prev = curr;
             co -= k;
         }
         
        
       return dummy.next ; 
    }
}