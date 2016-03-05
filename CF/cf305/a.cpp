#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define LL long long
#define vi vector<int>
#define vLL vector<LL>

string in , test;

bool isPalin(){
	int siz = test.size() ;
	int j = siz - 1;
	siz /= 2 ;
	bool ans = true ; 
	for(int i = 0 ; i < siz ; i++ , j--){
		if(test[i] != test[j]) {ans= false; break;}
	}
	return ans ;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int k;
	cin >> in ;
	cin >> k ;
	bool ans = true ;
	int siz = in.size();
	if(in.size()%k !=0 ) {cout << "NO\n"; return 0;}
	for(int i = 0; i < siz; ){
		test.clear();
		test = "";
		for(int l = 0  ; l < (siz)/k ; l++){
			char ch =  in[i] ;
			test += ch ;
			i++;
		}
		ans = isPalin();
		if(!ans) break;
	}
	if(ans) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
