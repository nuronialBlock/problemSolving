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
#define maxN 1000009
#define maxX **
#define maxY ***

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


bool isPrime(int num ){
	
	if(num < 2 ) return false ;
	if( num == 2 ) return true;
	if( num%2 == 0 ) return false ;
	
	for(int i = 3 ;  i * i <= num ; i+=2 ){
		
		if(num%i == 0 ) return false; 
		
	}
	
	return true;

}



	



int main()
{





	int num;
	
	cin >> num;



	
	
	for(int i = 2 ; i <= num-2 ; i++ ){
	
		int a = num - i  ;
		if( !isPrime(a) && !isPrime(i) ) {cout << a << " " << i << endl; return 0 ;}
		
		
	}






	return 0 ;




}
