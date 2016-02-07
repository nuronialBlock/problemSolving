#include "bits/stdc++.h"

using namespace std;

bool suits[4][20];
int cardSuit[4];
int tot;
		
void AssignValue(char val , char suit){

	int idx ;
	if(suit == 'S') idx = 0 ;
	else if(suit == 'H') idx = 1 ;
	else if(suit == 'D') idx = 2 ;
	else if(suit == 'C') idx = 3 ;
	cardSuit[idx]++;
	
	if(val >= '2' && val <= '9') suits[idx][val-'0'] = 1; 
	else if(val == 'A') {suits[idx][1] = 1; tot += 4;}
	else if(val == 'T') {suits[idx][10] = 1;}
	else if(val == 'J') {suits[idx][11] = 1; tot += 1;}
	else if(val == 'Q') {suits[idx][12] = 1; tot += 2;}
	else if(val == 'K') {suits[idx][13] = 1; tot += 3;}
}

bool CheckStopped(){
	int a , k ,q , cards;
	bool got = 0;
	for(int i = 0 ; i < 4 ; i++){
		k = 0 ; q = 0 ; a = 0 , cards = 0 , got = 0;
		for(int l = 1 ; l < 14 ; l++){
			if(!suits[i][l]) continue;
			if(l == 1) a++;
			else if(l == 12) q++;
			else if(l == 13) k++;
			cards++;
		}
		if(a == 1) got = 1;
		else if(k == 1 && cards >= 2) got = 1;
		else if(q == 1 && cards >= 3) got = 1; 

		if(!got) return 0;
	}
	return 1;
}

void CountSubstrtact(){
	int k ,q , j, cards;
	for(int i = 0 ; i < 4 ; i++){
		k = 0 ; q = 0 ; j = 0; cards = 0;
		for(int l = 1 ; l < 14 ; l++){
			if(!suits[i][l]) continue;
			if(l == 11) j++;
			if(l == 12) q++;
			if(l == 13) k++;
			cards++;
		}
		if(k == 1 && cards == 1) tot--;
		if(q == 1 && cards <= 2) tot--;
		if(j == 1 && cards <= 3) tot--; 
	}
}

void CountAdd(){
	int cards = 0 ;
	for(int i = 0 ; i < 4 ; i++){
		cards = 0;
		for(int l = 1 ; l < 14 ; l++){
			if(!suits[i][l]) continue;
			cards++;
		}
		if(cards == 2) tot++;
		else if(cards <= 1) tot += 2; 
	}
}

int main()
{
	ios_base::sync_with_stdio();

	string card;
	while(cin >> card){
		memset(suits,0,sizeof suits);
		memset(cardSuit,0,sizeof cardSuit);

		tot = 0;
		char value = card[0];
		char suit = card[1];
		AssignValue(value,suit);

		for(int i = 0 ; i < 12 ; i++){
			cin >> card;
			value = card[0];
			suit = card[1];			
			AssignValue(value,suit);
		}
		bool cs = CheckStopped();
		CountSubstrtact();

		if(cs && tot >= 16){
			cout << "BID NO-TRUMP\n";	
			continue;
		}

		CountAdd();

		if(tot < 14){
			cout << "PASS\n";
			continue;
		}

		int idx = 0;
		int maxSuit = 0;
		for(int i = 0 ; i < 4 ; i++){
			if(cardSuit[i] > maxSuit){
				maxSuit = cardSuit[i];
				idx = i;
			}
		} 

		cout << "BID ";
		if(idx == 0) cout << "S\n";
		else if(idx == 1) cout << "H\n";
		else if(idx == 2) cout << "D\n";
		else if(idx == 3) cout << "C\n";

	}
	
	return 0;
}	