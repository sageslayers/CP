#include <bits/stdc++.h>

using namespace std ;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	vector <int> prime ;  
	bool isPrime[1000001]  ; 
	memset(isPrime,true,sizeof(isPrime));
	for (int i = 2 ; i <= 1000001  ; i ++ ) {  
		if (isPrime[i]) {
			prime.push_back(i);
		for( int j = i * 2 ; j <= 1000001 ; j += i  ) 
			isPrime[j] = false ; 
	}
	}

	int t ; 
	cin >> t ; 
	while ( t--  ) { 
		long long int a , b   ; 
		cin >> a >> b  ; 
		for ( int i = 0 ; i < b ; i ++ ) { 
			//cout << a << endl ; 
			if ( isPrime[a] )
			{
				a *= 2 ;
				a+= 2 * (b-i-1) ; 
				break ;  
			}
			
			else {
				if( a % 2 == 0 ) {  
					a+= 2 * (b-i) ; 
					break; 
				}
				for ( int j = 2 ; j <= sqrt(a) ; j ++ ) { 
				
					if ( a % j == 0 ) { 
						a+= j ;
						break ; 
					}
				}
			}
}
	cout << a << endl ; 
}

}
