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

using namespace std; 
int main () {
	 ios_base::sync_with_stdio(false); 
	 cin.tie(0);
	int a;  
	scanf("%i",&a) ; 
	while ( a-- ) {
		int minimum1 , minimum2, index;  
		
		int n , chain ; 
		int sum = 0 ; 
		int angka ; 
		scanf("%i %i", &n , &chain ) ; 
		vector <pair<int,int> > cost  ; 
		scanf("%i",&angka) ; 
		cost[0] = mp(angka,0); 
		sum += cost[0].first ; 
		for ( int i = 1  ; i < n ; i ++  ) {
			scanf("%i",&angka) ;
			cost[i].second = i ;  
		 }
		 printf("tes1");
		 for ( int i = 0 ; i < n ; i ++ ) {
			 printf("tes2");
			 if ( i == n-1) {
				 sum = sum + cost[0].first + cost[i].first ; 
			 }
			 else 
				sum = sum + cost[i].first + cost[i+1].first ; 
		 }
		 sort(cost.begin() , cost.end() );
		 printf("tes3");
		if ( chain < n )
			printf("-1\n");
		else { 
			printf("%i",sum + ( chain - n ) * cost[0].first  + cost[1].first ) ; 
			for ( int i = 0 ; i < n ; ++ i ) {
				if ( i == n-1 ) {
					printf("%i %i\n",i+1,1);
				}
				else {
					printf("%i %i\n",i+1,i+2);
				}
			}
			for ( int i = 0 ; i < chain - n ; i ++ ) {
				printf("%i %i",cost[0].second , cost[1].second );
			}
		}
	}
	
	
}
