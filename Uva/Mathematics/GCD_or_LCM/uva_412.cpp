// hasta la victoria siempre
// এবারের সংগ্রাম মুক্তির সংগ্রাম । এবারের সংগ্রাম,স্বাধীনতার সংগ্রাম । 

// notes:: the input constrain is wrong values in the array is in LL

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
#define vd vector <double >
#define vb vector <bool >
#define vs vector <string >
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

#define pq priority_queue
#define maxN 100005
#define maxX **
#define maxY ***
#define maxx *****
#define mod 100000000

#define SET(a,n) memset(a,n,sizeof(a));

#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

// loops 
#define loop(i,a,n) for(int i = a ; i < n ; i++ )
#define rloop(i,a,n) for(int i = a ; i > n ; i-- )
#define fasterIO ios::sync_with_stdio(0)

LL gcd(LL a , LL b){
	
	if(b==0) return a;
	else return gcd(b,a % b);
	
}

int main()
{

	int n ;
	while(scanf("%d",&n) == 1){
		
		if(!n) break;
		
		double pairs = (n * (n-1) ) / 2.0;
		LL ara[55];		
		loop(i,0,n){
			scanf("%lld",&ara[i]);
		}
		sort(ara,ara+n);
		int count = 0;
		loop(i,0,n-1){
			loop(j,i+1,n){
				LL res = gcd(ara[j],ara[i]);
				if(res == 1) count++;
			}
		}
		
		if(!count) {printf("No estimate for this data set.\n"); continue;}
		else{
			double pi = (6 * pairs * 1.0 ) / count ;
			pi = sqrt(pi);
			printf("%.6lf\n",pi);
		}
	}
	
	return 0;
	
}

















