#include <bits/stdc++.h>

using namespace std;

#define LL long long int

long long int x1 , y11 , x2 , y2 , a1, a2, h1, h2, m;

bool check(){
	if(x1 == 1 && y11 == 0){
		if((h1%m) != a1 || h1 != a1) return true;
	}
	else if(x2 == 1 && y2 == 0){
		if((h2%m) != a2 || h2 != a2) return true;
	}
	return false;
}

int main()
{
	
	cin >> m ;
	cin >> h1 >> a1;
	cin >> x1 >> y11;
	cin >> h2 >> a2;
	cin >> x2 >> y2 ;
	
	bool imp = check();
	if(imp) {cout << -1 << endl; return 0;}
	int i ;
	bool Fh1 = 0;
	bool Fh2 = 0;
	for(i = 1 ; i <= 9999999 ; i++){
		if(!Fh1){
			h1 = ((h1 % m ) * (x1 % m)) % m;
			h1 += (y11 % m);
			if(h1 == a1) Fh1 = 1 ;
		}
		if(!Fh2){
			h2 = ((h2 % m ) * (x2 % m)) % m;
			h2 += (y2 % m);
			if(h2 == a2) Fh2 = 1 ;
		}
		if(Fh1 == 1 && Fh2 == 1) break;
	}
	
	if(Fh1 == 0 || Fh2 == 0) cout << -1 << endl;
	else cout << i << endl;
	return 0;
}
