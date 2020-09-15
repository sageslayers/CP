#include <bits/stdc++.h>
#define MAX 1000005

using namespace std ; 
bool isprime[MAX];

int main () {
	
	memset(isprime,true,sizeof(isprime));
	for ( long long i = 2 ; i < MAX ; i ++ ) {
		if ( isprime[i] ) {;
			for ( long long j = i*i ; j < MAX ; j+= i ) {
				isprime[j] = false ; }
			
		}
		
	}
	int n , m ;
	cin >> n >> m ;
	int cnt = 0 ; 
	for(int i = 0 ; i <= m/3+1 ; i ++  ) {
		for(int j = i ; j <= m/3+1  ; j ++ ) {
			for(int k = i+j ; k <= m/3+1 ; k ++ ) { 	
				if ( (((i*i) + (j* j)) == (k*k))  && (isprime[i] || isprime[j] || isprime[k]) && (i+j+k >= n  && i+j+k <= m) ){
					cnt++;
				}
			}
		}
	}
	cout << cnt << endl; 
}
