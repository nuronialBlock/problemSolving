
// write a code for Shaking the world

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

string parseItToString(int n ){
	
	
	string s ; 
	
	while( n != 0 ){
		
		char ch = 48 + n %10 ; 
		s += ch;
		
		n /= 10 ;	
	}
	
	

	return s ; 
}

int addIt(string s ){

	int ans = 0 ;
	int siz = s.sz;

	loop(i,0,siz){
	
		ans += s[i] - '0';	
	
	
	}


	return ans  ; 
}





int main()
{



	int n ; 
	string s1 , s2 ;
	
	while(  getline(cin,s1) && getline(cin,s2)){
	
		int siz = s1.sz;
		
		int n1 = 0  ; 
		
		loop(i,0,siz) {
			
			if(s1[i] >= 'a' && s1[i]<= 'z') n1  += (s1[i]-96);
			
			if(s1[i] >= 'A' && s1[i]<= 'Z') n1  += (s1[i]-64);
			
		}
		
		string s3 = parseItToString(n1); 
	
		
		while( s3.sz != 1 ){
			
			n1 = addIt(s3);	
				
			s3 = parseItToString(n1);
			
		}
		
		
		
		
		int boy = s3[0] - '0';
		
		
//		// girl part 
		
		siz = s2.sz;
		
		n1 = 0  ; 
		
		loop(i,0,siz) {
			
			if(s2[i] >= 'a' && s2[i]<= 'z') n1  += (s2[i]-96);
			
			if(s2[i] >= 'A' && s2[i]<= 'Z') n1  += (s2[i]-64);
			
		}
		
		s3 = parseItToString(n1); 
		
		while( s3.sz != 1 ){
			
			n1 = addIt(s3);	
				
			s3 = parseItToString(n1);
			
		}
		
		int girl = s3[0] - '0';
		
		
		double ratio = min(boy,girl) / ( max(boy,girl) * 1.0 );
		
		
		double ans =100 ;
		
		printf("%.2lf",ans*ratio);
		
		cout << " %" <<endl;
	
	}
	
	
	return 0 ; 
}









