#include <bits/stdc++.h>

using namespace std ;

int main () { 
	ios_base::sync_with_stdio(false) ; 
	cin.tie(NULL); 
	cout.tie(NULL) ; 
	int n ; 
	cin >> n; 
	string str ; 
	cin >> str ; 
	int count = 0 ; 
	for( int i = 0 ; i < n ; i ++ )  {
		if ( str[i] == 'R' && str[i+1] == 'U'  || str[i] == 'U' && str[i+1] == 'R'){
			count ++ ; 
			i++ ; 
		}
		else
			count++ ; 
	}
	cout << count << endl ; 
}
