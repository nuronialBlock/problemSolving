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



int n , t ;
bool diff[100005];
bool mark[100005][150];

int main()
{

	fasterIO;
	
	cin >> n >> t;
	
	string a , b;
	cin.ignore();
	getline(cin,a);
	getline(cin,b);
	
	SET(diff,0);
	SET(mark,0);
	
	int tot = 0 ;
	for(int i = 0 ; i < n ; i++){
		
		char ch1 = a[i] , ch2 = b[i];
			
		if(a[i] != b[i]){
			tot ++;
			diff[i] = 1;
			mark[i][ch1] = 1;
			mark[i][ch2] = 1;
		}
		else{ diff[i] = 0; mark[i][ch1] = 1;}
	}
	
	int mile = n - tot;
	int chaiMile = n - t;
	int hi_mil = mile + ((n-mile)/2);
	if(chaiMile > hi_mil){cout << -1 << "\n"; return 0;}

	string ans = "";	
	
	for(int i = 0 ; i < n ; i++){
		char ch = a[i];
		if(diff[i]){
			for(int j = 'a' ; j <= 'z' ; j++){
				if(!mark[i][j]) {ch = j; break;}
			}
			ans += ch;
		}
		else ans += ch;
	}
	
	if(chaiMile < mile){
		
		for(int i = 0 ; i < n ; i++){
			char ch = a[i];
			if(!diff[i]){
				for(int j = 'a' ; j <= 'z' ; j++){
					if(!mark[i][j]) {ch = j; break;}
				}
				ans[i] = ch;
				mile--;
			}
			
			if(chaiMile == mile) break;
		}	
		
	}
	else if(chaiMile > mile){
		bool got = 0 ;
		bool brkIt = 0 ;
		double mil = mile;
		for(int i = 0 ; i < n ; i++){
			char ch1 = a[i] , ch2 = b[i] , ch;
			if(diff[i]){
				brkIt = 0;
				for(int j = 'a' ; j <= 'z' ; j++){
					if(mark[i][j]) {
						if(!got && j == ch1){
							ch = j;
							got = 1; 
							brkIt = 1;
						}
						else if(got && j == ch2){
							ch = j;
							got = 0;
							brkIt =1;
						}
					}
					if(brkIt) break;
				}
				ans[i] = ch;
				mil += .5;
			}
			
			if(chaiMile == mil) break;
		}
	}
	
	cout << ans << "\n";
	
	return 0;
}

















