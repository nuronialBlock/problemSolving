/*
	Insert Node at the end of a linked list 
	head pointer input could be NULL as well for empty list
	Node is defined as 
	struct Node
	{
		 int data;
		 struct Node *next;
	}
*/
Node* Insert(Node *head,int data)
{
	// Complete this method
	Node* tmp;
	if(head == NULL){
		tmp = new Node;
		tmp->data = data;
		tmp->next = NULL;
		head = tmp; 	
		return head;
	}

	tmp = head;
	while(tmp->next != NULL){
		tmp = tmp->next;
	}
	
	Node* nNode = new Node;
	tmp->next = nNode;
	nNode->data = data;
	nNode->next = NULL;

	return head;
}
