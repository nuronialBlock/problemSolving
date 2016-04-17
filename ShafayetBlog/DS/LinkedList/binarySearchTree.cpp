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
	return cur_node;
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
	}
	else if(cur_node->left == NULL || cur_node->right == NULL){
		if(cur_node->data < parent->data){
			parent->left = cur_node->left;
		}
		else {
			parent->right = cur_node->right;
		}
	}
	else {
		node* mini = find_min_node(cur_node->right);
		if(cur_node == root) root = mini; 
		else if(cur_node->data < parent->data) parent->left = mini;
		else parent->right = mini;

		while(mini->right != NULL) mini = mini->right;
		mini->right = cur_node->right;
	}
}

int main()
{
	insert(10);
	insert(5);
	insert(12);
	insert(6);
	insert(11);
	print_preorder(root);
	deleteNode(6);
	printf("\n");
	print_preorder(root);
	return 0;
}