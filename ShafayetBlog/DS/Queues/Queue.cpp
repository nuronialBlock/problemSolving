struct Node {
	char data;
	Node* next;
};

class Queue {
	private:
		Node* front;
		Node* rear;
	
	public:
		Queue();
		void Push(char ch);
		void Pop();
		char Front();
		bool IsEmpty();
};

Queue::Queue(){
	front = NULL;
	rear = NULL;
}

void Queue::Push(char ch){
	Node* tmp = new Node;
	tmp->data = ch;
	tmp->next = NULL;

	if(front == NULL) {
		front = tmp;
	}
	else {
		rear->next = tmp; 
	}

	rear = tmp;
}

void Queue::Pop(){
	if(front == NULL){
		cout << "Need front element, but queue is empty!";
		exit(1);
	}

	Node* tmp = new Node;
	tmp = front;
	fornt = front->next;
	
	delete tmp;
}

char Queue::Front(){
	return front->data;
}

bool Queue::IsEmpty(){
	if(front == NULL && rear == NULL) return true;
	return false;
}