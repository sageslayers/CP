#include<bits/stdc++.h>

using namespace std ;

int main() {
	int n ; 
	cin >> n; 
	int sum = 0 ; 
	for(int i = 0 ; i <= n ; i ++ ) {
		for(int j = 0 ; j <= n ; j ++ ){
			for(int k = 0 ; k <= n ; k ++ ){
				if(i + j + k == n )
					sum++;
			}
		}
	}
	cout << sum << endl ;
}

