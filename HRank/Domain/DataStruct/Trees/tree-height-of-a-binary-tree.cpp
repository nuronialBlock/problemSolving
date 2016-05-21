
/*The tree node has data, left child and right child 
struct node
{
    int data;
    node* left;
    node* right;
};

*/
int height(node* root) {
	if(root == NULL) return -1;
	int left = height(root->left)+1;
	int right = height(root->right)+1;
	if(left >= right) return left;
	return right;
}
  
