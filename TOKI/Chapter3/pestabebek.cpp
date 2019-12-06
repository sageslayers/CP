#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)
#include <bits/stdc++.h>
using namespace std;


int main ()  {
	BOOST ; 
	vector <string> arr ; 
	string s ; 
	vector <string>::iterator it ; 
	int n ; 
	cin >> n ; 
	cin.ignore() ; 
	
	while ( n-- ) { 
		cin >> s ; 
		arr.push_back(s) ; 
		sort (arr.begin() , arr.end() ) ;
		it = lower_bound(arr.begin(), arr.end(), s ) ; 
		cout << distance(arr.begin(),it) +1 << endl ;  
		
	}
	
}
