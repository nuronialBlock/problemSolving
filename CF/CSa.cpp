#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	
	int n , k;
	
	while(cin >> n >> k) {
	
		char str[109];
	
		int ladder  = k-1 ;
	
		cin>>str;
		
		int size = n;
		int x1 = abs(ladder - (size-1));
		int y1 = ladder;
		
		if(ladder == 0 ){
			for(int i = 0 ; i < size ; i++ ){
				cout << "PRINT " << str[i] <<endl;
				if(i!= size-1) cout << "RIGHT" <<endl;
				
			}
		}
		else if(ladder == size-1){
			for(int i = size - 1; i >= 0 ; i-- ){
				cout << "PRINT " << str[i] <<endl;
				if(i!=0)cout << "LEFT" <<endl;
				
			}
		}
		
		
		
		else if(x1 < y1)  {
			
			for(int i = ladder; i < size ; i++ ){
				if(i!=ladder) cout << "RIGHT" <<endl;
			}	
			for(int i = size - 1; i >= 0 ; i-- ){
				cout << "PRINT " << str[i] <<endl;
				if(i!=0)cout << "LEFT" <<endl;
				
			}
			
		}
		else if(x1 > y1 ) {
		//cout <<"work";
			for(int i = ladder; i >= 0 ; i-- ){
				if(i!=ladder)cout << "LEFT" <<endl;
			}	
			for(int i = 0 ; i < size ; i++ ){
				cout << "PRINT " << str[i] <<endl;
				if(i!= size-1) cout << "RIGHT" <<endl;
				
			}
			
		}
		else {
		
			for(int i = ladder; i >= 0 ; i-- ){
				if(i!=ladder) cout << "LEFT" <<endl;
			}
			for(int i = 0 ; i < size ; i++ ){
				cout << "PRINT 	" << str[i] <<endl;
				if(i!= size-1) cout << "RIGHT" <<endl;
				
			}
		}
		
		
		
	
	}

	return 0;
}
