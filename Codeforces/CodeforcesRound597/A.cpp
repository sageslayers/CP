#include <bits/stdc++.h>
#define loop(i,a,b) for(int i = a; i < b; ++ i)
#define IOS ios_base::sync_with_stdio(0);
#define ll long long //data types used often, but you don't want to type them time by time
#define ull unsigned long long
#define ui unsigned int
#define us unsigned short
#define REMAX(a,b) (a)=max((a),(b)) // set a to the maximum of a and b
#define REMIN(a,b) (a)=min((a),(b));
#define mp make_pair
#define fi first
#define se second
#define getI(a) scanf("%d", &a) //next three are handy ways to get ints, it's also force you to use '&' sign
#define getII(a,b) scanf("%d%d", &a, &b)
#define getIII(a,b,c) scanf("%d%d%d", &a, &b, &c)
#define p printf

using namespace std;

int main () {
	int a , b , c ; 
	scanf("%i",&a);
	
	while(a-- ){
		scanf("%i %i",&b,&c);
		if ( __gcd(b,c) != 1 ) {
			printf("infinite\n");
		}
		else
			p("finite\n");
			
} }

