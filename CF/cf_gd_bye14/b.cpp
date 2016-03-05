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


	
	fasterIO ; 
	
	int n , t ; 
	int ara[309];
	char grid[309][309];
	char visited[309][309];
	cin >> n; 
	
	loop(i,0,n){
		cin >> ara[i] ;
	}   
	
	char ch; 
	
	loop(i,0,n){
	
		
		
		loop(j,0,n){
			
			cin >> grid[i][j];
			 
			
		}
		
	}
	

	
	loop(i,0,n-1){
		 
		int curNum = ara[i];
		int got = curNum ; 
		int idx = i ; 
		
		cout << curNum << endl ;
		
		loop(j,i,n){
		
			
			
			if( grid[i][j] == '1' && ara[j] < got  ) {
				
				 got = ara[j];
				 idx = j ;  
				 
			}
				
				
		}
		cout << got << endl ; 
		swap(ara[idx],ara[i]);
		
		cout << ara[i] << " " << ara[idx] << endl ; 
		 
	
	}
	
	//  1 2 4 3 6 7 5
	
	loop(i,0,n) {
		
		cout <<ara[i]; 
		
		if( i != n-1 ) cout << " " ;  
		
	}
	cout << endl ;
	
	
	
	
	
	
	return 0 ; 
}

