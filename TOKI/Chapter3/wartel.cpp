#include <bits/stdc++.h> 


using namespace std ; 



int BinarySearch (char arr[][11] , int l , int r , char tofind[] ) {
		
		if ( l <= r ) {
			
			int found = 0 ;
			int mid = l + (r-1) / 2  ; 
		//	printf(">>%s<<\n",arr[mid]);
			if( strcmp(arr[mid],tofind) < 0 )
				return BinarySearch(arr,mid+1,r,tofind ) ; 
			else if( strcmp(arr[mid],tofind) > 0 )
				return BinarySearch(arr,l,mid-1,tofind) ;
			else {
				return mid ;
			}
	
}
			return 0 ; 
}




int main () {
	int t1 , t2 ; 
	scanf("%i %i",&t1,&t2);
	char nama[t1+1][11] ; 
	char nomor[t1+1][11] ; 
	
	for ( int i = 0 ; i < t1 ;  ++ i  ) {
		scanf("%s",&nama[i]);
		scanf("%s",&nomor[i]);
	}
	
	
	while (t2-- ) {
		char tofind[11];
		scanf("%s",&tofind);
		int x = BinarySearch(nama,0,t1-1,tofind);
		if ( x == 0 )
			printf("NIHIL\n");
		else 
			printf("%s\n",nomor[x]);
	}
	
	
}

