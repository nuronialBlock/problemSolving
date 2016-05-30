/* Node is defined as :
typedef struct node
{
    int val;
    struct node* left;
    struct node* right;
    int ht;
} node; */

node* findImbalanceNode(node* root, int val){
	if(root->left == NULL && root->right == NULL){
		node *newNode = new node; 
		newNode->val = val;
		newNode->ht = 1;
		if(val >= root->val) root->right = newNode;
		else root->left = newNode;
		return newNode;
	}

	node *n;

	if(val >= root->val) n = findImbalanceNode(root->right, val);
	else n = findImbalanceNode(root->left, val);

	int hi = n->left->ht - n->right->ht;
	if(hi < -1 || hi > 1) return n;


}

node* insert(node* root,int val) {
	node* tmp = root;
	node* imbNode = findImbalanceNode(root, val);
}
