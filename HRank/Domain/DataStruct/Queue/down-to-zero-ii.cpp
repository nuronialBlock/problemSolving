#include <bits/stdc++.h>

using namespace std;

#define maxN 1000006

int main() {
	int Q, N;
	cin >> Q;
	while(Q--){
		cin >> N;
		if(!N){
			cout << 0 << "\n";
			continue;
		}

		int distance[maxN];
		queue<int> q;
		memset(distance, -1, sizeof(distance));
		distance[N] = 0;
		q.push(N);
		while(!q.empty()){
			int num = q.front();
			q.pop();
			if(distance[num - 1] == -1){
				distance[num - 1] = distance[num] + 1;
				if(num - 1 == 0) break;
				q.push(num - 1);
			}
			for (int i = 2; i * i <= num ; ++i) {
				if(num % i == 0) {
					int val = max(i, num / i);
					if(distance[val] == -1){
						distance[val] = distance[num] + 1;
						q.push(val);
					}
				}
			}
		}

		cout << distance[0] << "\n";

	}

	return 0;
}