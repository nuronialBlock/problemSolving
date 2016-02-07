// hasta la victoria siempre
// Joy Bangla!


#include <bits/stdc++.h>

using namespace std;

#define pii pair<int , int >
#define pLL pair<LL,LL>
#define psi pair<string, int>
#define pdd pair<double,double>
#define ff first
#define ss second

#define LL long long 
#define uLL unsigned long long

#define vi vector<int > 
#define vc vector<char > 
#define vpii vector <pii>
#define vpsi vector<psi>
#define vd vector <double>
#define vb vector <bool>
#define vs vector <string>
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

#define PQ priority_queue
#define maxN 100005
#define maxX **
#define maxY ***
#define maxx *****
#define mod 100000000

#define SET(a,n) memset(a,n,sizeof(a))

#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

// loops 
#define loop(i,a,n) for(int i = a ; i < n ; i++ )
#define rloop(i,a,n) for(int i = a ; i > n ; i-- )
#define fasterIO ios::sync_with_stdio(0)


class edge {
public:	
	
	int u , v ;
	double w;
	edge(int a , int b , double c){
		u = a ; v = b ; w = c;
	}
	bool operator < (const edge& p) const{
		return w < p.w;
	}
};


vector<edge> graph;
int parent[1009];
double r;
int tc , n , kase = 0 ;

double dist(pdd p1 , pdd p2){
	double ans = (p1.ff - p2.ff );
	ans *= ans;
	ans += ((p1.ss - p2.ss ) * (p1.ss - p2.ss ));
	ans = sqrt(ans);
	return ans;
}

int find(int child){
	
	if(child == parent[child]) return child;
	return find(parent[child]);

}


void MST(){
	
	sort(all(graph));
	double cost_roads = 0 , cost_rails = 0;
	int cities = 1;
	loop(i,0,n) parent[i] = i;
	int tree_edge = 0;
	int siz = graph.sz;
	for(int i = 0 ; i < siz ; i++){
		
		int parent_u = find(graph[i].u);
		int parent_v = find(graph[i].v);
		
		if(parent_u != parent_v){
			
			parent[parent_u] = parent_v;
			double wgt = graph[i].w;
			if(wgt > r){
				cost_rails += wgt;
				cities++;
			}
			else{
				cost_roads += wgt;
			}
			tree_edge++;
		}
		
		if(tree_edge == n-1) break;
	}
	
	cout << "Case #"<< kase << ": ";
	cout << cities << " " << round(cost_roads) << " " << round(cost_rails) <<"\n";
	
}

int main()
{

	fasterIO;
	cin >> tc;
	
	while(tc--){
		
		cin >> n >> r;
		vector<pdd> v;
		loop(i,0,n){
			int x , y ;
			cin >> x >> y;
			v.pb(pdd(x,y));
		}
		
		graph.clear();
		
		loop(i,0,n){
			loop(j,i+1,n){
				double dis = dist(v[i],v[j]);
				graph.pb(edge(i,j,dis));	
			}
		}
		
		
		++kase;
		MST();
		
	}
	
	
	return 0;
}

















