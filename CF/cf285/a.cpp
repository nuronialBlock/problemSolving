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
	
	int a , b, c , d , V , M; 
	
	cin >> a >> b >> c >> d ;
	
	
	M = a - (a*c/250) ; 
	M = max( (3*(a/10)) , M );
	
	
	V = b - (b*d/250) ; 
	V = max( (3*(b/10)) , V );
	
	
	if(M == V ) cout << "Tie" << endl; 
	
	else if( M  > V  ) cout << "Misha" <<endl ;
	
	else cout << "Vasya" << endl;
	 
	
	
		
	
	return 0 ; 
}









