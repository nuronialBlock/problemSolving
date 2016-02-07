
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









int main()
{



	int n ; 
	
	while(cin >> n ){
	
		if(!n) break ; 
		
		string s ;
		cin.ignore();
		
		cin >> s ; 
		
		int siz = s.sz ;
		
		int ans = 2000000;
		
		loop(i,0,siz){
			
			if(s[i] == 'Z' ) ans = 0; 
			
		}
		
		
		if(!ans){ cout << 0 << endl; continue ; }
		
		
		int index = -1 ; 
		
		
		loop(i,0,siz){
			
			if( s[i] == 'R' ){
				
				index = i ; 
				
			}
			
			if(s[i] == 'D' && index !=-1) ans = min(ans, i - index);
			
			
		}
		
		index = -1 ; 	
			
		rloop(i,siz-1,-1){
			
			if(s[i] == 'R'){
				
				index = i ;
				
			}
			
			if(s[i] == 'D' && index  != -1 ) ans = min(ans,index - i);
			
		}
		
		
		cout << ans <<endl;
		
	
	}
	
	return 0 ; 
}









