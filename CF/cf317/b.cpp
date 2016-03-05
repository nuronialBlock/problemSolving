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
#define rall(v) v.rbegin(),v.rend()
#define all(v) v.begin(),v.end()

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
	int  n , s1 ;
	cin >> n >> s1 ;
	char ch;
	cin.ignore();
	
	map<int,LL> mb , ms;
	
	vi b , s ;
	
	for(int i = 0 ; i < n ; i++){
		int p , q;
		cin >> ch >> p >> q;
		
		if(ch == 'B'){
			if(!mb[p]) b.pb(p);
			mb[p] += q;
		}
		else{
			if(!ms[p]) s.pb(p);
			ms[p] += q;
		}
		
	}
	
	sort(rall(b));
	sort(all(s));
	
	int size = s.size(); 
	if(s1 <= size){
		size = s1;
	}
	vi nv;
	
	for(int i = 0 ; i < size ; i++){
		nv.pb(s[i]);
	}
	
	sort(rall(nv));
	
	for(int i = 0 ; i < size ; i++){
		cout << "S " << nv[i] << " " << ms[nv[i]] << "\n";
	}
	
	
	size = b.size(); 
	if(s1 <= size){
		size = s1;
	}
	for(int i = 0 ; i < size ; i++){
		cout << "B " << b[i] << " " << mb[b[i]] << "\n";
	}
		
	return 0;
}















