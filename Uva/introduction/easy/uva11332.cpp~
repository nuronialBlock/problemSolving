
// write a code for Shaking the world

#include <bits/stdc++.h>

using namespace std;

#define pii pair<int , int >
#define ff first
#define ss second

#define ll long long 
#define ull unsigned long long

#define vi vector<int > 
#define vc vector<char > 
#define vpi vector <pii>
#define vd vector <double >
#define vb vector <bool >
#define vs vector <string >
#define pb push_back
#define sz size()


#define mii map<int , int >
#define mdd map<double,double>
#define msi map<string,int>
#define mis map<int , string> 

#define pq priority_queue
#define maxN 100005
#define maxX **
#define maxY ***
#define maxx *****
#define mod 100000000

#define SET(a,n) memset(a,n,sizeof(a));

// loops 
#define loop(i,a,n) for(int i = a ; i < n ; i++ )
#define rloop(i,a,n) for(int i = a ; i > n ; i-- )
#define fasterIO ios::sync_with_stdio(0)



ll powy(int x,int y ){ // x ^ y
	
	ll num = 1; 
	
	for(int i = 1 ; i<=y ; i++){
		
		num *= x ;  
	
	}
	
	return num ;

}

ll addDgt(ll n ){
	
	ll num = n ; 
	
	ll ans = 0 ;
	
	while( n != 0 ){
		
		num = n % 10; 
		
		ans += num ; 
		
		n /= 10;
	}
	
	return ans ;

}


string parseit(ll n ){
	
	string str="\0"; 
	ll num  ; 
	
	while( n != 0 ){
		
		num = n % 10; 
		
		char ch = num + 48 ; 
		
		str += ch ; 
		
		n /= 10;
	}

	
	
	string rstr = "\0" ; 
	
	int siz = str.sz;
	
	for(int i = siz - 1 ; i >= 0 ; i-- ) rstr += str[i];
	
	return rstr ; 
}



string addit(string s ){

	int siz = s.sz ;
	ll num = 0 ;
	
	
	//converting to INT 
	
	loop(i,0,siz){
		
		num +=  powy( 10 , i ) * (s[i] - '0');
		
	}
	
	ll k = addDgt(num);
	
	s = parseit(k);
	


	return s;
}





int main()
{


	fasterIO;

	string s ; 
	
	while(cin >> s ){
	
		if(s.sz == 1 && s[0] == '0' ) break; 
		
		if(s.sz == 1 ) cout << s[0] << endl;
			
		else{
			
			
			while(s.sz != 1){
				
				s = addit(s);
				
			}
			
			cout << s << endl;	
		}		
	
		 
	
	} 	
		
	
		
	
	return 0 ; 
}









