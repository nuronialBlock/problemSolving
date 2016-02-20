#include <bits/stdc++.h>

using namespace std;

void solve2(){
	cout << "00\n01\n81\n";
}

void solve4(){
	cout << "0000\n0001\n2025\n3025\n9801\n";
}

void solve6(){
	cout << "000000\n000001\n088209\n494209\n998001\n";
}

void solve8(){
	cout << "00000000\n00000001\n04941729\n07441984\n24502500\n25502500\n52881984\n60481729\n99980001\n";
}

int main(){
	ios_base::sync_with_stdio();
	int n;
	while(cin >> n){
		if(n == 2) solve2();
		else if(n == 4) solve4();
		else if(n == 6) solve6();
		else if(n == 8) solve8();
	}
	return 0;
}
