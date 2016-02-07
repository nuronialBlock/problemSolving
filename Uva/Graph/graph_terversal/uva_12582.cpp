// hasta la victoria siempre
// Joy Bangla!


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

int visited[100];
vc graph[100];
int siz ;
string s;
int idx = 0 ;

void dfs(char parent){
	if(siz == idx) return;
	char child = s[idx];
	if(visited[child]) {visited[child] = 2; return ;}
	else{
		//cout << "Here ...\n";	
		visited[child] = 1;
		graph[parent].pb(child);
		graph[child].pb(parent);
		
		while(idx < siz){
			idx++;	
			dfs(child);
			if(visited[child] == 2) break;
		}
		
		return;
	}	
}

int main()
{

	fasterIO;
	
	int tc , kase = 0 ; 
	cin >> tc ;
	while(tc--){
		++kase;
		cin >> s;
		siz = s.sz;
		cout << "Case "<< kase << "\n";
		for(int i = 0 ; i < 100 ; i++) graph[i].clear();
		SET(visited,0);
		char ch = s[0];
		idx = 0;
		visited[ch] = 1;
		while(idx < siz){
			idx++;	
			dfs(ch);
			if(visited[ch] == 2) break;
		}
		
		for(char i = 'A' ; i <= 'Z' ; i++){
			if(graph[i].size() > 0 ) cout << i << " = "<< graph[i].sz << "\n";
		}
		
	}
	
	return 0;
}

















