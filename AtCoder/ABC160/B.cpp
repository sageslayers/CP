#include <bits/stdc++.h>

using namespace std ;
	
	
int main () {
	ios_base::sync_with_stdio; 
	cin.tie(0) ; 
	cout.tie(0)  ; 
	int x;  
	cin >> x ; 
	int res = x / 500 ; 
	int sum = res * 1000 ; 
	x = x - ( res* 500 ) ; 
	x /= 5 ; 
	x*= 5;  
	cout << sum + x << endl ; 
	

}
