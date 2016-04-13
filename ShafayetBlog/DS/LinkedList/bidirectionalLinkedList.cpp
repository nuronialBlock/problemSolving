#include <bits/stdc++.h>

using namespace std;

struct node
{
	int data;
	node *prev;
	node *next; 	
};

node *tail = NULL, *root = NULL;

void print(){
	node *cur_node = root;
	while(cur_node != NULL){
		printf("data: %d\n",cur_node->data);
		cur_node = cur_node->next;
	} 
}

void printReverse(){
	node *cur_node = tail;
	while(cur_node != NULL){
		printf("data:: %d\n",cur_node->data);
		cur_node = cur_node->prev;
	}
}

void append(int data){
	if(root == NULL){
		root = new node();
		root->data = data;
		root->prev = NULL;
		root->next = NULL;
		tail = root;
	}
	else {
		node *newNode = new node();
		tail->next = newNode;
		newNode->data = data;
		newNode->prev = tail;
		newNode->next = NULL;
		tail = newNode;
	}

}

int main()
{
	append(2);
	append(4);
	append(6);
	print();
	printf("Reverse of it:\n");
	printReverse();
	return 0;

}