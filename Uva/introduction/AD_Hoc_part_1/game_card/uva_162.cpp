#include <bits/stdc++.h>

using namespace std;

int main(){

	map<char, int> faceCards;
	faceCards['A'] = 4;
	faceCards['K'] = 3;
	faceCards['Q'] = 2;
	faceCards['J'] = 1;

	while(true){
		string card;
		deque<char> dq[2], deck;
		for(int i = 1 ; i <= 52 ; i++){
			cin >> card;
			if(card == "#") return 0;
			dq[i % 2].push_front(card[1]);
		}

		int cover = 0;
		int turn = 1;
		int lastFace = -1;
		while(true){
			if(dq[turn].empty()) break;
			char cardValue = dq[turn].front();
			deck.push_front(cardValue);
			dq[turn].pop_front();

			if(faceCards[cardValue]){ 
				cover = faceCards[cardValue];
				lastFace = turn;
				turn ^= 1; 
				continue;
			}

			if(!cover){
				turn ^= 1;
				continue;
			}

			--cover;
			if(!cover){
				while(!deck.empty()){
					cardValue = deck.back();
					deck.pop_back();
					dq[lastFace].push_back(cardValue);
				}
				turn ^= 1;
			}
		}

		int winner = turn ^ 1;
		printf("%d%3d\n",winner+1,dq[winner].size());	
	}


	return 0;
}