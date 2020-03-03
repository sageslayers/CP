#include <bits/stdc++.h>

using namespace std ;


int main () { 

ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 

int n   ; 
int a ;  
cin >> n ; 
while  ( n --  )  { 
	cin >> a ;
	int sum = 0 ;  
	int b;  
	while ( a >= 10  ) {
	b =  a % 10 ; 
	a = a / 10  * 10 ; 
	sum += a ;  
	a = a / 10 + b;   
//	cout << a << endl ; 
}
	cout << sum+a << endl ; 
}

}
