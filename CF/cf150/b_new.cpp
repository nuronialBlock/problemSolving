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
int x , y ; 
map <ll,bool > visit;

// idea and implementation help nfssdq :)

int parseIt(char s[]){
	
	int siz = strlen(s);
	
	int ans = 0 ;
	
	loop(i,0,siz){
		
		ans = (ans*10) + (s[i]-'0');	
				
	}
	
	
	return ans; 
}


ll BFS(ll src){

	queue <ll> q ; 
			
	q.push(src);
	
	visit[src] = 1 ;
	
	ll count = 1 ; 	
	
	while( !q.empty() ){
		
		ll num = q.front();
		
		q.pop();
			
		ll  num1 = (num*10) + x ;
		ll  num2 = (num*10) + y ;
		
		
		
		
		if(visit[num1] == 0 && num1 <= highVal ){
			
			visit[num1]=1; 
			
			q.push(num1);	
			count++;
				
		}
		
		if(visit[num2] == 0 && num2 <= highVal ){
			
			cout << visit[num2]<< endl;
			
				
			visit[num2] = 1 ; 
			
			q.push(num2);	
				
			count++;
		}
		
		
		
			
	}
		
	return count ;
		
		
}
	
	


int main()
{



	char s[12] ; 
	
	scanf("%s",s) ;
	highVal = parseIt(s);	
	int noOfDigit = strlen(s); 
	
	
	ll ans = 0 ; 
	
	
	
	loop(x,0,10){
		
		loop(y,0,10){
			
			
			ll src = 0 ;
			
			src += (10 * src) + x ; 
			
			ans += BFS(src);
			
			src = 0 ; 
			src += (10 * src) + y ; 
			
			ans += BFS(src);
			
			
			
			
		}
		
	}
	
	
	cout << ans << endl;
	
	
	return 0 ; 
}









