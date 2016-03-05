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

#define pq priority_queue
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

int main()
{

    fasterIO;
    
    int n ;
    LL p[4011] , d[4001] , v[4011] ;
    cin >> n ;
    v[0] = 0;
    d[0] = 0;
    for(int i = 1 ; i <= n ; i++){
        cin >> v[i] >> d[i] >> p[i];
    }
    
    vi ans;
    LL  xtra = 0 ;
    LL cnt = 0 ;
    int idx = -1;
    for(int i = 1 ; i <= n ; i++){
        if(p[i] < 0 ) continue;
        xtra = 0;
        if(p[i] >= 0 ){
            ans.pb(i);
            for(int j = i+1 ; j <= n ; j++){
                if(p[j] < 0) continue;
                if(p[j] - v[i] - xtra >= 0){
                    p[j] -= (v[i] + xtra);
                    if(v[i])v[i]--;
                }
                else{
                	p[j] = -1;
                    xtra += d[j];
                    if(v[i])v[i]--;
                }
            }
        }
    }
    
    cout << ans.sz << "\n";
    for(int i = 0 ; i < ans.sz ; i++){
        cout << ans[i] << " ";
    }
    
    if(ans.sz > 0 )cout << "\n";
    
    return 0;
}
