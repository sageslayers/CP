#include <bits/stdc++.h>

using namespace std ;

int main ()  { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(0) ; 
cout.tie(0) ;

string s;
map<char,int> mp ; 
int x = 1;  
for (int i = '1' ; i <= '9' ; i ++ ) 
	mp.insert({i,x++}); 
cin >> s ; 
int len = 4;

long long ans = 0 ;
while ( len < s.size() ) {   
	
for (int i = 0 ; i < s.size()-len+1 ; i ++ ) {
	if ( s.substr(i,len) % '2019' == 0 )
		ans++ ;
	
}
 
len++ ; 
}
cout << ans << endl ; 


}

