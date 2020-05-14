#include <bits/stdc++.h>
using namespace std ;
int p[40003] ; 
int len ; 


void solve(int a , int b ) {
	len = a* b; 
	p[0] = 0 ;  
	for (int i = 0 ; i <= a* b ; i ++ )  {
		p[i] = p[i-1] ; 
		if( (i % a)%b !=  (i%b)%a )
			p[i]++ ; 
	}
	
}

long long solve(long long l) {
	long long cnt = l / len ;
	return p[cnt] * 1ll + p[ l % len];
}

long long solve(long long l , long long r ) {
	return solve(r) - solve(l-1) ; 
}

int main () { 

ios_base::sync_with_stdio(false) ;
cin.tie(0) ; 
cout.tie(0) ; 

int t ; 
cin >> t ; 
while (t-- )  {

int a, b ,q ; 
cin >> a >> b >> q ; 
solve(a,b) ;
for ( int i = 0 ; i <= a*b;  i ++ ) 
	cout << p[i] << " " ; 
for ( int i = 0 ; i < q ; i ++ ) {
	long long l , r ; 
	cin >> l >> r ; 
	long long ans = solve(l,r) ;
	cout << ans << " " ;
}
cout << endl ; 


}


}
