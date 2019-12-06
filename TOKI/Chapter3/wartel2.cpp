#include <bits/stdc++.h> 


using namespace std ; 




int BinarySearch (string arr[] , int l , int r , string tofind ) {
		
		if ( l < r  ) {
			
			int mid = l + (r-1) / 2  ; 
			//cout << "##" << arr[mid] << endl ; 
			if( arr[mid] == tofind )
				return mid ;
			if(arr[mid] > tofind )
				return BinarySearch(arr,l,mid-1,tofind) ;
			else {
				return BinarySearch(arr,mid+1,r,tofind ) ; 
			}
	
}
			return 0 ; 
}




int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t1 , t2 ; 
	scanf("%i %i",&t1,&t2);
	string nama[t1+1] ; 
	string nomor[t1+1] ; 
	
	for ( int i = 0 ; i < t1 ;  ++ i  ) {
		cin >> nama[i] ;
		cin >> nomor[i] ;
	}

	
	while (t2-- ) {
		string tofind;
		cin >> tofind ; 
		int x = BinarySearch(nama,0,t1-1,tofind);
		if ( x == 0 )
			printf("NIHIL\n");
		else 
			cout << nomor[x] << "\n" ;
	}
	
	
}

