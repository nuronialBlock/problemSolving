
// write a code for Shaking the world

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

	int n ; 
	fasterIO;	
	while(cin >> n ){
	
		cin.ignore();	
		
		if(!n) break;
		string move , head = "+x"; 
		vs v;
		
		for(int i = 1 ; i < n ; i++){
			cin >> move;
			if(move == "No") continue;
			
			if(head == "+x"){
				head = move;
				continue;
			}
			else if(head == "-x"){
				char ch = move[0];
				if(move[0] == '+') head[0] = '-';
				else head[0] = '+';
				ch = move[1];
				head[1] = ch;
			}
			
			else if(head[1] == move[1]){
				if(move[0] == head[0]) head = "-x";
				else head = "+x"; 		
			}
				
		}
		cout << head << "\n";
	
	}
	
	
	return 0 ; 
}









