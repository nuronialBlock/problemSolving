
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






int main()
{

	string in ;
	
	cin >> in ;
	
	int siz = in.sz ;
	
	int lasteven = -1  ; 

	
	int lastOdd = in[siz-1] - '0' ; 
	
	loop(i,0,siz){
	
		int num = in[i] - '0' ;
	
		if( ( num % 2 ) == 0 ){
			
			if( lastOdd > num ){
				
				swap(in[siz-1],in[i]);
				
				cout << in << endl ; 
				
				return 0 ; 
				
			}
				
			lasteven = i ; 
			
			
		}
	
		
	}
	
	
	if(lasteven != -1 ) {
		
		swap(in[siz-1],in[lasteven]);
		
		cout << in << endl ;
		
		return 0 ; 
		
	}
	
	
	
	cout << -1 << endl ;
	
	
	return 0 ; 
}









