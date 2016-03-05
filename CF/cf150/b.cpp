#include <bits/stdc++.h>

using namespace std;

#define pii pair<int , int >
#define ff first
#define ss second

#define ll long long 
#define ull unsigned long long

#define vi vector<int > 
#define vc vector<char > 
#define vpi vector <pii>
#define vd vector <double >
#define vb vector <bool >
#define vs vector <string >
#define pb push_back
#define sz size()


#define mii map<int , int >
#define mdd map<double,double>
#define msi map<string,int>
#define mis map<int , string> 

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


set <int > st ;
int highVal;

// idea and implementation help nfssdq :)

int parseIt(char s[]){
	
	int siz = strlen(s);
	
	int ans = 0 ;
	
	loop(i,0,siz){
		
		ans = (ans*10) + (s[i]-'0');	
				
	}
	
	
	return ans; 
}

void dfs(int x , int y , int noOfDigit , ll value ){
	
	
	if(value > highVal) return;
	
	else if(value <= highVal && value != 0 ) st.insert((int)value);
	
	else if(noOfDigit == 0 ) return ; 
	
	dfs(x,y,noOfDigit-1,10*value+x);
	dfs(x,y,noOfDigit-1,10*value+y);
	
	
	
}


int main()
{



	int n ; 
	
	char s[12] ; 
	
	scanf("%s",s) ;
	
	
	highVal = parseIt(s);
	
	int noOfDigit = strlen(s); 
	
	loop(x,0,10){
		
		loop(y,x,10){
			
			dfs(x,y,noOfDigit,0);
			
			
		}
		
	}
	
	
	cout << st.size() << endl;
	
	
	return 0 ; 
}









