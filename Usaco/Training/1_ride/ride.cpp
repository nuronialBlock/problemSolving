/*

ID: ahnaf933
PROG: ride
LANG: C++ 
                
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    
  	ofstream fout ("ride.out");
	ifstream fin ("ride.in");
    
    
    
    string cmt, grp;
   
    long long  mul1 = 1 ;
    long long   mul2 = 1 ;
    
    
    fin >> cmt >> grp;
    
    int  num ;
   	
   	for(int i = 0 ; i <cmt.size()  ; i++){
   		
   		num = cmt[i] - 64;
   		
   		mul1 *= num; 
 
 	}
   	
   	for(int i = 0 ; i <grp.size()  ; i++){
   		
   		num = grp[i] - 64;
   		
   		mul2 *= num; 
 
 	}

   		
	
	   	
   	if(mul1%47 == mul2%47) fout << "GO" <<endl;
   	else fout << "STAY" <<endl;
   	 
    return 0;
}

