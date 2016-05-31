/* Node is defined as :
typedef struct node
{
    int val;
    struct node* left;
    struct node* right;
    int ht;
} node; */



void setHeight(node* root){
	if(!root) return;
	int left = -1;
	int right= -1;
	if(root->left)
		left = root->left->ht;
	if (root->right)
		right = root->right->ht;

	root->ht = 1 + max(left, right);
}

int bf(node* root){
	if(!root) return 0;
	int left = -1;
	int right= -1;
	if (root->left)
		left = root->left->ht;
	if (root->right)
		right = root->right->ht;

	return left - right;
}

void rotateLL(node* root){
	node* l = root->left;
	node* r = root->right;
	node* ll = root->left->left;
	node* lr = root->left->right;

	root->left = ll;
	root->right = l;
	l->left = lr;
	l->right=r;

	int swap = root->val;
	root->val =  l->val;
	l->val = swap;

	setHeight(l);
	setHeight(root);
}

void rotateRR(node* root){
	node* r  = root->right;
	node* rr = root->right->right;
	node* rl = root->right->left;
	node* l = root->left;

	root->right = rr;
	root->left = r;
	r->right = rl;
	r->left = l;

	int swap = root->val;
	root->val = r->val;
	r->val = swap;

	setHeight(r);
	setHeight(root);
}


void rotateLR(node* root){
	rotateRR(root->left);
	rotateLL(root);
}


void rotateRL(node* root){
	rotateLL(root->right);
	rotateRR(root);
}

void makeBalance(node* root){
	if(!root) return;
	if(bf(root) == 2){
		if(bf(root->left) == 1) rotateLL(root);
		else if(bf(root->left) == -1) rotateLR(root);
	}
	else if(bf(root) == -2){
		if(bf(root->right) == -1) rotateRR(root);
		else if(bf(root->right) == 1) rotateRL(root);
	}
}

node* insert(node* root,int val) {
	if(!root){
		node* newNode = new node;
		newNode->val = val;
		newNode->left = NULL; 
		newNode->right = NULL;
		root = newNode; 
	}
	else if(val < root->val) root->left = insert(root->left, val);
	else root->right = insert(root->right, val);

	setHeight(root);
	makeBalance(root);

	return root;
}
