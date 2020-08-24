#include<bits/stdc++.h>
using namespace std ;

bool comparator(pair<int,int> a , pair<int,int> b ) {
	if(a.first != b.first){
		return a.first < b.first ; 
	}
	return a.second > b.second ; 
}

int main () {
	long long int n ; 
	cin >> n ;
	int cnt = 0 ;
	vector<pair<long long int,int>> vect ; 


	while ( n / 5 > 0 || n / 2 > 0 || n / 1 > 0 ){
		//cout << n << endl ;
		
		long long int five = 5 ;
		long long int resFive = LONG_LONG_MAX ; 
		long long int two = 2 ; 
		long long resTwo = LONG_LONG_MAX ; 
		long long int one = 1 ; 
		long long resOne = LONG_LONG_MAX ; 
		while ( n / five >= 10 ) { 
			five*= 10 ; 
		}
		resFive = n / five ; 
		while ( n / two >= 10 ) { 
			two*= 10 ; 
		}
		resTwo = n / two ; 
		while ( n / one >= 10 ) { 
			one*= 10 ; 
		}
		resOne = n/ one ; 
		long long resLast = LONG_LONG_MAX;
		if ( resFive != 0 )
			resLast = min(resLast,resFive);
		if (resTwo != 0 )
			resLast = min (resLast,resTwo ) ; 
		if ( resOne != 0 )
			resLast = min (resLast,resOne);
		long long pengurang ;
		//9cout << resLast << endl ;
		if ( resLast == resFive ){
			vect.push_back({five,resFive});
			pengurang = five * resFive ; 
		}
		if ( resLast == resTwo ){
			vect.push_back({two,resTwo});
			pengurang = two * resTwo ; 
		}
		if ( resLast == resOne ){
			vect.push_back({one,resOne});
			pengurang = one * resOne ;
		}
			n-= pengurang ;
	} 
	cout << vect.size() << endl ; 
	for( auto & r : vect )
	cout << r.first << " " << r.second << endl ;

}
