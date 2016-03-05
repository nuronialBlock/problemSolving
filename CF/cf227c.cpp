#include <bits/stdc++.h>

using namespace std;

#define pii pair<int , int >
#define ff first
#define ss second

#define vi vector<int > 
#define vpi vector <pii>
#define vd vector <double >
#define vb vector <bool >
#define vs vector <string >
#define pb push_back
#define sz size


#define mii map<int , int >
#define mdd map<double,double>
#define msi map<string,int>
#define mis map<int , string> 

#define pq priority_queue
#define maxN 100009
#define maxX **
#define maxY ***

template <class T> 
T pows(int a , int b){
	
	T ans = 1 ;
	
	for(int i = 1 ; i  <= b ; i++  ) ans*=a; 
	
	return ans;
}


/***

library ends here  

"Be careful"

***////

int main()
{
	
	string s ;
	
	cin >> s ;
	
	
	
	int count = 0 ; 
	
	int n = s.sz();
	
	int point = n ; 
	
	for(int i = 0 ; i < n ; i++) s[i] -= '0';
		
	for(int i = n-1 ; i >=1 ; --i ){
		
		
		
		if( s[i]!= 0 && (i > point - i || (i == point - i   && ( s.substr(0,i) >= s.substr(i,point-i) ) ) ) ){
			
			count++;
			point = i ;
		}
		
	}
	
	cout << count+1 << endl;
	
	
	return 0;
}
