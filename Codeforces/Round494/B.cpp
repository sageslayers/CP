#include<bits/stdc++.h>
using namespace std ;

int main ()  { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;
int a,b,k  ; 
cin >> a >> b >>  k ; 
int n = a + b ;
string s ; 

char x;  
if ( a> b) 
	x = '0'; 
else
	x = '1' ; 
s.push_back(x); 
if ( x == '0' ){
	a-- ; 
	x= '1' ; 
}else {
	b-- ;
	x= '0' ;
} 
for (int i = 1 ; i < n; i ++ ) {
	
 
}

cout << s << endl ; 



}
