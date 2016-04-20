#include <bits/stdc++.h>

using namespace std;

struct node {
	int data;
	node *left, *right;
	node(){
		left = NULL;
		right = NULL;
	} 
};
node *root = NULL;

void insert(int data) {
	if(root == NULL) {
		root = new node();
		root->data = data;
	}
	else {
		node *current = root;
		node *parent;
		while(current != NULL){
			parent = current;
			if(data >= current->data) current = current->right;
			else current = current->left;
		}
		node *newNode = new node();
		newNode->data = data;
		if(data < parent->data) parent->left = newNode;
		else parent->right = newNode;
	}
}

void print_preorder(node *current) {
	if(current == NULL) return;
	cout << current->data << "\n";
	print_preorder(current->left);
	print_preorder(current->right);
}

node* find_min_node(node *cur_node) {
	node* parent = cur_node;
	while(cur_node->left != NULL){
		parent = cur_node;
		cur_node = cur_node->left;
	}
	parent->left = NULL;
	return cur_node;
}

void full_null(node *n){
	n->right = NULL;
	n->left = NULL;
	n = NULL;
}

void deleteNode(int data){
	node *cur_node = root;
	node *parent = root;
	while(cur_node->data != data){
		parent = cur_node;
		if(data < cur_node->data) cur_node = cur_node->left;
		else cur_node = cur_node->right;  
	}
	if(cur_node->left == NULL && cur_node->right == NULL){
		if(cur_node->data < parent->data) parent->left = NULL;
		else parent->right = NULL;
		full_null(cur_node);
	}
	else if(cur_node->left == NULL || cur_node->right == NULL){
		if(cur_node->data < parent->data){
			if(cur_node->left != NULL) parent->left = cur_node->left;
			else parent->left = cur_node->right;
		}
		else if(cur_node->data > parent->data){
			if(cur_node->left != NULL) parent->right = cur_node->left;
			else parent->right = cur_node->right;
		}
		else if(cur_node->data == parent->data){
			if(cur_node->right != NULL){
				root = cur_node->right;
			}
			else {
				root = cur_node->left;
			}
			full_null(parent);
		}

		full_null(cur_node);
	}
	else {
		node* mini = find_min_node(cur_node->right);
		
		// DBUG Window
		// cout << "The mini data " << mini->data << "\n"; 
		// cout << "The parent data " << parent->data << "\n"; 
		
		if(cur_node == root) {root = mini;}  
		else if(cur_node->data < parent->data) parent->left = mini;
		else parent->right = mini;

		mini->left = cur_node->left;
		if(cur_node->right != mini){
			while(mini->right != NULL){
				mini = mini->right;
			}
			mini->right = cur_node->right;	
		}

		full_null(cur_node);
	}
}

int main()
{
	// Type - 1:

	// insert(50);
	// insert(20);
	// insert(60);
	// insert(10);
	// insert(25);
	// insert(5);
	// insert(55);
	// insert(65);
	// insert(70);
	// insert(35);
	// insert(58);

	// Type - 2:

	// insert(10);
	// insert(12);
	// insert(14);
	// insert(15);

	// Type - 3 : 
	// insert(100);
	// insert(50);
	// insert(25);

	print_preorder(root);

	// Type - 1:

	// Case 1:: Passed
	// deleteNode(5);
	// deleteNode(70);

	// Case 2:: Passed 
	// deleteNode(10);
	// deleteNode(65);

	// Case 3:: Passed
	// deleteNode(20);
	// deleteNode(60);

	// Case 4:: Passed
	// deleteNode(50);


	// Type - 2:

	// Case 1: Passed
	// deleteNode(10);


	// Type - 3:

	// Case 1 :
	// deleteNode(100);

	printf("\n");
	print_preorder(root);
	return 0;
}