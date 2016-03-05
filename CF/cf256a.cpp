#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int cup[3], medals[3] ;
	int n ;
	
	cin >> cup[0] >> cup[1] >> cup[2];
	int cups = cup[0] + cup[1] + cup[2];
	
	cin >> medals[0] >> medals[1] >> medals[2];
	int medal = medals[0] + medals[1] + medals[2];
	
	cin >> n ;
	
	if(cups>0){
		
		double shelc = cups / 5.0 ;
		shelc = ceil(shelc);
		n -= shelc ;
		
	//	cout << shelc << endl;	
	}
	
	
	if(medal>0 ){
	
		double shelm = medal / 10.0 ;
		shelm = ceil(shelm);
		n-= shelm ;
	//	cout << shelm << endl;
	}
	if(n<0) cout << "NO"<<endl;
	else cout << "YES"<<endl;
	
	return 0;
}
