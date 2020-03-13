#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ;
	string s; 
	cin >> s ;
	int q ; 
	cin >> q ; 
	int kebalik = 0 ; 
	for ( int i = 0 ; i < q ; i ++ ) {
		int t ; 
		cin >> t;  
		if ( t==1 ) {
			if (kebalik == 0 )
				kebalik = 1 ;
			else
				kebalik = 0 ;
		}
		else if ( t== 2) {
			char c;  
			int f ; 
			cin >> f >> c;  
			if (kebalik == 0 && f == 1 ) 
				s.insert(s.begin(),1,c);
			else if ( kebalik == 0 && f == 2 ) 
				s.push_back(c);
			else if ( kebalik == 1 && f == 1 ) 
				s.push_back(c);
			else 
				s.insert(s.begin(),1,c);
		}
	}
	
	if (kebalik == 1 ) 
		reverse(s.begin(),s.end() );
	cout << s  << endl ;
	
	
}
