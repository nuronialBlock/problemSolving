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
	
	LL n , k , x;
	cin >> n >> k >> x; 
	LL left[n+10] , right[n+10];
	vLL arr;
	LL ans = 0;
	LL opr = 1;
	
	loop(i,0,n){
		LL val;
		cin >> val;
		arr.pb(val);
	} 
	
	
	left[0] = arr[0];
	loop(i,1,n){
		left[i] = arr[i] | left[i-1];
	}
	
	right[n-1] = arr[n-1];
	for(int i = n-2 ; i >= 0 ; i--) right[i] = arr[i] | right[i+1];
	
	
	loop(i,0,k) opr *= x;
	
	ans = (arr[0] * opr);
	if(n > 1) ans |=  right[1];
	
	for(int i = 1 ; i < n - 1; i++){
		ans = max(ans,(left[i-1] | (arr[i] * opr) | right[i+1]));
	} 
	
	LL temp = (arr[n-1] * opr);
	if(n > 1) temp |= left[n-2];
	
	ans = max(ans,temp);
	
	cout << ans << "\n";
	
	return 0;
}

















