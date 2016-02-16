/*

ID: nuronial_block
PROG: gift1
LANG: C++                  

*/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define vi vector <int> 

int main() 
{
    ofstream fout ("gift2.out");
    ifstream fin ("gift2.in");
    
    int tc ;
    vector <string > name ;
    map <string , int > m ;
    string n ;
    vi in , fn ;
    
    
    
    fin >> tc ;
    
    
    for(int i = 0 ; i < tc ; i++ ){
    	
    	fin >> n;	
    	name.pb(n);
    	m[n] = i ;
    	
    	in.pb(0) ; fn.pb(0);
    } 
    
    int j , k ;
    while(fin >> n ){
    
    	fin >> j >> k;
    	
    	if(j == 0 || k == 0 ) continue ;   
    	in[(m[n])] += j  ; 
    	fn[(m[n])] += (j%k) ;
    	for(int i = 0 ; i < k ; i++ ){
    		
    		fin >> n ;
    		
    		fn[m[n]] += (j/k) ;   
    		
    	} 
    	
    	
    	
    }
    
    for(int i = 0 ; i < tc ; i++){
    	fout << name[i] <<" "<<fn[i] - in[i] << endl ;
    
    }
    
    return 0;
}
