#include <bits/stdc++.h>

using namespace std;

#define pii pair <int , int >
#define ff first
#define ss second
#define pb push_back

bool compare (pair <int , int> a ,pair <int , int> b ){
	if(a.first > b.first) return true;
	if(a.ss < b.ss) return true;
}

int main()
{
	
	pii p1;
	
	vector < pii >  v;
	
	int n =  3;
	
	for(int i = 0 ; i < n ;i++){
		int n1 , n2 ;
		cin >> p1.ff >> p1.ss;
		
		v.pb(p1);		
	}
	
	sort(v.begin() , v.end(), compare );
	
	for(int i = 0 ; i < n ;i++){
			cout << v[i].ff <<' '<<v[i].ss << endl;
	}
	
	
	
	return 0;
}
