#include <bits/stdc++.h> 
using namespace std ; 

void binary_search(vector<int> &arr , int l , int r , int x  ) {   
	if( r >= l ) { 
		int mid = (l+r+1) / 2 ;  
		cout << "#" << mid << endl ; 
		if( arr[mid] == x ) {
			cout << "Angka " << x << " Berada di index " << mid << endl ; 
		}
		else if ( arr[mid] > x ) 
			return binary_search(arr,l,mid-1,x) ; 
		else 
			return binary_search(arr,mid+1,r,x) ; 
	}
	else {
		cout << " Not Found " << endl ; 
	}
	
}

int main ( ) { 
vector<int> arr ;  

while ( true )  {	
	int n ; 
	cin >> n  ; 
	if( n  == 1 ) {  // masukkan angka 
		cin >> n ;  
		int x ; 
		for ( int i = 0 ; i < n ; i ++ ) {
		cin >> x;  
		arr.push_back(x) ; }
	}
	else if ( n == 2 ) {   // print array 
		for ( int i = 0  ; i < arr.size() ; i ++ ) 
			cout << arr[i]  << " " ;  
	}
	else if ( n == 3  ){ 
		for(int i = 0 ; i < arr.size()-1 ; i ++ ) {
			for( int j = 0 ; j < arr.size()-1-i ; j ++ )  {
				if(arr[j] > arr[j+1] ) 
					swap(arr[j],arr[j+1]); 
			}
		}
		
	}
	else if ( n == 4 )  {
			int x;  
			cin >> x;  
			binary_search(arr,0,arr.size() , x ) ; 
		
		
	}
}
	
	
}
