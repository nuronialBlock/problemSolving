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
#define maxN 66000
#define maxX **
#define maxY ***
#define maxx *****
#define mod 100000000

#define SET(a,n) memset(a,n,sizeof(a));

// loops 
#define loop(i,a,n) for(int i = a ; i < n ; i++ )
#define rloop(i,a,n) for(int i = a ; i > n ; i-- )
#define fasterIO ios::sync_with_stdio(0)

/***  History will start from here  ***/




/*  code help : chowdhury(CF) , 

	idea: wasi.ahmed(cf)

**/
int deg[maxN] , sum[maxN] ; 
int n , edge ; 

queue<int> q; 	



int main()
{


	fasterIO;
	
	edge = 0 ; 
	cin >> n ; 
	
	loop(i,0,n){
		
		cin >> deg[i] >> sum[i] ; 
		
		edge += deg[i];
		
		if(deg[i] == 1 ) q.push(i);
		
	}
	
	cout << edge/2 << endl;
	while( !q.empty() ){
		
		
		int leaf = q.front();
		
		q.pop();
		
		
		if(deg[leaf] == 0 ) continue;
		cout << leaf <<" " << sum[leaf] <<endl;
		
		deg[leaf]--;
		deg[sum[leaf]]--;
		
		sum[sum[leaf]] ^= leaf ; // if u have 5 then 5^5 = 0 so for substituting the node from the node sum we will do this :) 
		
		if( deg[sum[leaf]] == 1 ) q.push(sum[leaf]); 
		
		
		
		
		
	}
	
	
	
	return 0 ; 
}









