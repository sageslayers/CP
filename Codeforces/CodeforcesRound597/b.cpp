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
	IOS ;
	cin.tie(0);
	int a  ,c ; 
	double b;  
	int rock,paper,scissor; 
	char tangan[101]; 
	char hasil[101] ;
	scanf("%i\n",&a);
	int count ;
	while ( a -- ) {
		count =  0 ; 
		scanf("%lf\n",&b);
		scanf("%i %i %i\n",&rock,&paper,&scissor);
		scanf("%s\n",&tangan);
		memset(hasil, 0, sizeof(hasil[0])*(b + 1));
		while ( rock + paper + scissor != 0  ) {
			for ( int i = 0 ; i < b ; i ++ ) {
				if ( tangan[i] == 'R' ){
					if ( paper != 0 ) {
						paper-- ;
						hasil[i] = 'P' ;
						count++ ; 
					}
				}
				else if ( tangan[i] == 'P' ){
					if ( scissor != 0 ) {
						scissor-- ;
						hasil[i] = 'S' ;
						count++ ; 
					} }
				else if ( tangan[i] == 'S' ){
					if ( rock != 0 ) {
						rock-- ;
						hasil[i] = 'R' ;
						count++ ; 
					}

					
				}
					
			}
			for ( int j = 0 ; j < b ; j ++ ) {
				if ( hasil[j] == 0 ) {
					if ( rock != 0 ) {
						hasil[j] = 'R' ;
						rock-- ; 
					}
					else if ( paper != 0 ) {
						hasil[j] = 'P' ;
						paper-- ;
					}
					else {
						hasil[j] = 'S' ;
						scissor -- ;
					}
				}
			}
			
		}
		if (count >= round(b/2) ) {
			printf("YES\n%s\n",hasil);

			
			
		}
		else { 
			p("NO\n");
		}
	}
	
}
