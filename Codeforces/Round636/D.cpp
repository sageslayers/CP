#include <bits/stdc++.h>

using namespace std ;

int main ()  { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;

int t;  
cin >> t; 
while ( t--) {
int n , k ; 
cin >> n  >> k ;
int sz = n/2 ;  
vector<int> a(sz); 
vector<int> b(sz);
map<int,int> mp ;  
for (int i = 0 ; i < sz ; i ++ )
	cin >> a[i] ; 
for (int i = sz-1 ; i >= 0 ; i -- ) 
	cin >> b[i] ; 
for (int i = 0 ; i < sz ; i ++ )
	mp[a[i]+b[i]]++; 
int count = 0 ; 
int sum  = 0 ; 
for ( auto & r : mp ) {
	if ( r.second > count ) {
		count = r.second ; 
		sum = r.first ; 
	}
} 
int ans = 0 ; 
for (int i = 0 ; i < sz ; i ++ ) { 
	if ( min(a[i],b[i]) + k > sum )
		ans += 2 ; 
	else if ( max(a[i],b[i]) + 1 < sum )
		ans+= 2 ; 
	else if ( a[i] + b[i] == sum )
		continue ; 
	else
		ans +=1  ;

	
}
cout << sum << " " << count << endl ; 
cout << ans << endl ; 

}



}
