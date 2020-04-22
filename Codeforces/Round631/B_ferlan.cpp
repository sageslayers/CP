#include <bits/stdc++.h>
using namespace std ;

#define SIZES 200005 

int p[SIZES] ; 
int ans[2][2] ;
int cnt ;  

bool solve(int arr[] , int n )  { 
	//cout << "N : " << n << endl ; 
	bool used[SIZES] ; 
	for( int i = 1 ; i <= n ; i ++ ) used[i] = 0 ; 
	for( int i =0 ; i < n ; i ++ ) {
	//	cout << arr[i] << " " ; 
		used[arr[i]] = 1; 
	}
	//cout << endl << endl ; 
	for( int i = 1;  i <= n ; i ++ ) {  
		if ( used [i] == 0 ) {
			return 0 ;
			}
		}
		return 1 ; 
}

bool pass (int len1, int n ) {
	//cout << "PASS : " << len1 <<" " << n << endl ; 
	return (solve(p,len1) && solve (p+len1 , n-len1 ) ) ; 
}

int main ()  { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;

int t ; 
cin >> t ;
while ( t-- ){
	cnt = 0 ;
	int  n ; 
	cin >> n ; 
	int maks = 0 ;
	for( int i = 0 ; i < n ; i++ ) {
		cin >> p[i] ; 
		if ( maks < p[i] ) maks = p[i] ; 
		}
	//cout << "MAKS" << maks << endl ; 
	if(maks*2 != n && pass(maks,n) ) {
		ans[cnt][0] = maks ; 
		ans[cnt][1] = n-maks ; 
		cnt++;  }
	if(pass(n-maks,n)) {
		ans[cnt][0] = n-maks ; 
		ans[cnt][1] = maks ; 
		cnt++ ; 
	}
	
	cout << cnt << endl ; 
for (int i = 0 ; i  < cnt ; i ++ ) 
	cout << ans[i][0] << " " << ans[i][1] << endl ;  
	
}


}
