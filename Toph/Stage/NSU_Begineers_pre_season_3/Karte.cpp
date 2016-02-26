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
	string s;
	//freopen("in.txt","r",stdin);
	while(cin >> s){
		int p = 13 , k = 13 , h = 13 , t = 13 ;
		bool err = 0 ; 
		map<string , bool> maps;
		for(int i = 0 ; i < s.sz ; i += 3){
			char ch = s[i];
			string s1 = "";
			s1 += ch;
			if(ch == 'P'){
				char ch1 = s[i+1]; 
				s1 += ch1;
				ch1 = s[i+2];
				s1 += ch1;
				if(maps[s1]){
					err = 1;
				}
				else{
					maps[s1] = 1;
					p--;
				}
			}
			else if(ch == 'K'){
				char ch1 = s[i+1]; 
				s1 += ch1;
				ch1 = s[i+2];
				s1 += ch1;
				if(maps[s1]){
					err = 1;
				}
				else{
					maps[s1] = 1;
					k--;
				}
			}
			else if(ch == 'H'){
				char ch1 = s[i+1]; 
				s1 += ch1;
				ch1 = s[i+2];
				s1 += ch1;
				if(maps[s1]){
					err = 1;
				}
				else{
					maps[s1] = 1;
					h--;
				}
			}
			else if(ch == 'T'){
				char ch1 = s[i+1]; 
				s1 += ch1;
				ch1 = s[i+2];
				s1 += ch1;
				if(maps[s1]){
					err = 1;
				}
				else{
					maps[s1] = 1;
					t--;
				}
			}
			
			if(err) break;
		}
		
		if(err) {
			cout << "GRESKA\n";
		}
		else {
			cout << p << " " <<  k << " " <<  h << " " <<  t << "\n"; 
		}
	}
	
	return 0;
}

















