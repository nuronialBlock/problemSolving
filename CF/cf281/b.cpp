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

	
	fasterIO; 


	int n ; 
	
	cin >> n ;
	
	
	ll first = 0 , second = 0  ; 
	
	vi v1  , v2  ; 
	
	int last ;
	
	
	loop(i,0,n){
		
		int num ; 
		
		cin >> num ; 
		
		if(num > 0 ) { first+= num ; v1.pb(num); }
		else {second += -(num); v2.pb(-(num)); }
		
		if(i == n -1 ){
			
			if(num > 0) last = 1 ; 
			else last = 0 ; 	
			
		}
 		
		
	}
	
	
	if(first > second ) cout << "first\n" ; 
	else if( first < second  ) cout << "second\n";
 	
 	else if( first == second ){
 		
 		if(v1.size() > v2.size() ){
 			
 			int got = 1 ; 
 			for(int i = 0 ; i < v2.size() ;i ++){
 		
 				if(v1[i] != v2[i]) {got =0 ; break ;}
 			}
 			
 			
 			if(got) { cout << "first\n" ; return 0 ; }
 			
 			
 		}	
 		
 		else if(v1.size() < v2.size() ){
 			
 			int got = 1 ; 
 			for(int i = 0 ; i < v1.size() ;i ++){
 				if(v1[i] != v2[i]) {got =0 ; break ;}
 			}
 			
 			if(got) { cout << "second\n" ; return 0 ; }
 			
 			
 		}	
 		
 		
 		
 			
 			int got = 0 ; 
 			int k = min(v1.size(),v2.size());
 			
 			loop(i,0,k){
 				if(v1[i] > v2[i] ) {got = 1;break;}
 				if(v1[i] < v2[i] ) {got = 2;break;}
 			}
 			
 			if(got == 1 ) cout << "first\n";
 			else if(got==2) cout << "second\n";
 			else{
 				
 				if(last == 1 ) cout << "first\n";
 				else if(last==2) cout << "second\n";
 					
 			
 			}
 		
 		
 	
 	
	}
	
	

	return 0 ; 


}





