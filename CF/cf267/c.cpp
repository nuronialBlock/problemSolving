#include <bits/stdc++.h>

using namespace std;

#define pii pair<int , int >
#define ff first
#define ss second
#define ll long long 


#define vi vector<int > 
#define vll  vector<long long >
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




	int n , m , k ; 


	

	

	while(cin >> n >> m >> k ){
		vll p;
		ll ans = 0 ;	
		--m;
		
		for(int i = 0 ; i < n ; i++  ){
			int num;
			cin >> num ;
			p.pb(num);
			
		}		
		
		sort(p.rbegin() , p.rend());
		
		if(m == 0 ) {
		
			for(int i = 0 ; i < k ; i++ ){
				ans += p[i];
			}
		}
		
		
		if(m>0){
		
			int j = 0 ;
			
			for(int i = 0 ; i < n - 1 ; i++ ){
				
				if(p[i] - p [i+1] == m ){
					
					ans += p[i] + p[i+1]; 
					j++;
					i++;
				}
				
				if(j == k ) break;
				
			}
			
		}
		
		cout << ans << endl;
		
	}




	return 0 ;
}


