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
#define vLL vector<LL> 

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

LL gcd(LL a, LL b) { 
  if(b == 0) 
    return a;
  else 
    return gcd(b, a % b);
}

LL lcm(LL a, LL b) {
  return (a / gcd(a, b)) * b;
}

int main()
{

	fasterIO;
	
	int n;
	cin >> n;
	LL ans1 , num;
	vLL v;
	loop(i,0,n){
		cin >> num;
		v.pb(num);
	}
	
	loop(i,0,n){
		
		while(v[i] % 2 == 0) v[i] /=2;
		while(v[i] % 3 == 0) v[i] /=3;
		
	}
	
	bool got = 0;
	
	loop(i,1,n){
		if(v[i]!= v[0]) got = 1 ;	
	}

	if(!got) cout << "Yes\n";
	else cout << "No\n";
	
	return 0;
}



