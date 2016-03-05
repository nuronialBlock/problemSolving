#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define vi vector <int>
#define vd vector <double >
#define pii pair <int , int > 
#define f first 
#define s second 

bool cmpr(pii p1 , pii p2 ){
	return p1.f < p2.f ;
}


int main()
{
	
	int n ;
	cin >> n ;	
	
	pii p;
	vector <pii> v ;
	
	for(int i = 0 ; i < n ; i++){
		
		cin >> p.f >> p.s ;
		
		v.pb(p);
		
	}
	
	
	sort(v.begin(),v.end(),cmpr) ;
	
	int got = 1 ;
	
	for(int i = 0 ; i < n-1 ; i++){
		
		if(v[i].s < v[i+1].s ){
			got = 0 ;
			break;
		}
		
	}	
	
	if(got ) cout << "Happy Alex" << endl ;
	else cout << "Poor Alex" << endl;	
		
	return 0;
}
