
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


#define GCD(a,b) __gcd(a,b)
#define LCM(a,b) { ( GCD(a,b)/a ) * b }



bool isPrime(int n){

	if( n < 2  ) return  0 ;
	
	else if( n == 2 ) return 1 ;
	
	else if( n % 2 == 0 ) return 0 ; 
	
	for(int i = 3 ; i * i <= n ; i += 2 ){
		
		if( n % i == 0 ) return 0;
			
		
	}
	
	 

	return 1 ; 


}


vi v ; 
mii m1 ;


int main()
{



	int n = 1000000; 
			
		
	int count = 0 ; 	
		
	loop(i,2,n+1){
		
		if(isPrime(i)) { v.pb(i); m1[i]++;} 
		
	}
	
	int num ;
	
	while(cin >> num) {
		
		if(!num) break; 
		
		int siz = v.sz ; 
		int n1 , n2 ; 
		bool got = 0 ;
		
		loop(i,0,siz){
			
			n2 = num - v[i] ; 
			
			if( n2 < 0 ) break; 
			
			if(m1[n2] == 1 ) { got = 1 ; n1 = v[i] ; break ;}
			
		}
		
		if(got) printf("%d = %d + %d\n",num,n1,n2);
		else cout <<"Goldbach's conjecture is wrong."<<endl;
		
		
		
	}
	
	
	return 0 ; 
}









