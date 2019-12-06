#include <bits/stdc++.h> 
#define MOD 1000000007

long long euclidgcd (unsigned long long a ,unsigned long long b ) {
	 if (b == 0) return a;
    return euclidgcd(b, a%b);
}


long long lcmF  (unsigned long long a,unsigned long long b ) {
	return ( a * (b / euclidgcd(a,b)) ) ;
}

using namespace std; 
int main() 
{
	
	unsigned long long  a ,  b ,b2 ;
	unsigned long long c ,  d ,d2 ; 
	unsigned long long  lcm = 0 ; 
	unsigned long long  sum = 0 ; 
	scanf("%llu %llu",&a,&b); 
	scanf("%llu %llu",&c,&d); 


	lcm = lcmF(b,d);
	//printf(">>%lld<<\n",lcm);
	
	
	sum += ((lcm / b) * a ) + ((lcm / d) * c );
	
printf("%llu %llu\n",sum,lcm);
//	printf("%llu %llu\n",sum / euclidgcd(sum,lcm),lcm/euclidgcd(sum,lcm));
	
	
}
