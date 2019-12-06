#include <bits/stdc++.h> 
#define MOD 1000000007



using namespace std; 
int main() 
{
	int n ; 
	int k ; 
	
    long long int sum = 0 ; 
	scanf("%i %i",&n,&k) ;
	
	 long long int  a[n+1] ; 
	 long long int  b[k];
	long long int num ; 
	scanf("%lld",&a[0]);
	int batasakhir = 1 ; 
	long long int tampung ; 
	for ( int i = 1 ; i < n ; i ++ ) {
		scanf("%lld",&num);
		int d = batasakhir ; 
		for ( int x = 0 ; x  < d ; x ++ ) {
		if(num <= a[x]  ){
			
			for(int j = x ; j < d ; j ++ ) {
				tampung  = a[j+1] ; 
				a[j+1] = a[j];
			}
			printf(">>1||%i %llu %i %i<<\n",batasakhir,num,x,a[x]);
			a[x] = num  ; 
			batasakhir++ ; 
			x = batasakhir ; 
			for ( int y= 0  ; y < batasakhir ; y++ )
				printf("%lld ",a[y]);
				printf("\n");
		}
		else if (num > a[x] && x == batasakhir-1 ) {
			printf(">>2||%i %i %i %i<<\n",batasakhir,num,x,a[x]);
			a[batasakhir] = num ; 
			batasakhir ++ ; 
			x = batasakhir ; 
			for ( int y= 0  ; y < batasakhir ; y++ )
				printf("%lld ",a[y]);
				printf("\n");
		}
	} 
	}
		
		if ( k == 1 ) {
		printf("0\n");
		return 0 ;
	}

	
	int max = n-1 ; 
	int min = 0 ; 
	for ( int i = 0 ; i  < k ; ++i ){
		if ( i % 2 == 0 ) {
			b[i] = a[max]; 
			max -- ; 
		}
		else {
			b[i] = a[min]; 
			min++ ;
		}
	}
	for ( int i = 0 ; i < n ; i ++ ) 
		printf("%lld ",a[i]);
	for ( int i = 0 ; i < k ; i ++ )
		for (int j = i ; j < k ; j ++ )
			sum = sum + abs(b[i]-b[j]);
	
	//printf("%lld\n",sum);
}
