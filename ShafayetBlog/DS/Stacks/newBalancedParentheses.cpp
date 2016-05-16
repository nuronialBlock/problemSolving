// ProblemOJ: HackerRank
// ProblemURL: balanced-parentheses
// ProblemCatagory: Stack
#include <bits/stdc++.h>

using namespace std;

struct node{
	char data;
	node *next; 
};

class Stack {
	node* top;
public:
	Stack(){
		top = NULL;
	}
	void push(char ch);
	void pop();
	bool empty();
	char Top(); 
};

void Stack::push(char ch){
	node* ptr = new node;
	ptr->data = ch;
	ptr->next = top;
	top = ptr;
}

void Stack::pop(){
	node* tmp;
	if(top == NULL){
		cout << "Stack Empty But calling POP()!" << "\n";
		exit(0);
	}
	tmp = top;
	top = top->next;
	delete tmp;
}

bool Stack::empty(){
	if(top == NULL) return true;
	return false;	
}

char Stack::Top(){
	char ch = top->data;
	return ch;
}

int main(){
 	int n;
 	cin >> n;
 	while(n--){
 		string s;
 		Stack st = Stack();
 		cin >> s;
 		bool legit = true;
 		for (int i = 0; i < s.size() && legit; ++i){
			char ch = s[i];
			if(ch == '(') st.push(')');
			else if(ch == '{') st.push('}');
			else if(ch == '[') st.push(']');
			else {
				if(st.empty()){
					legit = false;
					break;
				}
				char last = st.Top();
				if(ch == last) st.pop();
				else legit = false; 
			}
		}
		if(!st.empty()){
			cout << "NO\n";
			while(!st.empty()) st.pop();
		}
		else if (legit) cout << "YES\n";
		else cout << "NO\n";   
 	}
	return 0;
} 