#include <bits/stdc++.h>


using namespace std ;

void merge(int arr[],int l ,int m , int r ) {
	
	int n1 = m-l+1 ;
	int n2 = r-m ; 
	int L[n1] ;
	int R[n2] ;
	for(int i = 0 ; i < n1 ; i ++ ) {
		L[i] = arr[l+i] ;
	}
	for(int i = 0 ; i < n2 ; i ++ ) {
		R[i] = arr[m+i+1] ;
	}
	int i = 0 ;
	int j = 0 ; 
	int k = l ; 
	while ( i < n1 && j  < n2 ) {
		
		if ( L[i] <= R[j]  ) {
			arr[k] = L[i] ;
			i++ ; 
		}
		else {
			arr[k] =  R[j] ;
			j++;
		}
		k++ ; 
		
	}
	
	while ( i < n1 ) {
		arr[k++] = L[i++];
	}
	while ( j < n2 ) {
		arr[k++] = R[j++];
	}

} 

void mergesort(int arr[],int l , int r ) {
		if ( l < r ) {
			int m = (l + r) / 2 ; 
			mergesort(arr,l,m);
			mergesort(arr,m+1,r);
			merge(arr,l,m,r);
		}
}

int main () { 
	int n ; 
	cin >> n ; 
	int arr[n] ; 
	for(int i = 0 ; i < n ; i ++ ) {
		cin >> arr[i] ; 
	}
	mergesort(arr,0,n-1);
	for(int i = 0 ; i < n ; i ++ ){
		cout << arr[i] ; 
		if ( i  !=  n - 1 ) 
			cout << " " ;
	}
	cout << endl ; 
}
