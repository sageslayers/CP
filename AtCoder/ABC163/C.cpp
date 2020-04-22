#include <bits/stdc++.h>

using namespace std ;
#define pi 3.1415926535897932384626433832795
int main ()  { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;

int n ; 
cin >> n ; 
int arr[300000] ;  
for( int i = 1;  i < n ; i++ )  {
	int x; 
	cin >> x; 
	arr[x]++ ; 
}

for( int i = 1 ; i <= n ; i++ ) 
	cout << arr[i] << endl; 


}
