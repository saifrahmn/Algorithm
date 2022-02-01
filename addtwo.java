class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
      ListNode Dummy=new ListNode(0);
      ListNode p=l1,q=l2, crr=dummy;
      while(p != null || q != null){
        int x= (p != null) ? p.val : 0;
        int y=(q != null) ? y.val : 0;
        int sum = carry + x + y;
        carry= sum/10;
        crr.next= new ListNode(sum%10);
        crr=crr.next;
        if( p != null) p++;
        if(q != null) q++;
      }
      if(carry>=10){
        crr.next= new ListNode(carry);
    }
      return dummy.next;
}
