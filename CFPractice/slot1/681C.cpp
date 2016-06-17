#include <bits/stdc++.h>

using namespace std;

long long n, num, m;
map<long long, bool> isInsert;
priority_queue < long long, vector<long long>, greater<long long> > pq;
vector<string> vs;
vector<long long > vi;

int main() {

	m = 0;
	cin >> n;
	while(n--){
		string s; 
		cin >> s ;
		if(s == "insert"){
			cin >> num;
			pq.push(num);
			isInsert[num] = true;
			vs.push_back(s);
			vi.push_back(num);
			m++;
		} else if(s == "getMin"){
			cin >> num;
			if(!pq.empty() && pq.top() == num){
				vs.push_back(s);
				vi.push_back(num);
				m++;
			} else{
				if(!isInsert[num]){
					pq.push(num);
					isInsert[num] = true;
					vs.push_back("insert");
					vi.push_back(num);
					m++;
				}
				while(pq.top() != num){
					isInsert[pq.top()] = false;
					vs.push_back("removeMin");
					vi.push_back(-10000000000);
					m++;
					pq.pop();
				}
				vs.push_back(s);
				vi.push_back(num);
				m++;
			}
		} else {
			m++;
			if(pq.empty()){
				pq.push(2);
				isInsert[2] = true;
				vs.push_back("insert");
				vi.push_back(2);
				m++;
			}
			isInsert[pq.top()] = false;
			pq.pop();
			vs.push_back(s);
			vi.push_back(-10000000000);
		}
	}

	cout << m << "\n";
	int size = vs.size();
	for (int i = 0; i < size; ++i) {
		cout << vs[i] << " ";
		if(vi[i] != -10000000000) cout << vi[i] << "\n";
		else cout << "\n";
	}

	return 0;
}