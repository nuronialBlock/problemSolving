
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



	int k , m ; 
	
	while(cin >> k ){
	
		if(!k  ) break;
		cin >> m ;
		msi takenbF;
		
		string s ;
		
		loop(i,0,k){
			cin >> s ; 
			takenbF[s] = 1 ;
		}
		 
		 
		int nc , pr ;
		bool susc = 1 ;
		
		loop(i,0,m){
			
			int tot = 0 ;	
				
			cin >> nc >> pr ; 
	
			loop(j,0,nc){
				cin >> s ;
				if(takenbF[s] == 1 ) tot++;
				
			}
			
			if(tot < pr ) susc = 0 ;
			
		}
		
		if(susc) cout << "yes\n";
		else cout << "no\n";	
		
	
	}
	
	
	return 0 ; 
}









