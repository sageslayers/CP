#include <bits/stdc++.h>
using namespace std ;

int main () { 


ios_base::sync_with_stdio(false) ;
cin.tie(0) ; 
cout.tie(0) ; 

int t ; 
cin >> t ; 
while (t-- )  {
string s ; 
cin >> s ; 
if( count(s.begin(), s.end() , '0' ) == s.size() 
|| count(s.begin(),s.end(),'1') == s.size() )
	cout << s << endl ; 
else {
	int x; 
	if (s[0] == '0' )
		 x = 0 ;
	else
		 x= 1 ; 
		for(int i = 0 ; i < 2*s.size() ; i ++ ){
			cout << x ; 
			x = abs(x-1);
			}
			cout << endl ; 
}
	
	
}




}
