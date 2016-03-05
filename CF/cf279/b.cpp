#include <bits/stdc++.h>

using namespace std;

#define pii pair<int , int >
#define ff first
#define ss second

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
#define maxN 100009
#define maxX **
#define maxY ***
#define maxx 1000006
#define mod 100000000

#define SET(a,n) memset(a,n,sizeof(a));
#define loop0(i,n) for(int i = 0 ; i < n ; i++ ) 
#define loop1(i,n) for(int i = 1 ; i <=n ; i++)
 

template <class T> 
T pows(int a , int b){
	
	T ans = 1 ;
	
	for(int i = 1 ; i  <= b ; i++  ) ans*=a; 
	
	return ans;
}

/***

"library ends on upside  

Be careful, becuz the hsitory will be written downside. :) "

***////

int parent[maxx];
int child[maxx];
int ans[2*maxN]; 
int num[maxx];


int main()
{
	
	int n ; 



	while(cin >> n ){
	 
		SET(ans,0);
		SET(parent,-1);
		SET(child,0);
		SET(num,0);
		
		mii m1,taken;
		int siz = 0 ; 
		
		loop0(i,n){
			
			int a  , b ; 
			cin >> a >> b ;
		
			if(!taken[a] && a) {num[++siz] = a; taken[a]++;}
			
			if(!taken[b] && b) {num[++siz] = b;taken[b]++;}
			
			
			
			parent[b] = a ;
			child[a] = b ; 
			
			  
			if(!m1[a])m1[a]++;
			if(!m1[b])m1[b]++;
			
		}
		
		
		
		ans[0] = 0 ;
		ans[n+1] = 0 ; 
		
		ans[2] = child[0] ; 
		ans[n-1] = parent[0];
		
		m1[ans[2]]--;
		m1[ans[n-1]]--;
		if(!(n%2)){
		
			for(int i = 2 ; i <= (n-2) ; i+=2 ){
				ans[i+2] = child[ans[i]];
			}
		
		
			for(int i = n-1 ; i >= 3 ; i-= 2 ){
				
				ans[i-2] = parent[ans[i]];	
			}
		
		}

		else {
			
			for(int i = 2 ; i <= (n-3) ; i+=2 ){
				ans[i+2] = child[ans[i]];
				m1[ans[i+2]]--;
			}
			
			int found = 0 ;
			for(int i = 1 ; i <= siz  ; i++ ){
				
				if(m1[num[i]]==1){
					
					if(parent[num[i]] == -1 ) {ans[1] = num[i];found=1;}
					
				
				}
				if(found) break;
				
			}
			
			
			for(int i = 1 ; i <= (n-2) ; i+=2){
				ans[i+2] = child[ans[i]];
			}
			
		
		}
		
		
		loop1(i,n) cout << ans[i] << " ";
		
			
		cout <<endl;
		
		
		
		
	}


	return 0 ; 

}
