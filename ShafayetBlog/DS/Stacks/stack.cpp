// Stack Linked List implementation.

struct node{
	char data;
	node *next; 
};

class Stack {
	node* top;
public:
	Stack(){
		top = NULL;
	}
	void push(char ch);
	void pop();
	bool empty();
	char Top(); 
};

void Stack::push(char ch){
	node* ptr = new node;
	ptr->data = ch;
	ptr->next = top;
	top = ptr;
}

void Stack::pop(){
	node* tmp;
	if(top == NULL){
		cout << "Stack Empty But calling POP()!" << "\n";
		exit(0);
	}
	tmp = top;
	top = top->next;
	delete tmp;
}

bool Stack::empty(){
	if(top == NULL) return true;
	return false;	
}

char Stack::Top(){
	char ch = top->data;
	return ch;
}