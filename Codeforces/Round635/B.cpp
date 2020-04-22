#include <bits/stdc++.h>

using namespace std ;

int main ()  { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;

int t ; 
cin >> t;  
while (t -- )  {
int hp  , n , m  ; 
cin >> hp >> n >> m ; 
while ( (hp / 2) + 10 < hp && n != 0  ) {
	hp = (hp/2) + 10 ; 
	n-- ; 
}
if ( m*10 >= hp )
	cout << "YES" << endl ; 
else
	cout << "NO" << endl ; 
	
	
	
}



}
