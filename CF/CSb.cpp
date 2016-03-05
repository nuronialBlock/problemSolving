#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n,k;
	
	while(cin>>n>>k){
		int a[109];
		int kom[109];
		int beshi[109];
		
		for(int i = 0; i < n ; i++){
			cin>> a[i];
		}
		
		sort(a,a+n);
		
		for(int i = 0; i < k ; i++){
			kom[i]=a[i];
		}
		sort(a+n,a);
		int j = 0;
		for(int i = n-1 ; i > k ; i++){
			beshi [j] = kom[i];
		}
		
		
	
	}
	
	return 0;
}
