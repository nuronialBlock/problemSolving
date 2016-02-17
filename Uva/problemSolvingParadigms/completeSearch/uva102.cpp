#include <bits/stdc++.h>

using namespace std;

#define pb push_back

class color
{
public:
	int bin[4];
	string s; 
	
};

bool cmp(color c1, color c2){
	if(c1.s != c2.s) return c1.s < c2.s;
	return c1.s < c2.s;
}

int main(){
	int bottels[4][10]; 
	while(cin >> bottels[0][0] >> bottels[0][1] >> bottels[0][2]){
		map<int,char> mp;
		mp[0] = 'B';
		mp[1] = 'G';
		mp[2] = 'C';
		
		for(int i = 1 ; i < 3 ; i++){
			cin >> bottels[i][0] >> bottels[i][1] >> bottels[i][2];
		}
		long long minMoves = 299999999; 
		vector<color> v;

		for(int i = 0 ; i < 3 ; i++){
			for(int j = 0 ; j < 3 ; j++){
				for(int k = 0 ; k < 3 ; k++){
					if(i != j && j != k && i != k){
						long long tmpMoves = 0;
						tmpMoves += bottels[1][i];
						tmpMoves += bottels[2][i];

						tmpMoves += bottels[0][j];
						tmpMoves += bottels[2][j];
						
						tmpMoves += bottels[0][k];
						tmpMoves += bottels[1][k];

						if(minMoves > tmpMoves){
							v.clear();
							color c;
							c.bin[0] = i;
							c.bin[1] = j;
							c.bin[2] = k;

							char ch;
							c.s = "";
							
							ch = mp[i];
							c.s += ch;
							ch = mp[j];
							c.s += ch;
							ch = mp[k];
							c.s += ch;
							minMoves = tmpMoves;
							v.pb(c);
						}
						else if(minMoves == tmpMoves){
							color c;
							c.bin[0] = i;
							c.bin[1] = j;
							c.bin[2] = k;

							char ch;
							c.s = "";
							
							ch = mp[i];
							c.s += ch;
							ch = mp[j];
							c.s += ch;
							ch = mp[k];
							c.s += ch;
							v.pb(c);
						}
					}
				}
			}
		}
		sort(v.begin(),v.end(),cmp);
		cout  << v[0].s << " " << minMoves << "\n";		
	}
	return 0;
}
