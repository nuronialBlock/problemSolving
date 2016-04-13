#include <bits/stdc++.h>

using namespace std;

int a[5];
// Array's distribution in memory
bool ArraySDistribution(){
	for (int i = 0; i < 5; ++i) cin >> a[i];
	for (int i = 0; i < 5; ++i)
	{
		printf("For %d, Memory Address in your PC: %d\n", i,&a[i]);
	}
} 

// node stores data and it's next node's address
struct node
{
	int roll;
	node *next;
};
node *root = NULL;

// append function appends in the list.
// Complexity O(n); for Array O(1) 
bool append(int roll){
	if(root == NULL){
		root = new node();
		root->roll = roll;
		root->next = NULL;
	}
	else {
		node *current_node = root;
		while(current_node->next != NULL){
			current_node = current_node->next;
		}
		node *new_node = new node();
		new_node->roll = roll;
		new_node->next = NULL;

		current_node->next = new_node;
	}
}

// print prints elements.
// For printing a particula index n we need to traverse n.
void print(){
	node *cur_node = root;
	while(cur_node != NULL){
		printf("ROLL: %d\n",cur_node->roll);
		cur_node = cur_node->next;
	} 
}

// deleteNode deletes node from list. 
void deleteNode(int roll){
	node *cur_node = root;
	node *pre_node = NULL;
	while(cur_node != NULL){ 
		if(cur_node->roll == roll){
			pre_node->next = cur_node->next;
		}
		pre_node = cur_node;
		cur_node = cur_node->next;
	}
}


int main()
{
	append(1);
	append(2);
	append(6);
	deleteNode(2);
	print();
	return 0;
}