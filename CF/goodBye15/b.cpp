// hasta la victoria siempre
// Joy Bangla!


#include <bits/stdc++.h>

using namespace std;

#define pii pair<int , int >
#define pLL pair<LL,LL>
#define psi pair<string, int>
#define pdd pair<double,double>
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

	//freopen("in.txt","r",stdin);
	LL a , b ;
	cin >> a >> b ;
	vi v;
	vLL value;
	LL p = 1;
	LL dbl = 2; 
	for (int i = 0; i < 61; ++i)
	{
		/* code */
		if((a >= p && a <= dbl) || (b >= p)){
			v.pb(i);
			value.pb(p*2);
		}
		p *= 2;
		dbl *= 2;

	}
	LL cnt = 0 ;
	for(int i = 0 ; i < v.sz ; i++){
		LL val = value[i]-1;
		LL power = v[i];
		LL p = 1;

		for (int j = 0; j < power; ++j)
		{
			/* code */
			LL inter = val - p ;
			if(inter >= a && inter <= b){
				cnt++;
			}
			p *= 2;
		}
	}
	cout << cnt << "\n";
	return 0;
}















