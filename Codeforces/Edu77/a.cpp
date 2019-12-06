#include <bits/stdc++.h> 
#define MOD 1000000007



using namespace std; 
int main() 
{
	
	int a ; 
	scanf("%i",&a) ; 
	while ( a-- ) {
		unsigned long long b,  c ; 
		scanf("%llu %llu",&b,&c);
		if ( b== 1 )
			printf("%llu\n",c*c) ; 
		else if ( c == 1 ) 
			printf("1\n");
		else {
			int count = c % b ; 
			unsigned long long sum = 0 ; 
			unsigned long long hitung = c / b ; 
			for ( int i = 0 ; i < count  ; i ++  ) {
				sum = sum + (hitung+1) * (hitung+1) ; 
			}
			for ( int i = 0 ; i < b  - count ;  i ++ ) {
				sum  += hitung * hitung ; 
			}
			printf("%llu\n",sum);
			
		}
		
	}
	
}
