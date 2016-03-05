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



	int n , idx = 1 ; 
	
	cin >> n ;
	
	vs updater , oldy ; 
	
	string old = " " , newh =" " ; 
	
	
	map<string , int> handle; 
	
	oldy.pb(old);
	updater.pb(newh);
	
	
	loop(i,1,n+1){
	
		cin >> old >> newh ;
	
		if( handle[old] == 0 && handle[newh] == 0 ) {
			
			handle[old] = idx ; 
			handle[newh] = idx;
			
			oldy.pb(old);
			
			updater.pb( newh);  
			
			
			++idx;
			
		}
		
		else{
			
			int indx = handle[old];
			
			
			updater[indx] = newh ;
			
			handle[newh] = indx ; 
			
		}
		
		
		 
	
	}
	
	int siz = updater.size();
	
	cout << idx - 1  << endl;  
	loop(i,1,idx){
		
		cout << oldy[i] << " " << updater[i] <<endl;
		
	}
	
	
	
	
	return 0 ; 
}









