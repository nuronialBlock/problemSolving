#include <bits/stdc++.h>

using namespace std;

#define pii pair<int , int >
#define ff first
#define ss second

#define vi vector<int > 
#define vpi vector <pii>
#define vd vector <double >
#define vll vector <ll>
#define vb vector <bool >
#define vs vector <string >
#define pb push_back



#define sz size()
#define elif else if
#define ll long long 
#define ui unsigned int 



#define mii map<int , int >
#define mdd map<double,double>
#define msi map<string,int>
#define mis map<int , string> 

#define pq priority_queue
#define maxN 100009
#define maxX **
#define maxY ***
#define max 1000000000

template <class T> 
T pows(int a , int b){
	
	T ans = 1 ;
	
	for(ll i = 1 ; i  <= b ; i++  ) ans*=a; 
	
	return ans;
}

/***

"library ends on upside  

Be careful, becuz the history will be written downside. :) "

***////



int main()
{


	int n , k  ; 

	
	
	while(cin >> n >> k){
		
		vll ans ;
		int xtra  = 0 ;
		
		if(n < 2 && k > 0) { cout << -1 << endl; continue ; }
		if(n < 2 && k < 1 ) {
			for(ll i = 0  ; i < n ; i++ ){
				cout << max - i << " ";
				
			}
			cout << endl;
			continue;
		}
	
		int res = n  / 2 ;

		if( res > k  ) {cout << -1 << endl;  continue; }
		

		elif(res == k ){
			
			for(ll i = 1 ;  i <= n ; i++){
				cout << i << " ";
			}
			
			cout << endl;
		}
	
		else {
			
			int part = k % res  ;
			int per  = k / res  ;
			
			mii m1;
			
			ll odd = 1 ;
			ll even = 2;
			
			for(ll i = 0 ; i < res  ; i++ ){
				
				ans.pb(per);	
					
			}
			
			for(ll i = 0 ; i < part ; i++ ) ans[i]++ ;
			
			
			for(ll i = res -1  ;  i >= 0 ; ){
				
				ll num1 = ans[i] * odd ;
				ll num2 = ans[i] * even;
			
				if( m1[num1] == 0 && m1[num2] == 0 ) {
					
					m1[num1]++;
					m1[num2]++;
					cout << num1 << " " << num2 << " ";
					i--;
				}
				
				odd+=2;
				even+=2;
				
				
				
			}
			
			if(n%2){
				
				cout << max ;
				
			}
			cout << endl;
			  
		}





	}

	return 0;
}
