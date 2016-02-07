// hasta la victoria siempre
// Joy Bangla!


#include <bits/stdc++.h>

using namespace std;

#define pii pair<int , int >
#define pLL pair<LL,LL>
#define psi pair<string, int>
#define ff first
#define ss second

#define LL long long 
#define uLL unsigned long long

#define vi vector<int > 
#define vc vector<char > 
#define vpii vector <pii>
#define vpsi vector<psi>
#define vd vector <double >
#define vb vector <bool >
#define vs vector <string >
#define vLL vector <LL >
#define pb push_back
#define sz size()


#define mii map<int,int>
#define mdd map<double,double>
#define msi map<string,int>
#define mis map<int , string> 
#define mLL map<LL,LL>
#define mLi map<LL,int>
#define miL map<int,LL>
#define mci map<char,int>

#define pq priority_queue
#define maxN 100005
#define maxX **
#define maxY ***
#define maxx *****
#define mod 100000000

#define SET(a,n) memset(a,n,sizeof(a));

#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

// loops 
#define loop(i,a,n) for(int i = a ; i < n ; i++ )
#define rloop(i,a,n) for(int i = a ; i > n ; i-- )
#define fasterIO ios::sync_with_stdio(0)

int main()
{

	fasterIO;
	
	int n , m1 , x , y ;
	char dir;
	string cmd ;
	bool snt[55][55];
	map<char,int> m;
	m['N'] = 0 ; m['E'] = 1 ; 
	m['S'] = 2 ; m['W'] = 3 ;  
	
	int dx[] = {0,1,0,-1};
	int dy[] = {1,0,-1,0};
	
	SET(snt,0);
	
	cin >> n >> m1;
	
	while(cin >> x >> y >> dir >> cmd){
		
		
		int curDir = m[dir];
		int resX = x , resY = y ;
		bool lost = 0;
		
		for(int i = 0 ; i < cmd.sz && !lost; i++){
//				
//			cout << resX << " " << resY << " \n" ;
//			cout << snt[resX][resY] << "\n";
//			if(curDir == 0) cout << "N";
//			else if(curDir == 1) cout << "E";
//			else if(curDir == 2) cout << "S";
//			else if(curDir == 3) cout << "W";	
//			cout <<   "\n";
//		
			char curCmd = cmd[i];		
			if(curCmd != 'F'){
				if(curCmd == 'R') curDir += 1;
				else curDir += 3;
				curDir %= 4;
				continue;
			}
			
			if(curCmd == 'F'){
				resX += dx[curDir];
				resY += dy[curDir];
			}
			
			if(resX < 0 || resY < 0 || resX > n || resY > m1){
				
				//cout << "scent: " << snt[resX][resY] << "\n";
				
				int X = resX , Y = resY; 
				
				X -= dx[curDir];
				Y -= dy[curDir];
				
				if(snt[X][Y] == 1){
					resX = X; 
					resY = Y;
					lost = 0 ;
				}
				else{
					lost = 1;
					snt[X][Y] = 1;
					resX -= dx[curDir]; 
					resY -= dy[curDir];
				}
	
				if(lost) break;
			}
		}
		
		
		cout << resX << " " << resY << " ";
		if(curDir == 0) cout << "N";
		else if(curDir == 1) cout << "E";
		else if(curDir == 2) cout << "S";
		else if(curDir == 3) cout << "W";
		
		
		if(lost) cout << " LOST\n";
		else cout << "\n";
		
	}
	
	return 0;
}

















