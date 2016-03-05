#include <bits/stdc++.h> 

using namespace std;

#define pb push_back
#define vi vector <int>
#define vb vector <bool> 
#define ll long long 


ll convert(string a  ){
	ll add = 0 ;
	int size = a.size();
	for(int i = 0; i < size ; i++  ){
		add += a[i] - '0';
	}
	
	return add ;
}

template <class T>
T powe (T a, T b ){
	
	T ans =  1 ; 
	for(int i = 1 ; i <= b ; i++) ans *= a ; 
	
	return ans ;
}


int main(){
	
	
	int s , a , b ,  c; 
	vi v;
	cin >> a >> b >> c ;
	
	int n = 0 ; 
	s = 1 ;
	for(; s < 83 ; s++){
		
		ll equ = b *  (ll) powe(s,a) + c ;
		
		string s1 ;
		stringstream out  ;
		out << equ ; 
		
		s1 = out.str(); 
		
		int l = convert(s1);
		//cout << l << endl ;
		if(l==s && (equ > 0 && equ < 1000000000) ) {
			v.pb(equ);
			n++;
		}
	}
	
	cout << n << endl; 
	
	if( n > 0 ) {
		for(int i = 0 ; i < n  ; i++) cout << v[i] << " ";

		cout << endl; 
	
	}
		
	return 0;
}
