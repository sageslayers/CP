#include<bits/stdc++.h>

using namespace std ;
#define MAX 1000005
int main() { 
	int n , k  ;
	cin >>  n >> k ; 
	bool isprime[MAX] ; 
	vector<int> prime ;
	
	prime.push_back(0);
			memset(isprime,true,sizeof(isprime));
	for ( long long i = 2 ; i < MAX ; i ++ ) {
		//printf("%i",i);
		if ( isprime[i] ) {
			prime.push_back((int)i);
			for ( long long j = i*i ; j < MAX ; j+= i ) {
				isprime[j] = false ; }
			
		}
		
	}
	
	
	for(int i = 0 ; i < n ; i ++ ) {
		cout << prime[i*k+1] << endl ;
	}
	
}



