#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	ios_base::sync_with_stdio(false) ;
	cin.tie(0); 
	cout.tie(0);
	
	int t ; 
	cin >> t ; 
	while ( t-- ) {
		int n , k ; 
		cin >> n >> k ; 
		vector<int> vect ; 
		if( n %2 == 1 && k % 2 == 0 || n%2 == 0 && k%2 == 1 && n < k*2|| n%2 == 0 && k%2 == 0 && n < k*1 || k > n )
			cout << "NO" << endl ; 
		else{
			cout <<"YES"<< endl ; 
			int sum = 0 ; 
			if( n % k == 0){
				for (int i = 0 ; i < k ; i ++ )
					cout << n/k << " " ;
				cout << endl ; 
				continue ; 
			}
			else {
				int rem = n % k ; 
				int x = n / k ; 
				for (int i = 0 ; i < k ; i ++ ) { 
					vect.push_back(x); 
				}
				int sign ;
				
				vect[0]+= rem ;
				if ( k > 2 ){ 
					if ( vect[0] %2 != vect[1] % 2 ){
						vect[0]+=k-1 ; 
						for (int i = 1; i < k ; i ++ ) 
							vect[i]-- ; }
				}
				for (auto & r : vect )
					cout << r << " " ;
					cout << endl; 
			}
			
		}
	}
	
}

