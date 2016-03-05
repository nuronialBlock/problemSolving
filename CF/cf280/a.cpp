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





int main(){


	fasterIO;
	
	int n , i , total ; 
	
	cin >> total ;	
	
	n = total ;

	int count = 0 ; 
	i =1 ; 
	while( n > 0 ){
	
		int sum = i*(i+1);
		sum/=2 ; 
		
		n -= sum ;
		if(n < 0 ) break ;
		
		count++;
		++i;
	
	}
		
		
	
	
	cout << count  << endl; 

	return 0 ; 
}





