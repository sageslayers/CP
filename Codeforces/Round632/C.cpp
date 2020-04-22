#include<bits/stdc++.h>


using namespace std ;

int main () { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;
int t ; 
cin >> t;  

map <long long,long long> mp ; 
mp[0] = 0 ;
long long sum = 0 ; 
long long ans = 0 ; 
long long mx =  0 ;  
for (int i = 1 ; i <= t ; i++ ) {
	//cout << ans << endl ; 
	//cout << mx << endl ; 
	int x; 
	cin >> x; 
	sum+= x;
	 if( mp.find(sum) != mp.end() ) { 
		mx = max(mx,mp[sum]+1) ; 
	}
	mp[sum]= i ; 
	ans += i - mx ; 
}
cout << ans << endl ; 

}
