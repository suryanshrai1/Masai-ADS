
class Solution {
    public static boolean checkForCycle(Node head) {
        if (head == null || head.next == null) {
            return false;
        }

        Node slow = head;
        Node fast = head;

        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;

            if (slow == fast) {
                return true;
            }
        }

        return false;
    }

    public static void main(String[] args) {
        
        int t = 1; 
        int n = 3; 
        int[] values = {1, 2, 3};
        int pos = -1; 

        // Create linked list
        Node head = new Node(values[0]);
        Node current = head;
        Node cycleNode = null;

        for (int i = 1; i < n; i++) {
            current.next = new Node(values[i]);
            current = current.next;

            // Save the node at the cycle position
            if (i == pos) {
                cycleNode = current;
            }
        }

        // If cycle position is valid, connect the tail to the cycle node
        if (pos != -1) {
            current.next = cycleNode;
        }

        // Test the function
        boolean hasCycle = checkForCycle(head);
        System.out.println(hasCycle ? "true" : "false");
    }
}
