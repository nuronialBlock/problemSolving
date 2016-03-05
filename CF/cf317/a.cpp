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
	
	int n1 , n2 , k , m;
	cin >> n1 >> n2 ;
	
	int ara1[n1+2] , ara2[n2+2];
	
	
	
	cin >> k >> m ;
	
	for(int i = 1 ; i <= n1 ; i++) cin >> ara1[i];
	
	for(int i = 1 ; i <= n2 ; i++) cin >> ara2[i];
	
	
	int x = ara1[k];
	int y = ara2[n2-m+1];
	
	if(x >= y) cout << "NO\n";
	else cout << "YES\n";
	
	return 0;
}



