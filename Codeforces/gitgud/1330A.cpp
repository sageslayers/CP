#include<bits/stdc++.h>
#define vi vector<int>
#define pb push_back
using namespace std ;

int main () { 

ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;

int t ; 

cin >> t;  
while ( t -- )   {
	int n , k ; 
	cin >> n >> k ; 
	 
	map <int,int> mp ; 
	for ( int i = 0 ; i < n ; i ++ ){ 
		int x;  
		cin >> x ; 
		mp.insert({x,1}) ; 
	}
	int v = 1 ;
	while (k!=0 ) {
		//cout << mp[i] << " " << k << endl ; 
	if ( mp[v] == 0 ){
		k-- ; 
		
	}
	v++ ; 
}
while (true ) {
	if ( mp[v] == 0 ) 
		break ; 
	v++ ; 
}
cout << v-1 << endl ; 
}



}
