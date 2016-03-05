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

	int m ;
	map<pii,bool> mp;

	cin >> m;
	pii p;
	for(int i  = 0 ; i < m ; i++){
		cin >> p.ff >> p.ss;
		if(p.ff > p.ss) swap(p.ff , p.ss);
		mp[p] = 1;
	}

	int cnt = 0 ;
	
	for (int i = 1; i <= 5; ++i){
		for(int j = i+1 ; j <= 5 ; j++){
			for (int k = j+1; k < 6; ++k)
			{
				cnt = 0 ;
				p.ff = i;
				p.ss = j;
				if(mp[p]) cnt++;
				p.ff = i;
				p.ss = k;
				if(mp[p]) cnt++;
				p.ff = j;
				p.ss = k;
				if(mp[p]) cnt++;
				if(cnt == 3 || cnt == 0){
					cout << "WIN\n";
					return 0;
				}
			}	
		}
	}

	cout << "FAIL\n";
	return 0;
}

















