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

int main()
{
	insert(10);
	insert(5);
	insert(12);
	insert(6);
	insert(11);
	print_preorder(root);
	return 0;
}