#include <bits/stdc++.h> 
#define MOD 1000000007


using namespace std; 
int main() 
{
	long long int a ,  b ,b2 ;
	long long int c ,  d ,d2 ; 
	unsigned long long int lcm = 0 ; 
	unsigned long long int sum = 0 ; 
	scanf("%lld %lld",&a,&b); 
	scanf("%lld %lld",&c,&d);
	if (a < 0 && b < 0  ) {
		a*= -1 ;
		b*= -1 ; }
	if (c < 0 && d < 0  ) {
	
		c*= -1 ;
		d*= -1 ; 
		} 
	
	int max = b > d ? b  : d  ; 
	int min = b < d ? b  : d  ; 
	
	while ( lcm == 0  ) {
		if ( max == min )  
			lcm = max ;
		else {
			while (max % min  != 0  ) {
				max += b > d ? b : d ; 
			}
			lcm  = max ; 
			
		} 
	} 
	
	
	sum += (lcm / b) * a ;
	sum += (lcm / d) * c ;
	printf("%lld %lld\n",sum,lcm);
	
	
}
