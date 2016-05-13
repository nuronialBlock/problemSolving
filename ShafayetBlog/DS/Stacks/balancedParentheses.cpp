// ProblemOJ: HackerRank
// ProblemURL: balanced-parentheses
// ProblemCatagory: Stack
#include <bits/stdc++.h>

using namespace std;

int main(){
 	int n;
 	cin >> n;
 	while(n--){
 		string s;
 		stack<char> st;
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
				char last = st.top();
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