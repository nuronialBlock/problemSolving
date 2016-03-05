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
	string in , rIn , wants;
	cin >> in  >> wants;
	
	int wSz = wants.sz;
	int iSz = in.sz;

	map<char,bool> maps;
	loop(i,0,iSz){	
		char ch = in[i];
		maps[ch] = 1;
	}
	loop(i,0,wSz){
		char ch = wants[i];
		if(maps[ch] == 0){
			cout << -1 << "\n";
			return 0;
		}
	}

	rIn = in;
	reverse(all(rIn));
	//cout << rIn << "\n";

	vpii vp;
	for(int i = 0 ; i < wSz ; ){
		pii p , maxP;
		int cnt = 0;
		int hi = 0 ;
		int l = 0 ;
		int j = 0 ;

		for(j = 0 ; j < iSz ; j++){
			if(in[j] == wants[i+l]){
				if(!cnt) p.ff = j+1;
				cnt++;
				l++;
			}
			else if(in[j] == wants[i]){
				if(cnt > 0){
					p.ss = j;
				}
				if(cnt > hi){
					hi = cnt;
					maxP = p;
				}
				cnt = 0 ;
				l = 0;
				p.ff = j+1;
				cnt++;
				l++;
			}
			else{
				if(cnt > 0){
					p.ss = j;
				}
				if(cnt > hi){
					hi = cnt;
					maxP = p;
				}
				cnt = 0 ;
				l = 0;
			}
		}
		
		if(cnt > 0){
			p.ss = j;
		}
		if(cnt > hi){
			maxP = p;
			hi = cnt;
		}

		cnt = 0;
		l = 0 ;
		int rev = iSz;
		for(j = 0 ; j < iSz ; j++,rev--){
			if(rIn[j] == wants[i+l]){
				if(!cnt) p.ff = rev;
				l++;
				cnt++;
			}
			else if(rIn[j] == wants[i]){
				if(cnt > 0){
					p.ss =  rev+1;
				}
				if(cnt > hi){
					hi = cnt;
					maxP = p;
				}
				cnt = 0 ;
				l =  0;
				p.ff = rev;
				l++;
				cnt++;
			}
			else{
				if(cnt > 0){
					p.ss =  rev+1;
				}
				if(cnt > hi){
					hi = cnt;
					maxP = p;
				}
				cnt = 0 ;
				l = 0;
			}
		}


		if(cnt > 0){
			p.ss =  rev+1;
		}
		if(cnt > hi){
			maxP = p;
			hi = cnt;
		}

		if(hi > 0){
			i += hi;
			vp.pb(maxP);
		}
		else i++;
	}

	cout << vp.sz << "\n";
	for (int i = 0; i < vp.sz; ++i)
	{
		/* code */
		cout << vp[i].ff << " " << vp[i].ss << "\n";
	}


	return 0;
}

















