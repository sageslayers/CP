#include <bits/stdc++.h>

using namespace std ;

int main ()  { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(0) ; 
cout.tie(0) ;

int n ; 
cin >> n  ;
vector<string> str(n); 
set<string> s; 
for (int i = 0 ; i < n ; i ++ ) {
	string sx;  
	cin >> sx; 
	s.insert(sx); 
}
cout << s.size() << endl ;

}
