// hasta la victoria siempre
// Joy Bangla!


#include <bits/stdc++.h>

using namespace std;

#define pii pair<int , int >
#define pLL pair<LL,LL>
#define psi pair<string, int>
#define ff first
#define ss second

#define LL long long 
#define uLL unsigned long long

#define vi vector<int > 
#define vc vector<char > 
#define vpii vector <pii>
#define vpsi vector<psi>
#define vd vector <double>
#define vb vector <bool>
#define vs vector <string>
#define vLL vector <LL >
#define pb push_back
#define sz size()


#define mii map<int,int>
#define mdd map<double,double>
#define msi map<string,int>
#define mis map<int , string> 
#define mLL map<LL,LL>
#define mLi map<LL,int>
#define miL map<int,LL>
#define mci map<char,int>

#define PQ priority_queue
#define maxN 100005
#define maxX **
#define maxY ***
#define maxx *****
#define mod 100000000

#define SET(a,n) memset(a,n,sizeof(a))

#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

// loops 
#define loop(i,a,n) for(int i = a ; i < n ; i++ )
#define rloop(i,a,n) for(int i = a ; i > n ; i-- )
#define fasterIO ios::sync_with_stdio(0)

int main()
{

	fasterIO;
	
	LL ara[100005];
	LL ans[100005];
	LL hi[100005];
	int n;
	cin >> n;
	
	loop(i,0,n){
		
		cin >> ara[i];
	
	}
	LL maxi = ara[n-1] ;
	hi[n-1] = maxi;
	ans[n-1] = 0;
	rloop(i,n-2,0){
		maxi = max(maxi,ara[i]);
		hi[i] = maxi;
	}
	
	loop(i,0,n-1){
		if(ara[i] > hi[i+1]) ans[i] = 0;
		else ans[i] = hi[i+1] - ara[i] + 1; 
	}
	loop(i,0,n) cout << ans[i] << " ";
	cout << "\n";
	
	return 0;
}

















