#include <bits/stdc++.h>
#define MAX 1000005

using namespace std ; 
bool isprime[MAX];
vector <int> prime ;

int main () {
	
	memset(isprime,true,sizeof(isprime));
	for ( long long i = 2 ; i < MAX ; i ++ ) {
		//printf("%i",i);
		if ( isprime[i] ) {
			prime.push_back((int)i);
			for ( long long j = i*i ; j < MAX ; j+= i ) {
				isprime[j] = false ; }
			
		}
		
	}
	int t ;
	int v ; 
	scanf("%i",&t);
	while(t--){
		scanf("%i",&v);
		printf("%i\n",prime[v-1]);
	}
	
}
