#include<bits/stdc++.h>


using namespace std ;

int main () { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;
int t ; 
cin >> t;  
while ( t-- )  {
int  n ; 
cin >> n ;
int fo = 1  ; 
vector<int> a (n) ; 
vector<int> b (n) ; 
bool neg = false ; 
bool pos =  false;  
for ( int i = 0 ; i < n ; i ++  ) 
	cin >> a[i] ; 
for (int i = 0 ; i < n ; i ++ ) 
	cin >> b[i] ; 
	
if( a[0] != b[0] ){ 
	cout << "NO" << endl ; 
	continue ;  
}
for( int i = 1 ; i < n ; i ++ )  {
	if(  a[i-1] == -1 )
		neg = true  ;
	if ( a[i-1] == 1 )
		pos = true ; 
		//cout << a[i] << " " << b[i] << " " << pos << " " << neg << endl ; 
	if ( b[i] < a[i] && !neg ) {
		//cout << "NO2" << endl ; 
		fo = 0 ; 
		break ;  
	}
	if ( b[i] > a[i] && !pos ) {
		//cout << "NO3" << endl ;
		 fo = 0 ; 
		break ; 
	}
		
}
if ( fo == 1 ) 
	cout << "YES" << endl ; 
else
	cout << "NO" << endl ; 
}

}
