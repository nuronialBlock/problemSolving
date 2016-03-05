#include <bits/stdc++.h>

using namespace std;

#define pii pair <int , int >
#define ff first
#define ss second
#define pb push_back


bool cmp (pair<int,int>a,pair<int,int>b) 
{
	return a.first<b.first;
}

int main()
{
    vector < pii > v;
    vector < pii > res;
    vector <pii> in;
    vector < pii > v1;
    pii p;
    pii p2;
    int n , k ;
    
    
    cin >> n;
    int n1 , n2 ;
    for(int i = 0 ; i  < n ; i++){
        
        cin >> n1 >> n2 ;
        p.ff = n2;
        p.ss = n1;
        p2.ff = n2;
        p2.ss = i+1;
        v.pb(p);
        in.pb(p2);
        
    }
    
    cin >> k ;
    
    for(int i = 0 ; i < k ; i++ ){
        
        cin >> n1 ;
        
        p2.ff = n1;
        p2.ss = i+1;
        
        v1.pb(p2);
        
    }
    
    sort( v.begin() , v.end(), cmp );
    sort(in.begin(),  in.end(),cmp );
    sort(v1.begin() , v1.end(),cmp);
    
    int m = 0;
    int s = 0; 
    
 
    pii p3;
    
    int vis[1009] ;
    
    for(int i = 0 ; i < 1009 ; i++) vis [i] = 0;
    
    for(int i = n - 1  ; i  >= 0  ; i--){
        
        int num =  v[i].ss;
        
        for(int j = 0; j < k ; j++ ){
        
            if( (v1[j].ff >= num   ) && vis[v1[j].ss]== 0 ){
                p3.ff = in[i].ss;
                p3.ss = v1[j].ss;
                res.pb(p3);
                s += v[i].ff;
                m++; 
                vis[v1[j].ss] = 1;
                
                break;
            }
        }
        
    } 
    
    cout << m << " " <<s << endl;
    
    for(int i = 0; i < m ; i++){
        cout << res[i].ff << " "<< res[i].ss <<endl; 
    }
    
    

    return  0 ;     
}
