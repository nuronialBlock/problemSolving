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
	
	string oudlers[] = {"twenty-one of trumps", "one of trumps" , "fool"};
	string pointCards[] = {"king" , "queen" , "knight" , "jack"};
	double toWin[] = {56.0,51.0,41.0,36.0};
	
	int tc , noOfCards , m;
	int k = 0 ;
	cin >> tc ;
	m = tc;

	while(tc--){
		if(k > 0)printf("\n");
		++k;
		cin >> noOfCards;
		vs v;
		int noOfOudlers = 0;
		double curPoints = 0;
		cin.ignore();
		for(int i = 0 ; i < noOfCards ; i++){
			string s; 
			getline(cin,s);
			bool got = 0;
			for(int j = 0 ; j < 3 ; j++){
				if(s == oudlers[j]){
					noOfOudlers++;
					curPoints += 4.5;
					got = 1;	
					break;
				} 				
			}
			if(!got) v.pb(s);
		}
		
		//for(int i = 0 ; i < v.size(); i++) cout << v[i] << endl;
		
		double willWin = toWin[noOfOudlers];
		
		for(int i = 0 ; i < v.size() ; i++){
			
			string s1 = "";
			
			for(int k = 0 ; v[i][k] != ' '; k++){
				char ch = v[i][k];
				s1 += ch; 
			}
			//cout << s1 << "\n";
			bool got = 0;
			for(int j = 0 ; j < 4 ; j++){
				if(pointCards[j] == s1){
					got = 1;
					if(j == 0) curPoints += 4.50; // it's a kings
					else if(j == 1) curPoints += 3.50;
					else if(j == 2) curPoints += 2.50;
					else if(j == 3) curPoints += 1.50;
					break;
				}
			}
			
			if(!got) curPoints += 0.50;
		}
		
		printf("Hand #%d\n",k);
		
		if(curPoints >= willWin){
			printf("Game won by %.0lf point(s).\n",curPoints - willWin);
		}
		else {
			printf("Game lost by %.0lf point(s).\n",willWin - curPoints);
		}
		
	
	}
	
	return 0;
}



