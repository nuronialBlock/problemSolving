// hasta la victoria siempre

#include <bits/stdc++.h>

using namespace std;

#define pii pair<int , int >
#define ff first
#define ss second

#define LL long long 
#define uLL unsigned long long

#define vi vector<int > 
#define vc vector<char > 
#define vpi vector <pii>
#define vd vector <double >
#define vb vector <bool >
#define vs vector <string >
#define pb push_back
#define sz size()


#define mii map<int,int>
#define mdd map<double,double>
#define msi map<string,int>
#define mis map<int , string> 
#define mLL map<LL,LL>
#define mLi map<LL,int>
#define miL map<int,LL>

#define pq priority_queue
#define maxN 100005
#define maxX **
#define maxY ***
#define maxx *****
#define mod 100000000

#define SET(a,n) memset(a,n,sizeof(a));

// loops 
#define loop(i,a,n) for(int i = a ; i < n ; i++ )
#define rloop(i,a,n) for(int i = a ; i > n ; i-- )
#define fasterIO ios::sync_with_stdio(0)


int main()
{

	fasterIO;
	int n , limsk ;
	cin >> n >> limsk;
	n--;
	vi v;
	for(int i = 0 ; i < n ; i++){
		int nu;
		cin >> nu;
		v.pb(nu);
	}
	sort(v.rbegin(),v.rend());
	LL count = 0 ;
	while(limsk <= v[0]){	
		v[0]--;
		sort(v.rbegin(),v.rend());
		count++;
		limsk++;	
	}	
	
	cout << count << "\n";
	return 0;
}



