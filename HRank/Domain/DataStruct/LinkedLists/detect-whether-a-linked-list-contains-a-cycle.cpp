/*
  Detect loop in a linked list 
  List could be empty also
  Node is defined as 
  struct Node
  {
    int data;
    struct Node *next;
  }
*/
int HasCycle(Node* head)
{
    // Complete this function
    // Do not write the main method
    
    Node* hare = head;
    Node* tort = head;
    while(hare != NULL && tort != NULL && hare->next != NULL){
        hare = hare->next->next;
        tort = tort->next;
        if(hare == tort){
            return 1;
        }
    }
    return 0;
}
