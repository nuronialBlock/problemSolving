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
	//freopen("in.txt","r",stdin);
	string s;
	int kase = 0; 
	while(getline(cin,s)){
		if(s == "end") break;
		
		int idx = 0 , n = s.sz;
		vector < stack<char> > vst;
		stack<char> st;
		char ch = s[0];
		st.push(ch);
		vst.pb(st);
		st.pop();
		loop(i,1,n){
			ch  = s[i];
			int got = -1;
			for(int j = 0 ; j < vst.sz ; j++){
				if(ch <= vst[j].top()){
					got = j;
					break;
				}
			}
			if(got >= 0) vst[got].push(ch); 
			else{
				st.push(ch);
				vst.pb(st);
				st.pop();
				idx++;
			}
		}
		++kase;
		cout << "Case " << kase << ": " << idx + 1 << "\n";
	}
	
	return 0;
}

















