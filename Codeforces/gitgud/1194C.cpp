#include <bits/stdc++.h>

using namespace std ;

int main() {
	
	
	string a,  b, c ; 
	int n ; 
	cin >> n ; 
	
	while (n--) {
		cin >> a >> b >> c ; 
		map <char,int> mp ; 
		for (int i = 0 ; i < b.size(); i ++ ) 
			mp[b[i]]++ ; 
		for (int i = 0 ; i < a.size(); i ++ ) 
			mp[a[i]]-- ; 
		for (int i = 0 ; i < c.size() ; i++ ) {
			mp[c[i]] -- ; 
		}
		int found = 0 ; 
		for (auto & r : mp ){
			//cout << r.first <<  " " << r.second << endl ; 
			if( r.second > 0 ){
				found = 1 ; 
				break ; 
			}
		}
		int count = 0 ;
		for ( int j = 0 ; j < b.size() ; j ++ )  {
			if ( a[count] == b[j] ) {
				count++ ; 
			}
		}
		if ( count != a.size()  )
			found = 1; 
		if ( found == 1 )
			cout << "NO" << endl ; 
		else
			cout << "Yes" << endl ; 
				
	}
	
	
}
