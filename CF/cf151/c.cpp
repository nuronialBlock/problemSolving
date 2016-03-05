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

	int n , k ; 
	
	int ara[55];
	int maxAra[55];
	mii m1 ; 
	
	
	cin >> n >> k ; 
	
	
	loop(i,0,n){
		
		cin >> ara[i] ;
		
		m1[i] = ara[i] ; 
		
		maxAra[i] = ara[i] ;
		
	}
	
	
	sort(maxAra,maxAra+n);
	
	int count = 0 ; 
	int m = n-1 ;
	int q = 0 ; 
	 	
	loop(i,1,n+1){  //2 3
		
	
		
		
		rloop(j,m,-1){ // 3 
			
			count++; 
			if(count > k ) break;
			
			
			cout << i <<" "; // 2 
			 
			for(int k = n-1 , l = 0; l < q ; l++, k--){
				cout << maxAra[k]<<" "; // max1 max2 
			}
			
			
			cout << maxAra[j] << endl ;
			
			
			 	
			
			
		}
		
		++q; 
		--m;
	
	}
	
	
	
	
	
	return 0 ; 
}









