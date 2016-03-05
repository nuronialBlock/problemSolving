#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s1 , s2;
	int mara[130] = {0}, ara[130]={0};
	int n , m , area = 0;
	
	cin>>s1;
	scanf("\n");
	cin>>s2;
	
	for(int i = 0 ; i < s1.size() ; i++){
		mara[s1[i]]++;
	}
	
	
	for(int i = 0 ; i < s2.size() ; i++){
		ara[s2[i]]++;
		if(ara[s2[i]] <= mara[s2[i]] ) area++;
		else if( ara[s2[i]] > mara[s2[i]] && mara[s2[i]]==0 ){
			area = -1;
			break;
		}
	}
	
	cout << area << endl;

	return 0;
}
