/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
        
        if(head == null){
            return false ;
        }
    
    HashMap<ListNode , Boolean> map = new HashMap<>();
        
      ListNode itr = head;
    
    while(itr != null) {
        if(!map.containsKey(itr)) {
            map.put(itr, true);
        } else if(map.get(itr)){
            return true;
        }
        itr = itr.next;
    }
    return false;
   
    }
}