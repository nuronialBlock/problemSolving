// hasta la victoria siempre
// Joy Bangla!


// Algo followed: Bin Search

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

//bool cmp(pair<LL,LL> p1 , pair<LL,LL> p2){
//	if(p1.ff != p2.ff) return p1.ff < p2.ff;
//}

int main()
{

	fasterIO;
	
	LL n , d;
	vector<pLL> ara;
	
	cin >> n >> d;
	
	loop(i,0,n){
		int a , b;
		cin >> a >> b;	
		ara.pb(pLL(a,b));
	}
	
	sort(all(ara));
	
	LL cum[100005];
	cum[0] = 0;
	vLL money;

	loop(i,0,n){
		cum[i+1] = cum[i] + ara[i].ss;
		money.pb(ara[i].ff); 
	}
	
	
	LL maxi = 0 ;
	
	loop(i,0,n){
		int idx = lower_bound(all(money),ara[i].ff + d) - money.begin();
		LL res = cum[idx] - cum[i];
		maxi = max(maxi,res);   
	}
	
	cout << maxi << "\n";
	
	return 0;
}

















