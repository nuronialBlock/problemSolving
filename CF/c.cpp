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


int n , p ; 
ll dp[maxN][2][2];	
string s ; 

ll memo(int pos , int LR , int UD ){
	
	
	if(isPlain()) return 1;
	
	ll &ans = dp[pos][LR][UD] ; 
	
	if(ans != -1 ) return ans ; 
	
	
	ans  = 0 ; 
	
	
	if(pos > (n/2) ){
		
		
		
	}	
		
		
		
}



int main()
{


	cin >> n >> p ;
	
	
	
	cha ch;
	
	scanf("%c",&ch);	
	cin >> s ;

	SET(dp,-1);
	
	cout << memo(p,0,0) << endl ;





	return 0 ;
}
