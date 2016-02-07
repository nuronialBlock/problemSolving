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
#define all(v) v.begin(),v.end()


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
	int a;
	while(cin >> a){
	
		vi vsis , vbro;
		vsis.pb(a);
		
		for(int i = 0 ; i < 2 ; i++){
			cin >> a;
			vsis.pb(a);
		}
		
		for(int i = 0 ; i < 2 ; i++){
			cin >> a;
			vbro.pb(a);
		}
		
		if(!a){
			break; 
		}
		sort(all(vsis));sort(all(vbro));
		
		vi v1 = vsis , v2 = vbro , vnew;
		
		int count = 0 ;
		for(int i = 1 ; i >= 0; i--){
			for(int j = 0 ; j < 3 ; j++){
				if(vsis[j] > vbro[i]){
					vsis[j] = -1;
					vbro[i] = -1;
					count++;
					break;
				}
			}
		}
		
		//	cout << count << "\n";
		
		if(count == 2) cout << -1 << "\n";
		else if(count == 1){
			int idx = 0 ;
			for(int i = 0 ; i < 3; i++){
				if(vsis[i] == -1){
					idx = i;
					break;
				}
			}
			
			int val;
			if(idx == 0 || idx == 1) val = vsis[2] + 1;
			else if(idx == 2) val = vsis[1] + 1;
			
			for(int i = 0 ; i < 3 ;i++) vnew.pb(v1[i]);
			for(int i = 0 ; i < 2 ;i++) vnew.pb(v2[i]);
			bool got;
			while(val < 53){
				got = 1;
				for(int i = 0 ; i < 5 ; i++){
					if(val == vnew[i]){got = 0 ; val++; break;}
				}
				if(got) break;
			}
			if(got) cout << val << "\n";
			else cout << -1 << "\n";
		}
		else{
		
			int val = 1;
			for(int i = 0 ; i < 3 ;i++) vnew.pb(v1[i]);
			for(int i = 0 ; i < 2 ;i++) vnew.pb(v2[i]);
			bool got = 0;
			while(val < 53){
				got = 1;
				for(int i = 0 ; i < 5 ; i++){
					if(val == vnew[i]){got = 0 ; val++; break;}
				}
				if(got) break;
			}
			if(got) cout << val << "\n";
		}
		
		
	}
	
	return 0;
}



