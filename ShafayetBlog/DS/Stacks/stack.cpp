// Stack Linked List implementation.

struct node{
	char data;
	node *next; 
};

class stack {
	node* top;
public:
	stack(){
		top = NULL;
	}
	void push(char ch);
	void pop(char ch);
};

void stack::push(char ch){
	ptr = new node;
	ptr->data = ch;
	ptr->next = NULL;
	if(top != NULL){
		ptr->next = top;
	}
	top = ptr;
}

void stack::pop(){
	node* tmp;
	if(top == NULL){
		cout << "Stack Empty!" << "\n";
		return;
	}
	tmp = top;
	top = top->next;
	delete tmp;
}