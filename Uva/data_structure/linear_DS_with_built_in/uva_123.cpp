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

	string sem_break = "::";
	vs in , wrds;
	vpii index[10009];
	map<string,int> dict , title;
	vi v[10009];
	string s;
	
	while(cin >> s){
		if(s == sem_break) break;
		for(int i = 0 ; i < s.sz ; i++){
			char ch = s[i];
			if(ch >= 'a' && ch <= 'z') ch = ch - 'a' + 'A';
			s[i] = ch;
		}
		dict[s] = 1;
	}
	int idx = 0;
	int line = 0;
	cin.ignore();
	while(getline(cin,s)){
		pii p;
		if(s == "tada") break;

		in.pb(s);
		int i = 0 ;
		string word = "";
		while(i < s.sz){
			char ch = s[i];
			if((ch >= 'a' && ch <= 'z') ||(ch >= 'A' && ch <= 'Z')){
				if(ch >= 'a' && ch <= 'z') ch = ch - 'a' + 'A';
				if(!wrd.sz) p.ff = i;
				word += ch;
			}
			else{
				if(!dict[word] && word.sz){
		
					cout << word << " ";
		
					if(!title[word]){
						title[word] = idx;
						idx++;
						wrds.pb(word);
					}
					
					
					p.ss = i-1;
					index[title[word]].pb(p);
					v[title[word]].pb(line);
					
				}
				word = "";
			}
			++i;
		}
		if(!dict[word] && word.sz){
			if(!title[word]){
				title[word] = idx;
				idx++;
				wrds.pb(word);
			}
		
			p.ss = word.sz-1;
			index[title[word]].pb(p);
			v[title[word]].pb(line);
		}
		line++;
	}
	
	sort(all(wrds)); // all capital
	
	for(int i = 0 ; i < wrds.sz; i++){
		for(int j = 0 ; j < v[title[wrds[i]]].sz ; j++){
			idx = title[wrds[i]]][j];
			for(int k = 0 ; k < in[v[].sz ; k++)
		}
	
	}
	
	return 0;
}

















