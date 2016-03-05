#include <bits/stdc++.h>

using namespace std;


int main()
{	

	int n , m;
	char str [1005][1005] ;
	int ara [1005];
	freopen("input.in","r",stdin);
	cin >> n >> m;
	
	int  candy , dwarf , dis , got = 0  ;
	
	
	for(int i = 0; i < n ; i++){
		
		scanf("\n");
		
		for(int  j = 0 ; j < m ; j++){
			
			scanf("%c",&str[i][j]);
			
			if(str[i][j]=='G') dwarf = j;
			else if(str[i][j]== 'S') candy = j;
			
		}
		
		dis = candy - dwarf ;
		ara[i] = dis ;
		if(dis < 0 ) got = 1;
		
	}
	
	if(got ) cout << "-1\n";
	
	else{	
		
		sort(ara,ara+n);
		
		int moves = 0;
		int add = 0;
		
		for(int i = 0 ; i  <  n ; i++ ){
		
			if(i>0){
					
				int k = ara[i] - add;
				
				if(k>0){
					moves++;
					add += k;
				}		
					
					
			}
			else {
				add = ara[i];
				moves++;
			}
			
					
		}
	 
	
		cout << moves << endl ;
	}
	return 0;
}
