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
	
	int n;
	cin >> n ;
	int ara[n+12];
	int ache[100005];
	memset(ache,0,sizeof ache);
	for(int i = 1 ; i <= n ; i++){
		cin >> ara[i];
		ache[ara[i]]++;
	}
	vi v;
	for(int i = 1 ; i <= n ; i++){
		if(!ache[i]) v.pb(i);
		
	}

	int idx = 0 ;
	for(int i = 1 ; i <= n ; i++){
		
		if( (ache[ara[i]] > 1 || ara[i] > n) && idx < v.size()){
			ache[ara[i]]--;
			ara[i] = v[idx];
			idx++;
		}
		
	}
	
	for(int i = 1 ; i <= n ; i++){
		
		cout << ara[i] << " ";
	
	}cout << "\n";
	
	return 0;
}



