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









int main()
{



	string eng = "HELLO" , spa = "HOLA" ,ger = "HALLO"  , fre = "BONJOUR" ,ita = "CIAO" , rus = "ZDRAVSTVUJTE" ;
	
	
	string done ="#" ;      	
	
	string input ;
	int kase  = 0; 
	while(getline(cin,input )){
		
		if(input == done ) break ; 
		
		
		++kase ; 
		
		cout << "Case "<<kase << ": "; 
		
		if(input == eng ) cout << "ENGLISH" << endl ;
		else if(input == spa ) cout << "SPANISH" << endl ;
		else if(input == ger ) cout << "GERMAN" << endl ;
		else if(input == fre ) cout << "FRENCH" << endl ;
		else if(input == ita ) cout << "ITALIAN" << endl ;
		else if(input == rus ) cout << "RUSSIAN" << endl ;
		
		else cout << "UNKNOWN" << endl ;
		
	}
	
	
	return 0 ; 
}









