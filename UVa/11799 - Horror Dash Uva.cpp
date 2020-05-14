//11799 - Horror Dash
#include <bits/stdc++.h>

using namespace std ;

int main() {
	int t ;
	
	scanf("%i",&t);
	for ( int i = 0 ; i < t ; i ++ ) {
		int out = 0 ;
		int a,b ; 
		scanf("%i",&a);
		int j ;
		for ( j = 0 ; j < a ; j ++ ) {
			scanf("%i",&b);
			out = max(out,b);
		}
		printf("Case %i: %i\n",i+1,out);
	}
}
