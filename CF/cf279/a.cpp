#include <bits/stdc++.h>

using namespace std;

#define pii pair<int , int >
#define ff first
#define ss second

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
#define maxN 100009
#define maxX **
#define maxY ***
#define maxx *****
#define mod 100000000

#define SET(a,n) memset(a,n,sizeof(a));
#define loop0(i,n) for(int i = 0 ; i < n ; i++ ) 
#define loop1(i,n) for(int i = 1 ; i <=n ; i++)
 

template <class T> 
T pows(int a , int b){
	
	T ans = 1 ;
	
	for(int i = 1 ; i  <= b ; i++  ) ans*=a; 
	
	return ans;
}

/***

"library ends on upside  

Be careful, becuz the hsitory will be written downside. :) "

***////

int main()
{
	
	int n ; 

	

	while(cin >> n ){
	
		int ara[3];	
		SET(ara,0);
		
		vi p , m , pe ; 
		
		
		
		loop0(i,n){
			
			int num ; 
			cin >> num;
			
			if(num == 1 ) {p.pb(i+1); ara[0]++; }
			if(num == 2 ) {m.pb(i+1); ara[1]++;}
			if(num == 3 ) {pe.pb(i+1); ara[2]++;}	
			
		}
		
		
		sort(ara,ara+3);
		
		
		int lo = ara[0]; 
		cout << lo << endl; 
		
		loop0(i,lo){
			
			cout <<p[i] << " "<<m[i] << " " << pe[i] <<endl; 	
			
		}
		
	
	}


	return 0 ; 

}
