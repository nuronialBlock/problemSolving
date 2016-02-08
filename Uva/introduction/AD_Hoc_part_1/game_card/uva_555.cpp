#include <bits/stdc++.h>

using namespace std;

#define pii pair<int,int>

bool cmp(pii p1, pii p2){
	if(p1.first != p2.first) return p1.first < p2.first;
	return p1.second < p2.second;
}

int main()
{
	ios_base::sync_with_stdio();
	map<char,int> suitConvert , cardConvert, playerFace;
	suitConvert['C'] = 0;
	suitConvert['D'] = 1;
	suitConvert['S'] = 2;
	suitConvert['H'] = 3;

	cardConvert['T'] = 10;
	cardConvert['J'] = 11;
	cardConvert['Q'] = 12;
	cardConvert['K'] = 13;
	cardConvert['A'] = 14;

	playerFace['S'] = 0;
	playerFace['W'] = 1;
	playerFace['N'] = 2;
	playerFace['E'] = 3;
	
	
	char ch;
	while(cin >> ch){
		if(ch == '#') break;
		
		vector<pair<int,int> > player[4];
		
		string s = "", in;
		cin >> in;
		s += in;
		cin >> in;
		s += in;

		int curFace = playerFace[ch];
		int siz = s.size();

		for(int i = 0; i < siz-1; i+=2){
			curFace++;
			curFace %= 4;
			char suit = s[i], card = s[i+1];
			int suitIdx = suitConvert[suit];
			int cardVal;
			if(card >= '2' && card <= '9') cardVal = card - '0';
			else cardVal = cardConvert[card];
			player[curFace].push_back(make_pair(suitIdx,cardVal));
		}

		for(int i = 0 ; i < 4 ; i++){
			sort(player[i].begin(),player[i].end(),cmp);
		}

		for(int i = 0 ; i < 4 ; i++){
			if(i == 0) cout << "S: ";
			else if(i == 1) cout << "W: ";
			else if(i == 2) cout << "N: ";
			else if(i == 3) cout << "E: ";
			
			for(int j = 0 ; j < 13 ; j++){
				int suit = player[i][j].first, card = player[i][j].second;
				if(suit == 0) cout << 'C';
				else if(suit == 1) cout << 'D';
				else if(suit == 2) cout << 'S';
				else if(suit == 3) cout << 'H';
				char out = '0';			
				if(card >= 2 && card <= 9) out = card + '0';
				else if(card == 10) out = 'T';
				else if(card == 11) out = 'J';
				else if(card == 12) out = 'Q';
				else if(card == 13) out = 'K';
				else if(card == 14) out = 'A';
				
				cout << out;
				if(j <= 11) cout << " ";
				else cout << "\n";
			}
		}

	}

	
	return 0;
}