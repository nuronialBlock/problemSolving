#include <bits/stdc++.h>

using namespace std;

#define pii pair<int , int >
#define ff first
#define ss second

#define LL long long 
#define uLL unsigned long long

#define vi vector<int > 

int main()
{
	pii p1, p2 , p3 ;
	
	cin >> p1.ff >> p1.ss >> p2.ff >> p2.ss >> p3.ff >> p3.ss;
	
	bool got = false ;
	
	if(p2.ff + p3.ff <= p1.ff && max(p2.ss,p3.ss) <= p1.ss) got = true;
	if(p2.ff + p3.ss <= p1.ff && max(p2.ss,p3.ff) <= p1.ss) got = true;
	if(p2.ss + p3.ff <= p1.ff && max(p2.ff,p3.ss) <= p1.ss) got = true;
	if(p2.ss + p3.ss <= p1.ff && max(p2.ff,p3.ff) <= p1.ss) got = true;
	
	if(p2.ff + p3.ff <= p1.ss && max(p2.ss,p3.ss) <= p1.ff) got = true;
	if(p2.ff + p3.ss <= p1.ss && max(p2.ss,p3.ff) <= p1.ff) got = true;
	if(p2.ss + p3.ff <= p1.ss && max(p2.ff,p3.ss) <= p1.ff) got = true;
	if(p2.ss + p3.ss <= p1.ss && max(p2.ff,p3.ff) <= p1.ff) got = true;
	
	if(got) cout << "YES\n";
	else cout << "NO\n";
	
	return 0;
}
