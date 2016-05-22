/*
Node is defined as 

	typedef struct node	{
	   int data;
	   node * left;
	   node * right;
	}node;

*/


node* lca(node* root, int v1,int v2) {
	if(v1 == v2 && root->data == v1) return root;
	if(v1 == v2 && v1 < root->data && root->left->data == v1) return root;
	if(v1 == v2 && v1 < root->data && root->right->data == v1) return root;
	if(v1 > root->data && v2 < root->data) return root;
	if(v1 < root->data && v2 > root->data) return root;
	else if(v1 > root->data && v2 > root->data) lca(root->right, v1, v2); 
	else if(v1 < root->data && v2 < root->data) lca(root->left, v1, v2); 
	return root;
}
