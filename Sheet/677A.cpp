#include<bits/stdc++.h>

using namespace std ;

int main () { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;

int n  , k ; 
cin >> n  >> k ; 
int sum = 0 ; 
int x; 
for (int i = 0 ; i < n ; i ++ ) {
	cin >> x  ;
	sum+= (x  <= k ?  1 : 2  ) ; 
}
cout << sum << endl ; 

}
