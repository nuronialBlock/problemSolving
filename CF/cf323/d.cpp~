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

int main()
{

	fasterIO;
	
	
	LL ara[105];
	
	LL  n , m ;
	
	LL limit = n * m ;
	
	cin >> n >> m  ;
	
	map<LL,LL> times;
	LL hi = 0;
	loop(i,0,n){
		cin >> ara[i];
		times[ara[i]]++;
		hi = max(hi,ara[i]);
	}
	LL info = 0;
	LL cnt = 0;
	
	bool needCheck = 1 ;
	int idxx = 0;
	loop(i,0,n){
		
		LL tmpInfo = info ;
		LL tmpCnt = 0 ;
		
		LL tmpInfo2 = info ;
		LL tmpCnt2 = 0 ;
		
		loop(j,0,n){
			if(tmpInfo == ara[j]) tmpCnt++;
			else if(tmpInfo < ara[j]){
				tmpCnt++;
				tmpInfo = ara[j];
			}
		}	
		
		loop(j,0,n){
			if(tmpInfo2 < ara[j]){
				tmpCnt2++;
				tmpInfo2 = ara[j];
			}
			else if(tmpInfo2 == ara[j]) tmpCnt2++;
		}	
		
		if(tmpCnt2 > tmpCnt){
			cnt += tmpCnt2;
			info = tmpInfo2;
		}
		else{
			cnt += tmpCnt;
			info = tmpInfo;
		}
		cout << cnt << " "<< info <<  "\n";
		idxx = i + 1;
		if(n > m && idxx == m){
			needCheck = 0 ;
			break;
		}
	}
	
	
	if(needCheck){
	
		LL has = times[hi];
	//	cout << "in here " <<  has << "\n";	
		LL chunk = (m - limit);
		chunk /= n;
		chunk *= has;
		cnt += chunk;
		
	}
	
	cout << cnt << "\n";
	
	
	return 0;
}

















