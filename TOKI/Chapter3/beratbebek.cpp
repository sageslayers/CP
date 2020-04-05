#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)
#include <bits/stdc++.h>
using namespace std;
int main()
{
	BOOST ; 
	int n ; 
	
	int val  ;  
	vector<long long int>::iterator it ; 
	vector<long long int>::iterator it2 ; 
	cin >>  n ; 
	vector<long long int> angka ;
	while ( n -- )  { 
		cin >> val ;
		angka.push_back(val) ; 
	}
	int q ; 
	cin >> q ; 
	while ( q-- ) {
		long long int a , b ; 
		cin >> a >> b;  
		//cout << "A : " << a << " B : " << b << endl ;  
		it = upper_bound(angka.begin(), angka.end(), a ) ;
		cout << "## " << *it << endl ; 
		it2 = upper_bound(angka.begin(),angka.end(), b ) ; 
		//cout << "It : " << *it << " It2 : " << *it2 << endl ;  
		if (  *it2 != b )
			it2 -- ; 
		long long int sum = it2 - it + 1 ;
		cout << sum << endl ; 
	}
	

		
	



}
