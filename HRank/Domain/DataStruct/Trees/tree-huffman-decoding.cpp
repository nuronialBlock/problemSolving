/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/


void decode_huff(node* root,string s){
	int sz = s.size();
	for (int i = 0; i < sz; ) {
		node* tmp = root;
		while(1){
			char ch = s[i];
			if(tmp->left == NULL && tmp->right == NULL){
				cout << tmp->data;
				break;
			}
			if(ch == '0') tmp = tmp->left;
			else tmp = tmp->right;
			++i;
		}
	}
}
