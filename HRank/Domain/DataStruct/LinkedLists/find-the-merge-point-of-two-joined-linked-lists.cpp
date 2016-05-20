/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method.
    Node* na = headA;
    int ans = 1;
    while(na != NULL){
    	Node* nb = headB; 	
    	while(nb != NULL){
    		if(na == nb){
    			return na->data;
    		}
    		nb = nb->next;
    	}
    	na = na->next;
    	ans++;
    }
    return ans;
}
