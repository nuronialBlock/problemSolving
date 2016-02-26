#include <bits/stdc++.h>

using namespace std;

void solve2(){
	for(int i = 0 ; i < 10 ; i++){
		for(int j = 0; j < 10 ; j++){
			int a = (i+j) * (i+j);
			int b = (i * 10) + j;
			if(a == b) cout <<i<<j<<"\n";
		}
	}
}

void solve4(){
	for(int i = 0 ; i < 10 ; i++){
		for(int j = 0; j < 10 ; j++){
			for(int k = 0 ; k < 10 ; k++){
				for(int l = 0; l < 10 ; l++){
					int a = ((i*10)+(j)+(k*10)+l) * ((i*10)+(j)+(k*10)+l);
					int b = (i * 1000) + (j * 100) + (k * 10) + l;
					if(a == b) cout <<i<<j<<k<<l<<"\n";
				}
			}
		}
	}	
}

void solve6(){
	for(int i = 0 ; i < 10 ; i++){
		for(int j = 0; j < 10 ; j++){
			for(int k = 0 ; k < 10 ; k++){
				for(int l = 0; l < 10 ; l++){
					for(int m = 0 ; m < 10 ; m++){
						for(int n = 0; n < 10 ; n++){
							int a = ((i * 100)+(j * 10)+k+(l * 100)+ (m * 10) +n) * ((i * 100)+(j * 10)+k+(l * 100)+ (m * 10) +n);
							int b = (i * 100000) + (j * 10000) + (k * 1000) + (l * 100) + (m * 10) + n;
							if(a == b) cout <<i<<j<<k<<l<<m<<n<<"\n";
						}
					}
				}
			}
		}
	}
}

void solve8(){
	for(int i = 0 ; i < 10 ; i++){
		for(int j = 0; j < 10 ; j++){
			for(int k = 0 ; k < 10 ; k++){
				for(int l = 0; l < 10 ; l++){
					for(int m = 0 ; m < 10 ; m++){
						for(int n = 0; n < 10 ; n++){
							for(int o = 0 ; o < 10 ; o++){
								for(int p = 0; p < 10 ; p++){
									int a = ((i * 1000)+ (j * 100) + (k * 10) + l + (m * 1000) + (n * 100) + (o * 10) +p) * ((i * 1000)+ (j * 100) + (k * 10) + l + (m * 1000) + (n * 100) + (o * 10) +p);
									int b = (i * 10000000) + (j * 1000000) + (k * 100000) + (l * 10000) + (m * 1000) + (n*100)+ (o*10) +p;
									if(a == b) cout <<i<<j<<k<<l<<m<<n<<o<<p<<"\n";
								}
							}
						}
					}
				}
			}
		}
	}
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
