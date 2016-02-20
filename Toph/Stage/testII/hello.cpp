#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str = "Psyrus";
	int sum = 1000000 ;
	for(int i = 0 ; i < 1200000 ; i++){
		sum /= i;
	}
	
	if(!sum){
			cout << "Hello, world!" << "\n";
	}
	
	return 0;
}
