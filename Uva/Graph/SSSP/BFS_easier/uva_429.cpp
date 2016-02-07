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

int tc , noNode;
vi graph[203];
int visited[203];

int bfs(int src , int dst){
	if(src == dst) return 0;
	queue<int> q;
	q.push(src);
	SET(visited,-1);
	visited[src] = 0;
	while(!q.empty()){
		int node = q.front(); q.pop();
		for(int i = 0 ; i < graph[node].sz ; i++){
			int newNode = graph[node][i];
			if(newNode == dst) return (visited[node] + 1);
			if(visited[newNode] == -1){
				visited[newNode] = visited[node] + 1;
				q.push(newNode);
			}
		}
	}
}

int main()
{

	fasterIO;
	noNode = 0;
	map<string, int> ms;
	string s , in , src , dest;
	vs dictionary;
	cin >> tc;
	while(tc--){
		
		cin.ignore();
		while(cin>>s){
			if(s[0] == '*') break;
			if(!ms[s]){
				dictionary.pb(s);
				ms[s] = noNode;
				noNode++;
			}
		}

		for(int i = 0 ; i < noNode ; i++){
			string node = dictionary[i];
			for(int j = 0 ; j < noNode ; j++){
				string newNode = dictionary[j];
				if(node.sz != newNode.sz || (i == j) ) continue;
				int diff = 0 ;
				for(int k = 0 ; k < node.sz ; k++){
					if(newNode[k] != node[k]) diff++;
				}
				if(diff == 1){
					int u , v;
					u = ms[node]; v = ms[newNode];
					graph[u].pb(v);
				}
			}
		}
		cin.ignore();
		while(getline(cin,in)){
			bool got = false;
			for(int i = 0 ; i < in.sz ; i++){
				if(in[i] == ' ') {got = 1 ; break;}
			}
			if(!got){
				break;
			}
			else{
				src = "" ; dest = "";
				int idx = 0 ;
				while(in[idx] != ' '){
					char ch = in[idx];
					src += ch;
					++idx;
				}
				++idx;
				while(idx < in.sz){
					char ch = in[idx];
					dest += ch;
					++idx;
				}
				cout << src << " " << dest;
				int ans = bfs(ms[src],ms[dest]);
				
				cout << " " << ans << "\n";
			}
		}
		if(!tc) return 0;
		cout << "\n";
		cin >> s;
		noNode = 1;
		for(int i = 0 ; i < 203 ; i++) graph[i].clear();
		ms.clear();
		dictionary.clear();
		ms[s] = 0;
		dictionary.pb(s);
	}
	
	return 0;
}

















