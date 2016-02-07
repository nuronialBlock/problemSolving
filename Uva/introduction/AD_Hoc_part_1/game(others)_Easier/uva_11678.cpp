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
	
	int n , m ;
	
	while(cin >> n >> m){
		if(!n && !m) break;
		vi p1, p2;
		set<int> s1 , s2;
		int maxi = 0 ;
		for(int i = 0 ; i < n ; i++){
			int num;
			cin >> num;
			maxi = max(maxi,num);
			s1.insert(num);
		}	
		for(int i = 0 ; i < m ; i++){
			int num;
			cin >> num;
			maxi = max(maxi,num);
			s2.insert(num);
		}
		for(set<int>::iterator it = s1.begin()  ; it != s1.end(); it++){
			p1.pb(*it);
		}
		for(set<int>::iterator it = s2.begin()  ; it != s2.end(); it++){
			p2.pb(*it);
		}
		
		int ara[100005];
		memset(ara,0,sizeof ara);
		
		
		for(int i = 0 ; i < p1.size() ; i++){
			ara[p1[i]]++;
		}
		
		for(int i = 0 ; i < p2.size() ; i++){
			ara[p2[i]]++;
		}
		
		int ans = 0 ;
		
		for(int j = 0 ; j < p1.size() ; j++){
			if(ara[p1[j]] > 1) ans++;
		}
		
		int mini = p1.size() - ans;
		
		ans = 0 ;
		
		for(int j = 0 ; j < p2.size() ; j++){
			if(ara[p2[j]] > 1) ans++;
		}
		
		ans = (p2.size()- ans ) ;
		
		mini = min(mini,ans);
		
		
		cout << mini << endl; 
		
	}
	
	return 0;
}



