/*
struct node
{
    int data;
    node* left;
    node* right;
}*/
deque<node* > q;

void LevelOrder(node* root) {
 	if(root) q.push_back(root);
 	while(!q.empty()){
 		node* tmp = q.front();
 		cout << tmp->data << " ";
 		if(tmp->left != NULL) q.push_back(tmp->left);
 		if(tmp->right != NULL) q.push_back(tmp->right);
 		q.pop_front();
 	}
}