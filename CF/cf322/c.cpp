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
#define mp make_pair



bool cmp1(pii p1 , pii p2){
    if(p1.ss != p2.ss){ 
        return p1.ss < p2.ss;
    }
}



bool cmp2(pii p1 , pii p2){
    if(p1.ff != p2.ff){ 
        return p1.ff < p2.ff;
    }
}


int main()
{

    fasterIO;
    
    int n , k , val;
    vpii arr;
    
    LL finalAns = 0;
    cin >> n >> k;
    loop(i,0,n){
        pii p; 
        cin >> val ;
        int need = 10 - (val % 10);
        p = mp(val,need);
        arr.pb(p);
    }
    
    sort(all(arr),cmp1);
    
    loop(i,0,n){
    	if(arr[i].ss == 10) break;
        if(k < arr[i].ss) break;
        int need = arr[i].ss;
        if(k >= need){
            k -= need;
            arr[i].ff += need;
        }
        if(k == 0) break; 
    }
    int add = 10;
    while(add <= 100){
		if(k < 10) break;
        loop(i,0,n){
            if(k < 10) break;
            if(arr[i].ff > 90) continue;
            arr[i].ff += 10;
            k -= 10;    
        }
        add += 10;
    }
    
    loop(i,0,n){
        finalAns = finalAns + (arr[i].ff / 10);
    }
    
    cout << finalAns << "\n";
    
    return 0;
}

