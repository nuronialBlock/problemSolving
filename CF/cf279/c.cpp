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
#define maxN 1000006
#define maxX **
#define maxY ***
#define maxx *****
#define mod 100000000

#define SET(a,n) memset(a,n,sizeof(a));
#define loop0(i,n) for(int i = 0 ; i < n ; i++ ) 
#define loop1(i,n) for(int i = 1 ; i <=n ; i++)
#define rloop0(i,n) for(int i = n-1 ; i >= 0 ; i-- )
#define rloop1(i,n) for(int i = n ; i >= 1 ; i-- )

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

bool modA [maxN] , modB[maxN] ; 


int main()
{
	
	string s;

	while(cin >> s ){
		
		int n = s.length();
		int a , b , sum = 0 ; 
		
		SET(modA,0);
		SET(modB,0);
		
		
		cin >> a >> b ;
		
		
		loop0(i,n){
		
			int digit  = s[i] - '0';
			
			sum = sum * 10 + digit ; 
			
			sum %= a ;
			
			modA[i] = sum == 0 ; 
			
		}
		
		
		sum = 0 ;
		 
		int t =1; 
		
		rloop0(i,n){
			
			int digit  = s[i] - '0';
			
			sum = sum + t * digit ; 
			
			sum %= b ;
			
			t = t * 10 % b ; 
			
			modB[i] = sum == 0 ; 
			
		}
		bool got = 0 ; 
		loop1(i,n){
			
			if( s[i] != '0' && modA[i-1] && modB[i] ){
			
				printf("YES\n");
				
				loop0(j,i){
					cout << s[j] ;
				}
				cout << endl;
				
				for(int j = i ; j < n ; j++){
					cout << s[j] ;
				}
				cout << endl;
				got = 1 ;
				break;
				
			}
			
		}
		if(!got) cout << "NO"<<endl;
		
	}


	return 0 ; 

}
