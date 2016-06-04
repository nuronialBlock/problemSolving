#include <bits/stdc++.h>

using namespace std;

stack <string> state;

void Append(){
	string s, prev, now;
	cin >> s;
	prev = "";
	if(!state.empty()) prev = state.top();
	now = prev + s; 
	state.push(now);
}

void Delete(){
	int k;
	string prev, now; 
	char ch; 
	
	prev = state.top();
	now = "";
	cin >> k;
	int size = prev.size() - k;
	for(int i = 0; i < size; ++i){
		ch = prev[i];
		now += ch;
	}

	state.push(now);
}

void Print(){
	int k;
	cin >> k;
	string now = state.top();
	cout << now[k-1] << "\n";
}

void Undo(){
	state.pop();
}



int main() {
	int Q;
	cin >> Q;
	while(Q--){
		int n;
		cin >> n; 
		if(n == 1) Append();
		else if(n == 2) Delete();
		else if(n == 3) Print();
		else if(n == 4) Undo();
	}
	
	return 0;
}