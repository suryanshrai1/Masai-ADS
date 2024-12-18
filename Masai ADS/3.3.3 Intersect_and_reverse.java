class Solution {

	public void intersectAndReverse(ListNode head1, ListNode head2) {
		// Write your code here
		ListNode first = head1;
		ListNode second = head2;
		
		int length1 = findLength(first);
		int length2 = findLength(second);
		
		first = head1;
		second = head2;
		
		if(length1>length2){
		    first = movePointers(first,length1-length2);
		}
		else{
		    second = movePointers(second,length2-length1);
		}
		
		ArrayList<Integer> al = new ArrayList<>();
		
		while(first!= null && second !=null){
		    if(first.val == second.val) break;
		    first = first.next;
		    second = second.next;
		}
		
		ListNode ans = reverse(second);
		
		while(ans!= null){
		    al.add(ans.val);
		    ans = ans.next;
		}
		
		if(al.size()!=0){
		    for(int i=0; i<al.size(); i++){
		    System.out.print(al.get(i)+" ");
		}
		}
		else{
		    System.out.print("");
		}
		
// 		System.out.print(al);
		
	}
	public static ListNode movePointers(ListNode head,int diff){
	    while(diff>0 && head != null ){
	        diff--;
	        head = head.next;
	    }
	    return head;
	}
	public static int findLength(ListNode node){
	    int length = 0;
	    while(node != null){
	        length++;
	        node = node.next;
	    }
	    return length;
	}
	public static ListNode reverse(ListNode head){
	    ListNode current = head;
	    ListNode prev = null;
	    ListNode next = null;
	    while(current != null){
	        next = current.next;
	        current.next = prev;
	        prev = current;
	        current = next;
	    }
	    return prev;
	}
}