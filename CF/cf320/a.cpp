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


bool pow_of_2(int a){
	int b = a-1;
	if(a & b) return 0;
	else return 1;
}

int find_pow(int n){
	int val = 1;
	for(int i = 1 ; i <= 32 ; i++){
		val *= 2;
		if(val > n){
			val /= 2;
			return val;
		}
	}
	
}

int main()
{

	fasterIO;
	
	int n;
	int ans = 1;

	cin >> n;
	while(!pow_of_2(n) && n > 1){
		int temp = find_pow(n);
		n -= temp;
		if(ans > 99) break;
		ans++;
		
	}	
	
	
	cout << ans << "\n";
	
	return 0;
}

















