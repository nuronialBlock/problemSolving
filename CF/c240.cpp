#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define ll long long

map<ll,ll> m;
int numUsed(int num ){
	
	if(m[num] == 1){
		return 1;
	}
	else {
		m[num] = 1;
		return 0;
	}
	
}

int main()
{
	
		ll n , k ;
	
	
		cin>>n>>k;
	
		
		ll  maxSize = n ;
		ll sum = 0;
		vector <ll> tmp;
		 
		if(k < n/2 ) cout << "-1" <<endl;
		
		else {
		
		
			int size = maxSize/2;
			ll num = 0;
			while(sum != k){
				
				num++;
				for (ll i = 0 ; i < size ; i++){
					tmp.pb(num);
					sum++;
					if(sum==k) break;
				}
				
			}
			
			ll i = 0 ;
			
			for( ; i < size  ; i++ ){
				
				ll num1 = 1 , num2 = 2 ;
				
				while(1){
					
					
					if( numUsed(tmp[i]*num1)== 0  && numUsed(tmp[i]*num2)==0){
						cout << tmp[i]*num1 << " ";
						cout << tmp[i]*num2 << " ";
						break;
					}
					
					num1++;
					num2++;
					
				
				}  
					
				
			}
			ll last = 10e8;
			cout <<last<< endl;
			
			
			
		
		}
	
	

	return 0;
}
