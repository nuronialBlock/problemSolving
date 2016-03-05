#include <bits/stdc++.h>


using namespace std;

#define pb push_back
#define vi vector <int>
#define vb vector <bool> 



int main()
{
	
	int n , m , ns , days = 0  ;
	
	cin >> n >> m ;
	
	//if(ns <= 1 ) cout << n+1 << endl;

	//else {
	
	
	ns = (n/m) ; 
	int got = 0 ;

	for(days = n + 1 ; ; days++){
		if(got) {got = 0 ; ns++;}
		if(ns == 0 ) break;
		if(days%m == 0 ) got = 1 ;
		ns--;
	}
	cout << days - 1	<< endl; 
	
	
	//}
	return 0;
}
