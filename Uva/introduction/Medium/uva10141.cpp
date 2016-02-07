
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



	int n , p , r , d , kase = 0  ; 
	
	while(cin >> n  >> p ){
		
		
		
		if(!n && !p ) break;
		
		string name , nam ; 
		
		int req_met , rm = -1 ; 
		
		double price, pr = 2000000000.0000 ;
		
		string s;
		char ch ;
		cin.ignore();
		
		loop(i,0,n) { getline(cin,s);}
		
		
		
		loop(i,0,p){
			
			
			
			getline(cin,name);
			
			cin >> price >> req_met ;
			
			if(req_met > rm ){
				
				rm = req_met ; 
				
				pr = price  ;
				
				nam = name ;
			
	
			}
			
			else if( req_met == rm && price < pr ){

				rm = req_met ; 
				
				pr = price  ;
				
				nam = name ;
			
			
			
			}
			
			
			
			cin.ignore();	
			loop(j,0,req_met){
				
				getline(cin , s );
				
			}
			
			
		} 
		
		
		
		if (kase > 0)
			cout << endl;
		
		// hi req found 
		
		
		printf("RFP #%d\n",++kase);	
		
		cout << nam << endl;
		
		
		
		
		
		
		
	}
	
	
	
	
	return 0 ; 
}









