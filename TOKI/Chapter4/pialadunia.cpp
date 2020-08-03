#include<bits/stdc++.h>

using namespace std ; 
bool found ; 
void bruteforce(int i , int j , int n,  vector<int> & cur , vector<int> & dest ){
	if ( j!= 0 && j % n == 0 ) {
	i++ ;
	j = i+ 1 ; 
	}
	if ( i != n-1 ) {
	vector<int> dummy1 = cur ; 
	vector<int> dummy2 = cur ;
	vector<int> dummy3 = cur ; 
	dummy1[i] += 3 ; 
	dummy1[j] += 0 ; 
	dummy2[i] += 1 ; 
	dummy2[j] += 1 ; 
	dummy3[i] += 0 ; 
	dummy3[j] += 3 ;  
	bruteforce( i, j+1 , n , dummy1 , dest ) ;
	bruteforce( i, j+1 , n , dummy2 , dest ) ;
	bruteforce( i, j+1 , n , dummy3 , dest ) ;
	
}
if (i == n-1  ) {
bool flag = true ; 	
	for ( int x =  0 ; x < n ; x ++ ) {
		if ( cur[x] != dest[x] ){
			flag = false ;
			break ;
		}
	}
	if ( flag ){
		found =  true ; 
	}
}

}
int main() { 
	int t ; 
	cin >> t ; 
	while (t-- ) { 
		found = false ; 
		int n ; 
		cin >> n;
		vector <int> cur (n) ;  
		for ( int i = 0  ; i < n ; i ++ ) {
			cur.push_back(0) ; 
		}
		vector<int> dest(n); 
		
		for( int i = 0 ; i < n ; i ++  ) {
			cin >> dest[i] ; 
		}
		bruteforce(0,1,n,cur,dest);
		cout << (found ? "YES" : "NO") << endl ; 
	}
	
}
