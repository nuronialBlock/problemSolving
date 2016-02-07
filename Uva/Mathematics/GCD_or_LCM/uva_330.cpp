// hasta la victoria siempre
// এবারের সংগ্রাম মুক্তির সংগ্রাম । এবারের সংগ্রাম,স্বাধীনতার সংগ্রাম । 


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

LL gcd(int a ,int b){
	
	if(b == 0) return a;
	else return gcd(b,a%b);
	
}



int main()
{

	fasterIO;
	
	int j , kase = 0 ;
	string s;
	while(cin >> j){
		if(j == -1) break;
		cin >> s;
		
		int k = s.sz - 2 - j;
		LL num1 = 0 , num2 = 0 , num ;

		int siz = s.sz;
		loop(i,2,siz){
			num1 = (num1 * 10) + (s[i]-'0'); 
		}
		
		loop(i,2,k+2){
			num2 = (num2 * 10) + (s[i]-'0'); 
		}
		
		//cout << num1 << " " << num2 << "\n";
		
		num = num1 - num2;
		LL din = pow(10,(k+j)) - pow(10,k) ; 
		
		if(!din){ // then value of num = 0 too 
			num = num1;
			din = pow(10,k);
		}
		
		LL div = gcd(din,num);
		
		num /= div;
		din /= div;
		++kase;
		
		cout << "Case " << kase << ": "; 
		cout << num << "/" << din << "\n"; 
		
	}
	
	return 0;
}

















