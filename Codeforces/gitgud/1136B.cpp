#include<bits/stdc++.h>
using namespace std ;

int main ()  { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;

int n , k ;
cin >> n >> k  ; 
int cur = 0 ; 

cur += n*3 ; 

cur += min((n-k),(k-1));

cout << cur << endl ; 




}
