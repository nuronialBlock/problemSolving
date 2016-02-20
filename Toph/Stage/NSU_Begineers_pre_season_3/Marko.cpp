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
	map<char,char> maps;
	char idx = '2';
	for(char ch = 'a' ; ch <= 'z'; ){
		maps[ch++] = idx;
		maps[ch++] = idx;
		maps[ch++] = idx;
		if(ch == 's' || ch == 'z') maps[ch++] = idx;
		++idx;
	}
	
	int tc;
	//freopen("in.txt","r",stdin);
	while(cin >> tc){
		cin.ignore();
		string in, matchWith;
		vs v;
		loop(i,0,tc){
			cin >> in;
			v.pb(in);
		}
		cin >> matchWith;
		
		int cnt = 0 ;
		loop(i,0,tc){
			bool find = 1 ;
			int siz = v[i].sz;
			if(siz != matchWith.sz) continue;
			loop(j,0,siz){
				char ch = v[i][j];
				if(maps[ch] != matchWith[j]){
					find = 0 ;
					break;
				}
			}
			if(find) cnt++;
		}
		
		cout << cnt << "\n";
	}
	
	return 0;
}

















