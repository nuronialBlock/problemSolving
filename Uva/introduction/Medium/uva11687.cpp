
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



	string  input ; 
	
	while(cin >>  input ){
		
		if(input  == "END" ) break; 
		
		int x0 = input.sz ; 
		
		if(x0 == 1 && input[0]=='1') {cout << 1 << endl ; continue;}
		if(x0 == 1 ) {cout << 2 << endl ; continue ; }
		
		
		int siz = input.sz ; 
			
		int i = 1 ;
		
		
		while(1){
			
			
			int k =  siz ; 
			int t = 0 ;
			
			while( k != 0  ){
				
				k /= 10 ;
				t++;
				
				
			}
			
			siz = t ; 			
			i++;
			
			
			if(siz == 1 ) break ;	
			
			
		}
		
		cout << i+1 <<endl ;
		
	
	}
	
	
	
	
	return 0 ; 
}









