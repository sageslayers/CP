#include <bits/stdc++.h>

using namespace std ;


int main () { 

ios_base::sync_with_stdio(false) ;
cin.tie(0) ; 
cout.tie(0) ; 

int t ; 
cin >> t ; 
while (t-- )  {
int l , k ; 
cin >> l >> k  ; 
string s; 
cin >> s;  
sort(s.begin(),s.end() ) ;

vector<string> str(k);
int j = 0 ; 
for ( int i = 0 ; i < s.size() ; i ++ )  {
	str[j%k].push_back(s[i]);
	j++ ;
}
string y = "a" ;
int sz = 0 ; 
	for (int i = 0 ; i < k ; i ++ ) {
		y = max (y,str[i]);
	}
cout << y << endl ; 
}


}
