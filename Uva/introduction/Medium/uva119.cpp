// write a code for Shaking the world

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

	int n ;
	fasterIO;
	int k = 0 ;
	while(cin >> n){
		cin.ignore();
		string s;
		msi paise , dise ;
		vs v;
		for(int i = 0 ; i < n ; i++){
			cin >> s ; 
			paise[s] = 0;
			dise[s] = 0;
			v.pb(s);
		}	
		int have , given , ppl , perPerson; 
		for(int i = 0 ; i < n ; i++){
			
			cin >> s ;
			cin >> have >> ppl;
			
			if(ppl == 0) continue;
			
			perPerson = (have / ppl);
			given = perPerson * ppl;
			have -= given;
			
			//cout << perPerson << " " << given << " " <<  have << "\n";
			
			dise[s] += given;
				
				
				
			for(int j = 0 ; j < ppl ; j++){
				string s1;
				cin >> s1;
				paise[s1] += perPerson;
			}
				
		}
		if(k != 0) cout << "\n";

		for(int i = 0 ; i < n ; i++){
			cout << v[i] << " " << paise[v[i]] - dise[v[i]] << "\n";
		}
		k++;
			
	}
	
	return 0;
}











